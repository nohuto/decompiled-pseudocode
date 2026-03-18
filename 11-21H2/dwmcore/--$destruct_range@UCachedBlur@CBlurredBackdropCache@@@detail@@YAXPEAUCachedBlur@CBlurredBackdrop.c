/*
 * XREFs of ??$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdropCache@@0@Z @ 0x180059288
 * Callers:
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x18005915C (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 *     ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800593D8 (-clear_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CBlu.c)
 * Callees:
 *     ??_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z @ 0x1800592C4 (--_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z.c)
 */

void *__fastcall detail::destruct_range<CBlurredBackdropCache::CachedBlur>(
        CBlurredBackdropCache::CachedBlur *this,
        CBlurredBackdropCache::CachedBlur *a2)
{
  CBlurredBackdropCache::CachedBlur *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CBlurredBackdropCache::CachedBlur::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CBlurredBackdropCache::CachedBlur *)((char *)v3 + 136);
    }
    while ( v3 != a2 );
  }
  return result;
}
