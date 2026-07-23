/*
 * XREFs of sub_1402305C0 @ 0x1402305C0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402305C0(__int64 a1, _QWORD *a2)
{
  if ( *(_BYTE *)(a2[1] + 97LL) )
    ExFreePoolWithTag(a2, 0);
}
