/*
 * XREFs of ?Fnv1a@XWinRT@@YAIPEBE_K@Z @ 0x1800A305C
 * Callers:
 *     ?GetNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEBAJAEBW4WindowPosition@ContentManagement@@AEAI1AEAPEAVCNode@12@PEAPEAV512@@Z @ 0x1800B2DCC (-GetNode@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::Fnv1a(XWinRT *this, const unsigned __int8 *a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // r9d
  int v4; // eax

  v2 = 0LL;
  v3 = -2128831035;
  if ( a2 )
  {
    do
    {
      v4 = *((unsigned __int8 *)this + v2++);
      v3 = 16777619 * (v3 ^ v4);
    }
    while ( v2 < (unsigned __int64)a2 );
  }
  return v3;
}
