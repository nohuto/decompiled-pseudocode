/*
 * XREFs of sub_140A22CA4 @ 0x140A22CA4
 * Callers:
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 * Callees:
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
 */

__int64 __fastcall sub_140A22CA4(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( *(_QWORD *)&qword_140D00AC0 && (v5 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
    v6 = *(_QWORD *)(v5 + 8);
  else
    v6 = 0LL;
  return sub_140A2D248(a2, a3, a4, a5, 0, v6, 0);
}
