/*
 * XREFs of sub_1800B2B54 @ 0x1800B2B54
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x1800B2BEC (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 *     sub_1800B2A90 @ 0x1800B2A90 (sub_1800B2A90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B2B54(__int64 a1)
{
  __int64 v2; // rcx
  char *v3; // rbx
  char *v4; // rcx

  sub_18000B4C0(a1 + 64, 16LL, 5LL);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(char **)(v2 + 8);
  if ( !v3[25] )
  {
    do
    {
      sub_1800299BC(a1 + 48, a1 + 48, *((char **)v3 + 2));
      v4 = v3;
      v3 = *(char **)v3;
      sub_180010884(v4, 0x28uLL);
    }
    while ( !v3[25] );
    v2 = *(_QWORD *)(a1 + 48);
  }
  sub_180010884((char *)v2, 0x28uLL);
  sub_1800B2A90(a1 + 8);
  return sub_1800FC250(a1);
}
