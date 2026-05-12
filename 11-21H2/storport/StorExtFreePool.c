/*
 * XREFs of StorExtFreePool @ 0x1C00429B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorExtFreePool(void *a1, __int64 a2, struct _MDL *a3)
{
  ExFreePoolWithTag(a1, 0);
  if ( a3 )
    IoFreeMdl(a3);
}
