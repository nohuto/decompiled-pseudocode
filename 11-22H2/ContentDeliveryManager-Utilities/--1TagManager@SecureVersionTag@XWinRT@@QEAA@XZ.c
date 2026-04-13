/*
 * XREFs of ??1TagManager@SecureVersionTag@XWinRT@@QEAA@XZ @ 0x1800A2FC8
 * Callers:
 *     ??1?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x1800B19BC (--1-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@ContentManagem.c)
 * Callees:
 *     ?Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x1800A3150 (-Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 */

void __fastcall XWinRT::SecureVersionTag::TagManager::~TagManager(XWinRT::SecureVersionTag::Tag **this)
{
  XWinRT::SecureVersionTag::Tag *v1; // rcx

  v1 = *this;
  if ( v1 )
    XWinRT::SecureVersionTag::Tag::Release(v1);
}
