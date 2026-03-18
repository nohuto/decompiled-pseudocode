/*
 * XREFs of ZwAlpcCreateSectionView @ 0x14041C720
 * Callers:
 *     DifZwAlpcCreateSectionViewWrapper @ 0x14061D460 (DifZwAlpcCreateSectionViewWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSectionView(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
