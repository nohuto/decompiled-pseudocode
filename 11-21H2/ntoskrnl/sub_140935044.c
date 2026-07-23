/*
 * XREFs of sub_140935044 @ 0x140935044
 * Callers:
 *     sub_1406D3128 @ 0x1406D3128 (sub_1406D3128.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     LpcSendWaitReceivePort @ 0x1406CE2B0 (LpcSendWaitReceivePort.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_140935044(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v6; // ebp
  KPROCESSOR_MODE v7; // si
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  __int64 Pool2; // rax
  _QWORD *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  size_t v15; // r8
  NTSTATUS v16; // eax
  __int64 v17; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v18[40]; // [rsp+40h] [rbp-138h] BYREF
  int v19; // [rsp+68h] [rbp-110h]

  v6 = 0;
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  while ( 1 )
  {
    if ( !qword_140D3CBD0 )
    {
      if ( !*(_DWORD *)(qword_140D3CE78 + 4) )
        return -1073741153;
      result = KeWaitForSingleObject(&stru_140C47340, Executive, v7, 0, 0LL);
      if ( result == 192 || result == 257 )
        return result;
      if ( qword_140D3CBD0 )
      {
        KeSetEvent(&stru_140C47340, 0, 0);
      }
      else
      {
        stru_140C47300.Parameter = &stru_140C47300;
        stru_140C47300.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140934110;
        stru_140C47300.List.Flink = 0LL;
        KeResetEvent(&stru_140C47320);
        ExQueueWorkItem(&stru_140C47300, DelayedWorkQueue);
        v9 = KeWaitForSingleObject(&stru_140C47320, Executive, v7, 0, 0LL);
        v10 = v9;
        if ( v9 != 192 && v9 != 257 && dword_140C47338 < 0 )
          v10 = dword_140C47338;
        KeSetEvent(&stru_140C47340, 0, 0);
        if ( v10 )
          return v10;
      }
    }
    Pool2 = ExAllocatePool2(256LL, 184LL, 538996553LL);
    v12 = (_QWORD *)Pool2;
    if ( !Pool2 )
      break;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_OWORD *)(Pool2 + 48) = *(_OWORD *)a1;
    *(_DWORD *)(Pool2 + 64) = *(_DWORD *)(a1 + 16);
    *(_OWORD *)(Pool2 + 68) = *a2;
    *(_OWORD *)(Pool2 + 84) = a2[1];
    *(_OWORD *)(Pool2 + 100) = a2[2];
    *(_OWORD *)(Pool2 + 116) = a2[3];
    if ( *(_DWORD *)(a3 + 8) < 0x24u )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return -2147483643;
    }
    *(_DWORD *)(Pool2 + 132) = *(_DWORD *)(a3 + 12);
    *(_OWORD *)(Pool2 + 136) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 152) = *(_OWORD *)(a3 + 32);
    v13 = *(_DWORD *)(a3 + 8);
    if ( v13 > 0x24 )
    {
      v14 = v13 - 36;
      v15 = 16LL;
      if ( v14 <= 0x10 )
        v15 = v14;
      memmove(v12 + 21, (const void *)(a3 + 48), v15);
    }
    *v12 = 12058768LL;
    v17 = 256LL;
    v16 = LpcSendWaitReceivePort((int)qword_140D3CBD0, 0x20000, (int)v12, (__int64)v18, (__int64)&v17, 0LL);
    v10 = v16;
    if ( v16 != -1073741769 && v16 != -1073740029
      || (v10 = KeWaitForSingleObject(&stru_140C47340, Executive, v7, 0, 0LL),
          ObfDereferenceObject(qword_140D3CBD0),
          qword_140D3CBD0 = 0LL,
          KeSetEvent(&stru_140C47340, 0, 0),
          v6) )
    {
      if ( v10 >= 0 )
        return v19;
      return v10;
    }
    v6 = 1;
  }
  return -1073741670;
}
