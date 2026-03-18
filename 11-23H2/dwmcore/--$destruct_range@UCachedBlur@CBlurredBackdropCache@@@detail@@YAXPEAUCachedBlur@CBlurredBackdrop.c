/*
 * XREFs of ??$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdropCache@@0@Z @ 0x1800A72F0
 * Callers:
 *     ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800A6F74 (-clear_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CBlu.c)
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x1800A71F4 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 * Callees:
 *     ??_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z @ 0x1800A7058 (--_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z.c)
 */

CBlurredBackdropCache::CachedBlur *__fastcall detail::destruct_range<CBlurredBackdropCache::CachedBlur>(
        CBlurredBackdropCache::CachedBlur *this,
        CBlurredBackdropCache::CachedBlur *a2)
{
  CBlurredBackdropCache::CachedBlur *v3; // rbx
  CBlurredBackdropCache::CachedBlur *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CBlurredBackdropCache::CachedBlur::`scalar deleting destructor'(v3);
      v3 = (CBlurredBackdropCache::CachedBlur *)((char *)v3 + 136);
    }
    while ( v3 != a2 );
  }
  return result;
}
