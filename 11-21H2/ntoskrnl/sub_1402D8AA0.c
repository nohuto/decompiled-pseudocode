/*
 * XREFs of sub_1402D8AA0 @ 0x1402D8AA0
 * Callers:
 *     sub_14075ECF4 @ 0x14075ECF4 (sub_14075ECF4.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402D8AA0(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_140C2A1AC);
  }
}
