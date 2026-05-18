/*
 * XREFs of sub_1800BA94C @ 0x1800BA94C
 * Callers:
 *     sub_1800BB174 @ 0x1800BB174 (sub_1800BB174.c)
 * Callees:
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *sub_1800BA94C()
{
  if ( dword_1801FAEFC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801FAEFC);
    if ( dword_1801FAEFC == -1 )
    {
      sub_180012190(qword_1801F69A0, "ColorGrading", 0xCuLL);
      qword_1801F69D0 = 0LL;
      qword_1801F69D8 = 15LL;
      byte_1801F69C0 = 0;
      sub_180012190((__int64 *)&byte_1801F69C0, "ContrastCurve", 0xDuLL);
      qword_1801F69F0 = 0LL;
      qword_1801F69F8 = 15LL;
      byte_1801F69E0 = 0;
      sub_180012190((__int64 *)&byte_1801F69E0, "Diagnostics", 0xBuLL);
      qword_1801F6A10 = 0LL;
      qword_1801F6A18 = 15LL;
      byte_1801F6A00 = 0;
      sub_180012190((__int64 *)&byte_1801F6A00, "GammaEncoding", 0xDuLL);
      qword_1801F6A30 = 0LL;
      qword_1801F6A38 = 15LL;
      byte_1801F6A20 = 0;
      sub_180012190((__int64 *)&byte_1801F6A20, "ToneMapping", 0xBuLL);
      qword_1801F6A50 = 0LL;
      qword_1801F6A58 = 15LL;
      byte_1801F6A40 = 0;
      sub_180012190((__int64 *)&byte_1801F6A40, "Vignette", 8uLL);
      atexit(sub_18011B9C0);
      sub_18000C548(&dword_1801FAEFC);
    }
  }
  return qword_1801F69A0;
}
