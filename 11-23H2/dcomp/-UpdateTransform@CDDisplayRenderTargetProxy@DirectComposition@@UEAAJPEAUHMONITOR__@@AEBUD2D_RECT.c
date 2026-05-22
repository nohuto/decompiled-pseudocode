/*
 * XREFs of ?UpdateTransform@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJPEAUHMONITOR__@@AEBUD2D_RECT_F@@MAEBUD2D_RECT_U@@W4DXGI_MODE_ROTATION@@@Z @ 0x1800F69C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     ?SetScalarFloatProperty@CResourceProxy@DirectComposition@@QEAAJIM@Z @ 0x180076370 (-SetScalarFloatProperty@CResourceProxy@DirectComposition@@QEAAJIM@Z.c)
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetProxy::UpdateTransform(
        DirectComposition::CDDisplayRenderTargetProxy *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        float a4,
        const struct D2D_RECT_U *a5,
        enum DXGI_MODE_ROTATION a6)
{
  DirectComposition::CResourceProxy *v7; // rbx
  __int64 result; // rax

  v7 = (DirectComposition::CDDisplayRenderTargetProxy *)((char *)this + 8);
  result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
             (DirectComposition::CDDisplayRenderTargetProxy *)((char *)this + 8),
             1,
             a2);
  if ( (int)result >= 0 )
  {
    result = DirectComposition::CResourceProxy::SetBufferProperty(v7, 8, a3, 0x10uLL);
    if ( (int)result >= 0 )
    {
      result = DirectComposition::CResourceProxy::SetScalarFloatProperty(v7, 9, a4);
      if ( (int)result >= 0 )
      {
        result = DirectComposition::CResourceProxy::SetBufferProperty(v7, 10, a5, 0x10uLL);
        if ( (int)result >= 0 )
          return DirectComposition::CResourceProxy::SetScalarIntegerProperty(v7, 11, a6);
      }
    }
  }
  return result;
}
