/*
 * XREFs of sub_1C003F7E4 @ 0x1C003F7E4
 * Callers:
 *     sub_1C003663C @ 0x1C003663C (sub_1C003663C.c)
 *     sub_1C003B11C @ 0x1C003B11C (sub_1C003B11C.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_1C003F7E4(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbx
  PSLIST_ENTRY result; // rax

  v1 = a1 + 5;
  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList(v1);
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0x66446152u);
  }
  return result;
}
