/*
 * XREFs of sub_1403C1E60 @ 0x1403C1E60
 * Callers:
 *     sub_1403C1E30 @ 0x1403C1E30 (sub_1403C1E30.c)
 *     sub_1405D90B0 @ 0x1405D90B0 (sub_1405D90B0.c)
 *     sub_140A59654 @ 0x140A59654 (sub_140A59654.c)
 * Callees:
 *     sub_14025E708 @ 0x14025E708 (sub_14025E708.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405D9120 @ 0x1405D9120 (sub_1405D9120.c)
 */

void __fastcall sub_1403C1E60(__int64 a1, char a2)
{
  unsigned int v9; // r10d
  __int64 v20; // r9
  __int16 v21; // r11
  bool v27; // zf
  __int16 v28; // r8
  int v29; // eax

  if ( byte_140D068E2 || a2 )
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
          byte_140D069E6 = 1;
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
      sub_14025E708();
      _RAX = 6LL;
      __asm { cpuid }
      v27 = byte_140D068E3 == 0;
      *(_WORD *)(v20 + 34126) = WORD1(_RDX);
      if ( v27 )
        v28 = 8 * (WORD1(_RDX) + 2);
      else
        v28 = ((dword_140D048D8 * *((_WORD *)qword_140D06998 + 2) + 15) & 0xFFF8)
            + WORD1(_RDX) * ((v21 + dword_140D048D8 * *((_WORD *)qword_140D06998 + 2)) & 0xFFF8);
      *(_WORD *)(v20 + 34122) = v28;
      v29 = sub_1405D9120(v20);
      if ( v29 < 0 )
        KeBugCheckEx(0xA0u, 0x201uLL, v29, 0LL, 0LL);
    }
  }
}
