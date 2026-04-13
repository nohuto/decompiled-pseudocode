/*
 * XREFs of ?Initialize@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x1800A30BC
 * Callers:
 *     ?Make@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@SAJAEBU?$DefaultHash@W4WindowPosition@ContentManagement@@@2345@AEBU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@2345@PEAPEAV12345@@Z @ 0x1800B4228 (-Make@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@ContentMana.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall XWinRT::SecureVersionTag::TagManager::Initialize(XWinRT::SecureVersionTag::TagManager *this)
{
  _DWORD *v2; // rax

  v2 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
    *v2 = 1;
  *(_QWORD *)this = v2;
  return v2 == 0LL ? 0x8007000E : 0;
}
