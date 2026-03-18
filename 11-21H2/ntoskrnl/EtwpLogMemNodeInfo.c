/*
 * XREFs of EtwpLogMemNodeInfo @ 0x14062F0B8
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x14062F040 (EtwpLogMemInfoTimerCallback.c)
 * Callees:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmFillEtwHugeIoSpaceInformation @ 0x14057F560 (MmFillEtwHugeIoSpaceInformation.c)
 *     MmFillEtwNodeInformation @ 0x14057F634 (MmFillEtwNodeInformation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void EtwpLogMemNodeInfo()
{
  _BYTE *Pool2; // rbx
  unsigned __int16 **i; // rcx
  int v2; // eax
  unsigned __int16 **NextPartition; // rax
  unsigned __int16 **v4; // rdi
  int v5; // [rsp+48h] [rbp-C0h] BYREF
  int v6; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v9; // [rsp+68h] [rbp-A0h]
  __int64 v10; // [rsp+70h] [rbp-98h]
  _BYTE *v11; // [rsp+78h] [rbp-90h]
  int v12; // [rsp+80h] [rbp-88h]
  int v13; // [rsp+84h] [rbp-84h]
  _BYTE P[608]; // [rsp+88h] [rbp-80h] BYREF

  v6 = 0;
  LOBYTE(v5) = 0;
  LODWORD(v7) = 0;
  if ( EtwpHostSiloState != -4540
    && (*(_DWORD *)(EtwpHostSiloState + 4544) & 0x80000) != 0
    && EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x400uLL) )
  {
    if ( (unsigned __int16)KeNumberNodes > 8u )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, 76LL * (unsigned __int16)KeNumberNodes, 1953985605LL);
      if ( !Pool2 )
        return;
    }
    else
    {
      Pool2 = P;
    }
    for ( i = 0LL; ; i = v4 )
    {
      NextPartition = (unsigned __int16 **)PsGetNextPartition(i);
      v4 = NextPartition;
      if ( !NextPartition )
        break;
      LODWORD(v7) = MmFillEtwNodeInformation(NextPartition, (__int64)Pool2, (unsigned __int16)KeNumberNodes, &v6);
      UserData.Ptr = (ULONGLONG)&v6;
      *(_QWORD *)&UserData.Size = 4LL;
      v9 = &v7;
      v12 = 76 * v7;
      v10 = 4LL;
      v11 = Pool2;
      v13 = 0;
      EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_NODE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      if ( qword_140C52968 )
      {
        v2 = MmFillEtwHugeIoSpaceInformation(v4, (__int64)Pool2, (unsigned __int16)KeNumberNodes, &v5, &v6);
        LODWORD(v7) = v2;
        if ( (_BYTE)v5 )
        {
          v11 = Pool2;
          v13 = 0;
          v12 = 28 * v2;
          EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_HUGE_IOSPACE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        }
      }
    }
    if ( Pool2 != P )
      ExFreePoolWithTag(Pool2, 0);
  }
}
