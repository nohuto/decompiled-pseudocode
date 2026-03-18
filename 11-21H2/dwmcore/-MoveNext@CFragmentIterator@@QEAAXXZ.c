/*
 * XREFs of ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x180037A3C
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180037534 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x180037794 (-GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x180037844 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800378D8 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18003798C (-HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180039D9C (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18003C50C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CFragmentIterator::MoveNext(CFragmentIterator *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1) - 16LL;
  *((_QWORD *)this + 1) = v1;
  if ( (v1 - *(_QWORD *)this) >> 4 )
  {
    ++*(_DWORD *)(v1 - 8);
    CFragmentIterator::FindFirst(this);
  }
}
