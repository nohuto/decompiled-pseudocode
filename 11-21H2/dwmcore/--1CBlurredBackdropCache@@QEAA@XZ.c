/*
 * XREFs of ??1CBlurredBackdropCache@@QEAA@XZ @ 0x18003153C
 * Callers:
 *     ??1CExternalEffectGraph@@MEAA@XZ @ 0x180031618 (--1CExternalEffectGraph@@MEAA@XZ.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FA8 (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FE0 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x180059378 (-erase@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCac.c)
 *     ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800593D8 (-clear_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CBlu.c)
 */

void __fastcall CBlurredBackdropCache::~CBlurredBackdropCache(CBlurredBackdropCache *this)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // r15
  __int64 v4; // rbp
  __int64 v5; // rsi
  CBlurredBackdropCache **i; // rbx
  CBlurredBackdropCache *v7; // rcx
  CBlurredBackdropCache **v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD **)this;
  v3 = (_QWORD *)*((_QWORD *)this + 1);
  while ( v1 != v3 )
  {
    v4 = *v1 + 1904LL;
    v5 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(v4);
    for ( i = (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(v4);
          i != (CBlurredBackdropCache **)v5 && *i != this;
          ++i )
    {
      ;
    }
    if ( i != (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(v4) )
    {
      v8 = i;
      detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase(
        v4,
        &v9,
        &v8);
    }
    v1 += 17;
  }
  v7 = *(CBlurredBackdropCache **)this;
  if ( 0xF0F0F0F0F0F0F0F1uLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) )
  {
    detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::clear_region(
      this,
      0LL);
    v7 = *(CBlurredBackdropCache **)this;
  }
  *(_QWORD *)this = 0LL;
  if ( v7 == (CBlurredBackdropCache *)((char *)this + 24) )
    v7 = 0LL;
  DefaultHeap::Free(v7);
}
