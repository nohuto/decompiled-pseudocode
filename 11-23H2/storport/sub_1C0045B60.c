/*
 * XREFs of sub_1C0045B60 @ 0x1C0045B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0045B60(void *a1, __int64 a2, struct _MDL *a3)
{
  ExFreePoolWithTag(a1, 0);
  if ( a3 )
    IoFreeMdl(a3);
}
