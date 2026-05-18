/*
 * XREFs of sub_1800B8258 @ 0x1800B8258
 * Callers:
 *     sub_1800B83D0 @ 0x1800B83D0 (sub_1800B83D0.c)
 * Callees:
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *sub_1800B8258()
{
  if ( dword_1801FAE40 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801FAE40);
    if ( dword_1801FAE40 == -1 )
    {
      sub_180012190(qword_1801F6860, "ColorGrading", 0xCuLL);
      qword_1801F6890 = 0LL;
      qword_1801F6898 = 15LL;
      byte_1801F6880 = 0;
      sub_180012190((__int64 *)&byte_1801F6880, "ContrastCurve", 0xDuLL);
      qword_1801F68B0 = 0LL;
      qword_1801F68B8 = 15LL;
      byte_1801F68A0 = 0;
      sub_180012190((__int64 *)&byte_1801F68A0, "ToneMapping", 0xBuLL);
      qword_1801F68D0 = 0LL;
      qword_1801F68D8 = 15LL;
      byte_1801F68C0 = 0;
      sub_180012190((__int64 *)&byte_1801F68C0, "Vignette", 8uLL);
      qword_1801F68F0 = 0LL;
      qword_1801F68F8 = 15LL;
      byte_1801F68E0 = 0;
      sub_180012190((__int64 *)&byte_1801F68E0, "DepthOnly", 9uLL);
      qword_1801F6910 = 0LL;
      qword_1801F6918 = 15LL;
      byte_1801F6900 = 0;
      sub_180012190((__int64 *)&byte_1801F6900, "GroundPlane", 0xBuLL);
      atexit(sub_18011B960);
      sub_18000C548(&dword_1801FAE40);
    }
  }
  return qword_1801F6860;
}
