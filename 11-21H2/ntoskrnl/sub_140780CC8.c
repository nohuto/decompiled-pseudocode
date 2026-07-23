/*
 * XREFs of sub_140780CC8 @ 0x140780CC8
 * Callers:
 *     sub_140691CD8 @ 0x140691CD8 (sub_140691CD8.c)
 *     sub_140780AA8 @ 0x140780AA8 (sub_140780AA8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140780CC8(char a1, PVOID *a2)
{
  if ( a1 == 1 && *a2 )
  {
    ExFreePoolWithTag(*a2, 0x67655256u);
    *a2 = 0LL;
  }
  return 0LL;
}
