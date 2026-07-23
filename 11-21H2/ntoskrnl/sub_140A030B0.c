/*
 * XREFs of sub_140A030B0 @ 0x140A030B0
 * Callers:
 *     sub_1406EB634 @ 0x1406EB634 (sub_1406EB634.c)
 *     sub_140A0350C @ 0x140A0350C (sub_140A0350C.c)
 *     sub_140A03DA4 @ 0x140A03DA4 (sub_140A03DA4.c)
 * Callees:
 *     sub_140A0312C @ 0x140A0312C (sub_140A0312C.c)
 */

__int64 __fastcall sub_140A030B0(_QWORD *a1)
{
  _QWORD *v2; // rax
  void **v3; // rdx
  unsigned int v4; // edx
  unsigned int v5; // ebx

  if ( !a1 )
    return 3221225485LL;
  v2 = (_QWORD *)*a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (void **)a1[1], *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = *((unsigned __int16 *)a1 + 16) + *((unsigned __int16 *)a1 + 8) + 64;
  if ( v4 < 0x40 )
    v4 = -1;
  v5 = v4 + *((_DWORD *)a1 + 12);
  if ( v5 < v4 )
    v5 = -1;
  sub_140A0312C(a1);
  dword_140D04C28 -= v5;
  return 0LL;
}
