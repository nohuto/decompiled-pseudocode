/*
 * XREFs of ?ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x1800A2FE8
 * Callers:
 *     ?Insert@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@IPEAE@Z @ 0x1800B3A30 (-Insert@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@ContentMa.c)
 *     ?Remove@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@@Z @ 0x1800B4F70 (-Remove@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@ContentMa.c)
 *     ?_EraseAll@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAXPEAV?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@@Z @ 0x1800B5644 (-_EraseAll@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@Conten.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x1800A3150 (-Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 */

__int64 __fastcall XWinRT::SecureVersionTag::TagManager::ChangeVersion(XWinRT::SecureVersionTag::Tag **this)
{
  XWinRT::SecureVersionTag::Tag *v3; // rax
  XWinRT::SecureVersionTag::Tag *v4; // rdi

  if ( *(int *)*this <= 1 )
    return 0LL;
  v3 = (XWinRT::SecureVersionTag::Tag *)operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)v3 = 1;
    XWinRT::SecureVersionTag::Tag::Release(*this);
    *this = v4;
    return 0LL;
  }
  return 2147942414LL;
}
