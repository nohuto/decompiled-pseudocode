/*
 * XREFs of CmpLockKcbStackShared @ 0x1406D5638
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DC84 (CmQueryLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4AE0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1406D5BA0 (CmpQueryKeySecurity.c)
 *     CmQueryValueKey @ 0x1406E02C0 (CmQueryValueKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1408AB6F0 (CmCallbackGetKeyObjectID.c)
 *     CmSaveKey @ 0x140A0B990 (CmSaveKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13B64 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A13EA0 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A16414 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1406D57A0 (CmpGetKcbAtLayerHeight.c)
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
