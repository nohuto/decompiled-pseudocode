/*
 * XREFs of sub_18001B2C0 @ 0x18001B2C0
 * Callers:
 *     sub_180017300 @ 0x180017300 (sub_180017300.c)
 *     sub_180017320 @ 0x180017320 (sub_180017320.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001B2C0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = *(_OWORD *)&dword_180026668;
    v6[1] = xmmword_180026150;
    v6[2] = xmmword_18002AAF8;
    v6[3] = *(_OWORD *)&dword_1800261B0;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
