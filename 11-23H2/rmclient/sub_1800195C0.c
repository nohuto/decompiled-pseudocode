/*
 * XREFs of sub_1800195C0 @ 0x1800195C0
 * Callers:
 *     sub_180016C60 @ 0x180016C60 (sub_180016C60.c)
 *     sub_180016C80 @ 0x180016C80 (sub_180016C80.c)
 *     sub_180016CA0 @ 0x180016CA0 (sub_180016CA0.c)
 *     sub_180016CC0 @ 0x180016CC0 (sub_180016CC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800195C0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x50uLL);
  if ( v6 )
  {
    *v6 = xmmword_1800261A0;
    v6[1] = xmmword_1800261E0;
    v6[2] = unk_1800265D0;
    v6[3] = xmmword_180026200;
    v6[4] = xmmword_1800261F0;
    *a2 = 5;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
