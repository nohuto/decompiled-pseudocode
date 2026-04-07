/*
 * XREFs of ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z @ 0x1800C85E8
 * Callers:
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800C60F8 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800C6334 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTargetProxy::SetColorTransform(
        CMagnifierRenderTargetProxy *this,
        const struct CColorTransformResourceProxy *a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a2 )
    v2 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 664LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}
