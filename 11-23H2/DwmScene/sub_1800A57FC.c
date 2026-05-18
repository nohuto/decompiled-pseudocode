/*
 * XREFs of sub_1800A57FC @ 0x1800A57FC
 * Callers:
 *     sub_1800A58E8 @ 0x1800A58E8 (sub_1800A58E8.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *sub_1800A57FC()
{
  if ( dword_1801D8A90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D8A90);
    if ( dword_1801D8A90 == -1 )
    {
      sub_180010DD0(qword_1801D8AA0, (__int64)"ColorGrading");
      sub_180010DD0(qword_1801D8AC0, (__int64)"ContrastCurve");
      sub_180010DD0(qword_1801D8AE0, (__int64)"ToneMapping");
      sub_180010DD0(qword_1801D8B00, (__int64)"Vignette");
      sub_180010DD0(qword_1801D8B20, (__int64)"DepthOnly");
      sub_180010DD0(qword_1801D8B40, (__int64)"GroundPlane");
      atexit(sub_1800F9520);
      sub_18000C538(&dword_1801D8A90);
    }
  }
  return qword_1801D8AA0;
}
