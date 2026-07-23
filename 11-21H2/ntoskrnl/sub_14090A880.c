/*
 * XREFs of sub_14090A880 @ 0x14090A880
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14090A880(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x436C6148u);
  ExFreePoolWithTag(P, 0x436C6148u);
  return 0LL;
}
