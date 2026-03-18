/*
 * XREFs of ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x1800B7A08
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B79C4 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800B7AD0 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?clear_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B9064 (-clear_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vlibe.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 */

bool __fastcall CRenderingTechniqueFragment::NeedsToBeBrokenUp(
        CRenderingTechniqueFragment *this,
        struct CBrushRenderingGraph *a2)
{
  unsigned int CumulativeSurfaceInputCount; // eax
  _BYTE *v3; // rcx
  bool v4; // bl
  _BYTE *v6; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v7; // [rsp+28h] [rbp-D8h]
  char *v8; // [rsp+30h] [rbp-D0h]
  _BYTE v9[192]; // [rsp+38h] [rbp-C8h] BYREF
  char v10; // [rsp+F8h] [rbp-8h] BYREF

  v6 = v9;
  v7 = v9;
  v8 = &v10;
  CumulativeSurfaceInputCount = CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(this, a2, &v6);
  v3 = v6;
  v4 = CumulativeSurfaceInputCount > 4;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v7 - v6) >> 2) )
  {
    detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear_region(&v6);
    v3 = v6;
  }
  v6 = 0LL;
  if ( v3 == v9 )
    v3 = 0LL;
  operator delete(v3);
  return v4;
}
