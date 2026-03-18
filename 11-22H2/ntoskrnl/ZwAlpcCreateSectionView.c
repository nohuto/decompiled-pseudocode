/*
 * XREFs of ZwAlpcCreateSectionView @ 0x14041B660
 * Callers:
 *     DifZwAlpcCreateSectionViewWrapper @ 0x1405ED4E0 (DifZwAlpcCreateSectionViewWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140680D58 (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSectionView(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
