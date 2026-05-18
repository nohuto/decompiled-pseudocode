/*
 * XREFs of sub_18001E83C @ 0x18001E83C
 * Callers:
 *     sub_1800904E0 @ 0x1800904E0 (sub_1800904E0.c)
 *     sub_180090AB8 @ 0x180090AB8 (sub_180090AB8.c)
 * Callees:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_18001DBD0 @ 0x18001DBD0 (sub_18001DBD0.c)
 */

__int64 __fastcall sub_18001E83C(__int64 a1, __int64 a2, unsigned __int64 a3, size_t a4)
{
  _QWORD *v7; // rbx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  v7 = (_QWORD *)a1;
  *(_BYTE *)a2 = 0;
  sub_18001DBD0(a1, a3);
  if ( v7[2] - a3 < a4 )
    a4 = v7[2] - a3;
  if ( v7[3] >= 0x10uLL )
    v7 = (_QWORD *)*v7;
  sub_180011BA0((void **)a2, (char *)v7 + a3, a4);
  return a2;
}
