/*
 * XREFs of PpmHeteroHgsProcessorInit @ 0x140381550
 * Callers:
 *     PpmCheckProcessorInit @ 0x140381520 (PpmCheckProcessorInit.c)
 *     PpmHeteroHgsBackupProcessorInit @ 0x14059ECF0 (PpmHeteroHgsBackupProcessorInit.c)
 *     PoInitializePrcb @ 0x140A8C9B0 (PoInitializePrcb.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     PpmHeteroHgsProcessorThreadFeedbackInit @ 0x14059ED0C (PpmHeteroHgsProcessorThreadFeedbackInit.c)
 *     PpmHeteroInitializeFeedbackClass @ 0x14059EDA0 (PpmHeteroInitializeFeedbackClass.c)
 */

void __fastcall PpmHeteroHgsProcessorInit(__int64 a1, char a2, __int64 a3)
{
  unsigned int v9; // r10d
  __int64 v16; // r9
  __int16 v17; // r11
  bool v23; // zf
  __int16 v24; // r8
  int v25; // eax

  LOBYTE(a3) = a2;
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
        if ( !(_BYTE)a3 )
          PpmHeteroHgsHeteroCoreTypes = 1;
        _RAX = 26LL;
        if ( v9 >= 0x1A )
        {
          __asm { cpuid }
          *(_BYTE *)(a1 + 34125) = BYTE3(_RAX);
        }
      }
    }
    if ( !(_BYTE)a3 )
    {
      PpmHeteroHgsProcessorThreadFeedbackInit(_RCX, _RDX, a3, a1);
      _RAX = 6LL;
      __asm { cpuid }
      v23 = PpmHeteroHgsThreadEnabled == 0;
      *(_WORD *)(v16 + 34126) = WORD1(_RDX);
      if ( v23 )
        v24 = 8 * (WORD1(_RDX) + 2);
      else
        v24 = ((PpmHeteroHgsCapabilityBits * *((_WORD *)PpmHeteroCapability + 2) + 15) & 0xFFF8)
            + WORD1(_RDX) * ((v17 + PpmHeteroHgsCapabilityBits * *((_WORD *)PpmHeteroCapability + 2)) & 0xFFF8);
      *(_WORD *)(v16 + 34122) = v24;
      v25 = PpmHeteroInitializeFeedbackClass(v16);
      if ( v25 < 0 )
        KeBugCheckEx(0xA0u, 0x201uLL, v25, 0LL, 0LL);
    }
  }
}
