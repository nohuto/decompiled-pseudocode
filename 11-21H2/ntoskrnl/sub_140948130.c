/*
 * XREFs of sub_140948130 @ 0x140948130
 * Callers:
 *     <none>
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x140388BD0 (RtlCmDecodeMemIoResource.c)
 */

__int64 __fastcall sub_140948130(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1, ULONGLONG *a2, ULONGLONG *a3)
{
  *a3 = RtlCmDecodeMemIoResource(a1, a2);
  return 0LL;
}
