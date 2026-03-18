/*
 * XREFs of ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1800F450C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x180044E3C (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1800F45B4 (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1800F45F4 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800F4634 (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 */

__int64 __fastcall CVisual::ProcessSetContextOverrides(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTEXTOVERRIDES *a3)
{
  float v5; // xmm1_4
  FLOAT v6; // xmm1_4
  __int64 v7; // rax
  bool v8; // al
  struct D2D_VECTOR_3F v10; // [rsp+20h] [rbp-18h] BYREF

  CVisual::GetWorldUpVectorOverride(this, &v10);
  v5 = *((float *)a3 + 2);
  if ( v5 != CVisual::GetWorldRenderingScaleOverride(this)
    || *((float *)a3 + 3) != v10.x
    || *((float *)a3 + 4) != v10.y
    || *((float *)a3 + 5) != v10.z )
  {
    CVisual::SetWorldRenderingScaleOverride(this, v5);
    v6 = *((float *)a3 + 4);
    v10.x = *((FLOAT *)a3 + 3);
    v10.z = *((FLOAT *)a3 + 5);
    v10.y = v6;
    CVisual::SetWorldUpVectorOverride(this, &v10);
    v7 = *((_QWORD *)this + 28);
    v8 = (*(_DWORD *)(v7 + 4) & 0x40000) != 0 || (*(_DWORD *)(v7 + 4) & 0x20000) != 0;
    *((_BYTE *)this + 103) &= ~1u;
    *((_BYTE *)this + 103) |= v8;
    if ( (*((_DWORD *)this + 24) & 0x4000) != 0 )
    {
      *((_QWORD *)this + 76) = 0LL;
      CVisual::PropagateFlags((__int64)this, 0x10u);
    }
  }
  return 0LL;
}
