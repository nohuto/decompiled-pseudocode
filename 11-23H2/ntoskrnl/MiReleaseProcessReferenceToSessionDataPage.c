/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x140706EEC
 * Callers:
 *     MiDereferenceSessionGlobal @ 0x140637A5C (MiDereferenceSessionGlobal.c)
 *     MiGetNextSessionGlobal @ 0x140637A74 (MiGetNextSessionGlobal.c)
 *     MmDeleteProcessAddressSpace @ 0x140705BF8 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x140A32800 (MiSessionObjectDelete.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x14020B9C4 (MiPartitionIdToPointer.c)
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x140637BEC (MiUnlinkSessionList.c)
 *     MiFreeSessionId @ 0x140A32724 (MiFreeSessionId.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseProcessReferenceToSessionDataPage(_QWORD *P)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  _QWORD *v4; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  _QWORD **v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 3, 0xFFFFFFFF) == 1 )
  {
    MiUnlinkSessionList(P);
    v2 = *((_DWORD *)P + 2);
    v3 = MiPartitionIdToPointer(*((_WORD *)P + 183));
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v6 = 0;
      v9 = 0;
      v7 = &v4;
      v5 = v2;
      v4 = P;
      v8 = 12;
      EtwTraceKernelEvent((int)&v7, 1, 0x20400000u, 590, 4200450);
    }
    PsDereferencePartition(*(_QWORD *)(v3 + 200));
    MiFreeSessionId(v2);
    ExFreePoolWithTag(P, 0);
  }
}
