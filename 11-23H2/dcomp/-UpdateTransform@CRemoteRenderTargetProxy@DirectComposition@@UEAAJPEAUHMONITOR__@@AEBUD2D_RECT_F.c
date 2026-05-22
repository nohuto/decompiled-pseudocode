/*
 * XREFs of ?UpdateTransform@CRemoteRenderTargetProxy@DirectComposition@@UEAAJPEAUHMONITOR__@@AEBUD2D_RECT_F@@MAEBUD2D_RECT_U@@W4DXGI_MODE_ROTATION@@@Z @ 0x180091A00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CRemoteRenderTargetProxy::UpdateTransform(
        DirectComposition::CRemoteRenderTargetProxy *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        float a4)
{
  DirectComposition::CResourceProxy *v5; // rbx
  __int64 result; // rax

  v5 = (DirectComposition::CRemoteRenderTargetProxy *)((char *)this + 8);
  result = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
             (DirectComposition::CRemoteRenderTargetProxy *)((char *)this + 8),
             1,
             a2);
  if ( (int)result >= 0 )
    return DirectComposition::CResourceProxy::SetBufferProperty(v5, 3, a3, 0x10uLL);
  return result;
}
