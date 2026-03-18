/*
 * XREFs of ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x1800F4748
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18002B058 (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1800F4710 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D0654 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

CDrawListCacheSet::ContentEntry *__fastcall CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(
        CDrawListCacheSet::ContentEntry *this)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v2 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v2);
  return this;
}
