/*
 * XREFs of sub_140810C28 @ 0x140810C28
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 */

__int64 __fastcall sub_140810C28(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rax
  _QWORD *v7; // rbx

  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 )
    v7 = *(_QWORD **)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v7 = 0LL;
  sub_140766258(a1, *a3);
  if ( !v7[2] )
  {
    ++*(_DWORD *)(v7[81] + 656LL);
    v7[81] |= 1uLL;
  }
  return sub_140810CB4(v7[4], a3, *(unsigned int *)(a1 + 16), a2);
}
