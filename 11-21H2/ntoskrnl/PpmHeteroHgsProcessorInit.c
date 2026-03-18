/*
 * XREFs of PpmHeteroHgsProcessorInit @ 0x1403C1E60
 * Callers:
 *     PpmCheckProcessorInit @ 0x1403C1E30 (PpmCheckProcessorInit.c)
 *     PpmHeteroHgsBackupProcessorInit @ 0x1405D90B0 (PpmHeteroHgsBackupProcessorInit.c)
 *     PoInitializePrcb @ 0x140A59654 (PoInitializePrcb.c)
 * Callees:
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x14025E708 (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PpmHeteroInitializeFeedbackClass @ 0x1405D9120 (PpmHeteroInitializeFeedbackClass.c)
 */

void __fastcall PpmHeteroHgsProcessorInit(__int64 a1, char a2)
{
  unsigned int v9; // r10d
  __int64 v20; // r9
  __int16 v21; // r11
  bool v27; // zf
  __int16 v28; // r8
  int v29; // eax

  if ( PpmHeteroHgsEnabled || a2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    v9 = _RAX;
    if ( (unsigned int)_RAX >= 7 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RDX & 0x8000) != 0 )
      {
        if ( !a2 )
          PpmHeteroHgsHeteroCoreTypes = 1;
        _RAX = 26LL;
        if ( v9 >= 0x1A )
        {
          __asm { cpuid }
          *(_BYTE *)(a1 + 34125) = BYTE3(_RAX);
        }
      }
    }
    if ( !a2 )
    {
      PpmHeteroHgsProcessorThreadFeedbackInit();
      _RAX = 6LL;
      __asm { cpuid }
      v27 = PpmHeteroHgsThreadEnabled == 0;
      *(_WORD *)(v20 + 34126) = WORD1(_RDX);
      if ( v27 )
        v28 = 8 * (WORD1(_RDX) + 2);
      else
        v28 = ((PpmHeteroHgsCapabilityBits * *((_WORD *)PpmHeteroCapability + 2) + 15) & 0xFFF8)
            + WORD1(_RDX) * ((v21 + PpmHeteroHgsCapabilityBits * *((_WORD *)PpmHeteroCapability + 2)) & 0xFFF8);
      *(_WORD *)(v20 + 34122) = v28;
      v29 = PpmHeteroInitializeFeedbackClass(v20);
      if ( v29 < 0 )
        KeBugCheckEx(0xA0u, 0x201uLL, v29, 0LL, 0LL);
    }
  }
}
