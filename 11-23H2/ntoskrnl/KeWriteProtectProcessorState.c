/*
 * XREFs of KeWriteProtectProcessorState @ 0x140A918B0
 * Callers:
 *     MakeGdtReadOnly @ 0x1403AE4AC (MakeGdtReadOnly.c)
 *     KiDynamicProcessorInitialization @ 0x14056BC68 (KiDynamicProcessorInitialization.c)
 * Callees:
 *     MmSetPageProtection @ 0x1403C2C70 (MmSetPageProtection.c)
 *     KeBugCheck @ 0x14041EA30 (KeBugCheck.c)
 *     VslFinishStartSecureProcessor @ 0x14054AF00 (VslFinishStartSecureProcessor.c)
 *     KiShadowProcessorAllocation @ 0x140A893F4 (KiShadowProcessorAllocation.c)
 */

char __fastcall KeWriteProtectProcessorState(__int64 *a1)
{
  __int64 v1; // rsi
  bool v3; // bl
  int v4; // eax

  v1 = *a1;
  v3 = VslVsmEnabled != 0;
  LOBYTE(v4) = MmSetPageProtection(a1[7], 0x1000uLL, 2u);
  if ( v3 )
  {
    LOBYTE(v4) = MmSetPageProtection(v1 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL, 2u);
    if ( KiKvaShadow )
      LOBYTE(v4) = MmSetPageProtection(a1[1], 0x1000uLL, 2u);
  }
  if ( !*((_DWORD *)a1 + 105) )
  {
    v4 = KiShadowProcessorAllocation((__int64)(a1 + 48), v1 - 12208, 0LL);
    if ( !v4 )
      KeBugCheck(0x7Du);
  }
  if ( VslVsmEnabled )
    LOBYTE(v4) = VslFinishStartSecureProcessor((__int64)(a1 + 48), (struct _MDL *)a1[4456]);
  return v4;
}
