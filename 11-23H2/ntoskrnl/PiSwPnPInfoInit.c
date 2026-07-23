/*
 * XREFs of PiSwPnPInfoInit @ 0x1408198A0
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140967C00 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x1406CCC6C (PnpAllocatePWSTR.c)
 *     PnpAllocateMultiSZ @ 0x14081995C (PnpAllocateMultiSZ.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwPnPInfoInit(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD *Pool2; // rax

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 64);
  result = PnpAllocateMultiSZ(*(void **)(a2 + 32));
  if ( (int)result >= 0 )
  {
    result = PnpAllocateMultiSZ(*(void **)(a2 + 48));
    if ( (int)result >= 0 )
    {
      if ( *(_QWORD *)(a2 + 56) )
      {
        Pool2 = (_OWORD *)ExAllocatePool2(256LL, 16LL, 1466986064LL);
        *(_QWORD *)(a1 + 16) = Pool2;
        if ( !Pool2 )
          return 3221225626LL;
        *Pool2 = *(_OWORD *)*(_QWORD *)(a2 + 56);
      }
      result = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 72), 0x7FFFuLL, 0x57706E50u, (PVOID *)(a1 + 24));
      if ( (int)result >= 0 )
        return PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 80), 0x7FFFuLL, 0x57706E50u, (PVOID *)(a1 + 32));
    }
  }
  return result;
}
