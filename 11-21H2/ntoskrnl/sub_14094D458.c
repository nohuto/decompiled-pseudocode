/*
 * XREFs of sub_14094D458 @ 0x14094D458
 * Callers:
 *     sub_1406E4EA0 @ 0x1406E4EA0 (sub_1406E4EA0.c)
 * Callees:
 *     sub_1402088DC @ 0x1402088DC (sub_1402088DC.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14094D458(void *a1, const WCHAR *a2, bool *a3)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  unsigned int *v6; // rcx
  unsigned int v7; // edi
  unsigned int *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = 0;
  *a3 = 0;
  v5 = sub_14067B838(a1, a2, 0, &v9);
  v6 = v9;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( sub_1402088DC((__int64)v9) )
      v4 = *(unsigned int *)((char *)v6 + v6[2]);
    *a3 = v4 == 1;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
