/*
 * XREFs of sub_1402E901C @ 0x1402E901C
 * Callers:
 *     sub_1402E89E8 @ 0x1402E89E8 (sub_1402E89E8.c)
 *     sub_1402E8AA0 @ 0x1402E8AA0 (sub_1402E8AA0.c)
 *     sub_1402E8BCC @ 0x1402E8BCC (sub_1402E8BCC.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 * Callees:
 *     sub_1402C1520 @ 0x1402C1520 (sub_1402C1520.c)
 *     sub_1402E94F0 @ 0x1402E94F0 (sub_1402E94F0.c)
 *     sub_1402E9540 @ 0x1402E9540 (sub_1402E9540.c)
 */

void __fastcall sub_1402E901C(ULONG_PTR *a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rcx

  v4 = *a1;
  *a1 = a3;
  if ( v4 != -1LL && !sub_1402C1520(v4) )
    sub_1402E9540(v5);
  if ( a3 != -1LL && !sub_1402C1520(a3) )
    sub_1402E94F0(v6, 1LL);
}
