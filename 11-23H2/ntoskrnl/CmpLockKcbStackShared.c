/*
 * XREFs of CmpLockKcbStackShared @ 0x1406D5668
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DE24 (CmQueryLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4B10 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1406D5BD0 (CmpQueryKeySecurity.c)
 *     CmQueryValueKey @ 0x1406E02F0 (CmQueryValueKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1408AB940 (CmCallbackGetKeyObjectID.c)
 *     CmSaveKey @ 0x140A0BC40 (CmSaveKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13E14 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A14150 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A166C4 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1406D57D0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 */

void __fastcall CmpLockKcbStackShared(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    CmpLockKcbShared(KcbAtLayerHeight);
  }
}
