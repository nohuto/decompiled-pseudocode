/*
 * XREFs of ZwGetNlsSectionPtr @ 0x14041CD60
 * Callers:
 *     RtlpGetNormalization @ 0x1409C88BC (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetNlsSectionPtr(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
