/*
 * XREFs of ?RenderVisual@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVVisual@234@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z @ 0x180129684
 * Callers:
 *     ?RenderVisual@CaptureTest@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIUnknown@@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z @ 0x180129500 (-RenderVisual@CaptureTest@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIUnknown@@IIIIW4DXGI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z @ 0x1800F22CC (-InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::RenderVisual(
        DirectComposition::CDevice **this,
        struct Windows::UI::Composition::Visual *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        enum DXGI_FORMAT a7,
        void **a8,
        void **a9,
        unsigned int *a10)
{
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // edi
  char v15; // al
  bool v16; // zf
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = DirectComposition::CDevice::InternalRenderVisual(
          this[57],
          *((_DWORD *)a2 + 32),
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10);
  v13 = v11;
  if ( v11 >= 0 )
  {
    v15 = *((_BYTE *)this + 452);
    if ( (v15 & 1) == 0 )
    {
      v16 = *((_DWORD *)this + 112) == 0;
      *((_BYTE *)this + 452) = v15 | 1;
      if ( v16 )
        Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
          (Windows::UI::Composition::CompositorCommon *)this,
          v12);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1150,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v11);
    return v13;
  }
}
