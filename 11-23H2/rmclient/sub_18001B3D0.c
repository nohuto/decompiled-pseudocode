/*
 * XREFs of sub_18001B3D0 @ 0x18001B3D0
 * Callers:
 *     sub_180017340 @ 0x180017340 (sub_180017340.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001B3D0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = xmmword_1800266B8;
    v6[1] = xmmword_180026150;
    v6[2] = *(_OWORD *)&dword_1800261B0;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
