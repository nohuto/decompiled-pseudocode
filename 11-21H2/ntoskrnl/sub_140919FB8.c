/*
 * XREFs of sub_140919FB8 @ 0x140919FB8
 * Callers:
 *     sub_14068E100 @ 0x14068E100 (sub_14068E100.c)
 * Callees:
 *     sub_14053FFEC @ 0x14053FFEC (sub_14053FFEC.c)
 */

__int64 __fastcall sub_140919FB8(ULONG_PTR *a1, int *a2)
{
  ULONG_PTR v2; // rax
  int v3; // r8d

  v2 = *a1;
  v3 = -1073741818;
  if ( *(_DWORD *)*a1 != -1073741818 )
    sub_14053FFEC(0x21uLL, *(int *)*a1, *a1, a1[1]);
  if ( *(_DWORD *)(v2 + 24) >= 2u )
    v3 = *(_DWORD *)(v2 + 48);
  *a2 = v3;
  return 1LL;
}
