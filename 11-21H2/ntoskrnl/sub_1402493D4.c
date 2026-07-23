/*
 * XREFs of sub_1402493D4 @ 0x1402493D4
 * Callers:
 *     sub_1406FE720 @ 0x1406FE720 (sub_1406FE720.c)
 *     sub_140799BB0 @ 0x140799BB0 (sub_140799BB0.c)
 * Callees:
 *     sub_1409CE7E8 @ 0x1409CE7E8 (sub_1409CE7E8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402493D4(__int64 a1)
{
  if ( byte_140C5AEB1 )
    sub_1409CE7E8(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
