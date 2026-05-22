/*
 * XREFs of ?CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_NPEAPEAVCompositionDrawingSurface@234@@Z @ 0x1800617A4
 * Callers:
 *     ?CreateDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSize@Foundation@5@W4DirectXPixelFormat@DirectX@Graphics@5@W4DirectXAlphaMode@9Graphics@5@PEAPEAUICompositionDrawingSurface@345@@Z @ 0x180061680 (-CreateDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSize@Foundatio.c)
 *     ?Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z @ 0x180154F20 (-Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDe.c)
 *     ?CreateDrawingSurface2@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@975@PEAPEAUICompositionDrawingSurface@345@@Z @ 0x180156DA0 (-CreateDrawingSurface2@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJUSizeInt32@Gra.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSurface@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAJAEBUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_N3PEAPEAVCompositionDrawingSurface@234@@Z @ 0x18006157C (-CreateSurface@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAJAEBUSizeInt32@Graphics@4@W.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::CreateDrawingSurface(
        Windows::UI::Composition::CompositionGraphicsDevice *a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v6; // r14
  int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v6 = a6;
  a6 = 0LL;
  *v6 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&a6);
  v10 = Windows::UI::Composition::CompositionGraphicsDevice::CreateSurface(a1, &v16, a3, a4, v14, a5, &a6);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    v12 = a6;
    a6 = 0LL;
    v11 = 0;
    *v6 = v12;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&a6);
  return v11;
}
