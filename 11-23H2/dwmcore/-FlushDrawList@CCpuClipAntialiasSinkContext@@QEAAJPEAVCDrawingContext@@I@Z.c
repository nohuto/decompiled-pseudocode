/*
 * XREFs of ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180032C5C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060300 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x18006EC10 (-ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180075B00 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1801DA678 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180032E04 (-clear@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkR.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180032E34 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180033020 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?ProcessRenderCommands_OverlapPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEAV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180033C00 (-ProcessRenderCommands_OverlapPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV-$list@USinkRenderCom.c)
 *     ?ProcessRenderCommands_OcclusionPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x18003F4F8 (-ProcessRenderCommands_OcclusionPass@CCpuClipAntialiasSinkContext@@AEBAXIPEAV-$list@USinkRenderC.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003F850 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?clear_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B9064 (-clear_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vlibe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800DC75C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@QEAA@XZ @ 0x1801FEB88 (--1-$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V-$allocator@USinkRenderCommand@CCpuC.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::FlushDrawList(
        CCpuClipAntialiasSinkContext *this,
        struct CDrawingContext *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD **v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v12; // rbx
  _BYTE *v13; // r8
  _BYTE *v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  unsigned int v18; // esi
  _BYTE *v19; // rcx
  _QWORD **v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  int *v23; // [rsp+20h] [rbp-59h]
  void *v24; // [rsp+30h] [rbp-49h] BYREF
  __int64 v25; // [rsp+38h] [rbp-41h]
  int v26[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE *v27; // [rsp+48h] [rbp-31h]
  char *v28; // [rsp+50h] [rbp-29h]
  _BYTE v29[48]; // [rsp+58h] [rbp-21h] BYREF
  char v30; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = (unsigned int)a3;
  if ( !CCommonRegistryData::CpuClipAASinkEnableRender )
  {
LABEL_5:
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(
      *((_QWORD *)this + 2) + 8LL + 432 * v4,
      a2,
      a3,
      a4);
    return 0LL;
  }
  v25 = 0LL;
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v7 = v7;
  v7[1] = v7;
  v24 = v7;
  CCpuClipAntialiasSinkContext::ProcessRenderCommands_OcclusionPass(this, (unsigned int)v4, &v24);
  if ( !v25 )
  {
LABEL_3:
    v9 = (_QWORD **)v24;
    **((_QWORD **)v24 + 1) = 0LL;
    v10 = *v9;
    if ( v10 )
    {
      do
      {
        v12 = (_QWORD *)*v10;
        operator delete(v10, 0x20uLL);
        v10 = v12;
      }
      while ( v12 );
    }
    operator delete(v24, 0x20uLL);
    goto LABEL_5;
  }
  if ( CCommonRegistryData::CpuClipAASinkEnableIntermediates )
  {
    *(_QWORD *)v26 = v29;
    v27 = v29;
    v28 = &v30;
    CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass(v8, (unsigned int)v4, &v24, v26);
    v13 = v27;
    v14 = *(_BYTE **)v26;
    if ( v27 != *(_BYTE **)v26 )
    {
      v23 = v26;
      v15 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_OffscreenRenderPass(this, a2, (unsigned int)v4, &v24);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7F,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
          (const char *)(unsigned int)v15,
          (int)v26);
        v19 = *(_BYTE **)v26;
        if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v27[-*(_QWORD *)v26] >> 2) )
        {
          detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear_region(v26);
          v19 = *(_BYTE **)v26;
        }
        *(_QWORD *)v26 = 0LL;
        if ( v19 == v29 )
          v19 = 0LL;
        operator delete(v19);
        std::list<CCpuClipAntialiasSinkContext::SinkRenderCommand>::~list<CCpuClipAntialiasSinkContext::SinkRenderCommand>(&v24);
        return v16;
      }
      v13 = v27;
      v14 = *(_BYTE **)v26;
    }
    if ( 0xAAAAAAAAAAAAAAABuLL * ((v13 - v14) >> 2) )
    {
      detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear_region(v26);
      v14 = *(_BYTE **)v26;
    }
    *(_QWORD *)v26 = 0LL;
    if ( v14 == v29 )
      v14 = 0LL;
    operator delete(v14);
  }
  v17 = CCpuClipAntialiasSinkContext::ProcessRenderCommands_RenderPass(this, a2, (unsigned int)v4, &v24);
  v18 = v17;
  if ( v17 >= 0 )
    goto LABEL_3;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)(unsigned int)v17,
    (int)v23);
  v20 = (_QWORD **)v24;
  **((_QWORD **)v24 + 1) = 0LL;
  v21 = *v20;
  if ( *v20 )
  {
    do
    {
      v22 = (_QWORD *)*v21;
      std::_Deallocate<16,0>(v21, 32LL);
      v21 = v22;
    }
    while ( v22 );
  }
  std::_Deallocate<16,0>(v24, 32LL);
  return v18;
}
