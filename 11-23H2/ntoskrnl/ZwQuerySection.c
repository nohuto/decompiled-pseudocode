/*
 * XREFs of ZwQuerySection @ 0x14041B780
 * Callers:
 *     CmSiGetSectionLength @ 0x1402F5F90 (CmSiGetSectionLength.c)
 *     DifZwQuerySectionWrapper @ 0x1405F5540 (DifZwQuerySectionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
