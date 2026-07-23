/*
 * XREFs of PsGetAllocatedFullProcessImageName @ 0x140742998
 * Callers:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140742964 (PsGetAllocatedFullProcessImageNameEx.c)
 *     PfCalculateProcessHash @ 0x140760E00 (PfCalculateProcessHash.c)
 *     PiUEventHandleVetoEvent @ 0x140882B88 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x1409645E0 (PnpLogVetoInformation.c)
 *     ViCreateProcessCallbackInternal @ 0x140AD6244 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageName(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 Pool2; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx

  v2 = *(_QWORD *)(a1 + 1472);
  Pool2 = ExAllocatePool2(64LL, *(unsigned __int16 *)(v2 + 2) + 16LL, 1850307408LL);
  v5 = 0;
  v6 = Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = *(_OWORD *)v2;
    if ( *(_QWORD *)(Pool2 + 8) )
    {
      *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
      memmove((void *)(Pool2 + 16), *(const void **)(v2 + 8), *(unsigned __int16 *)(v2 + 2));
    }
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
