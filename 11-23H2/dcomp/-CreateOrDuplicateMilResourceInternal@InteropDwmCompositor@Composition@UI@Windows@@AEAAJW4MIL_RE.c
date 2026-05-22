/*
 * XREFs of ?CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RESOURCE_TYPE@@_NPEAXPEAIPEAPEAUIUnknown@@1@Z @ 0x18015B730
 * Callers:
 *     ?CreateMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAUIUnknown@@@Z @ 0x18015B660 (-CreateMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESOURCE_T.c)
 *     ?CreateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x18015B910 (-CreateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESO.c)
 *     ?DuplicateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPEAUIUnknown@@@Z @ 0x18015BA50 (-DuplicateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJPEAXW4M.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAXAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropHolographicTexture@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX2@Z @ 0x18015B094 (--$MakeAndInitialize2@VInteropHolographicTexture@Composition@UI@Windows@@V1234@PEAVInteropDwmCom.c)
 *     ??$MakeAndInitialize2@VInteropRedirectVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRedirectVisual@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@@Z @ 0x18015B174 (--$MakeAndInitialize2@VInteropRedirectVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmComposi.c)
 *     ??$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAXAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX2@Z @ 0x18015B238 (--$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@PEAVInteropDwm.c)
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX@Z @ 0x18015B318 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@.c)
 *     ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEAPEAX@Z @ 0x18015B3EC (--$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropDwmComposito.c)
 */

__int64 Windows::UI::Composition::InteropDwmCompositor::CreateOrDuplicateMilResourceInternal(
        DirectComposition::CDevice **a1,
        int a2,
        bool a3,
        ...)
{
  DirectComposition::CDevice **v3; // r9
  DirectComposition::CDevice **v4; // rdi
  Windows::UI::Composition::VisualTarget *v5; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v12; // esi
  __int64 v13; // rdx
  Windows::UI::Composition::VisualTarget *v14; // rax
  char *v15; // rcx
  int v16; // eax
  DirectComposition::CDevice **v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  bool v19; // [rsp+60h] [rbp+30h] BYREF
  DirectComposition::CDevice **v20; // [rsp+68h] [rbp+38h] BYREF
  va_list va; // [rsp+68h] [rbp+38h]
  DirectComposition::CDevice **v22; // [rsp+70h] [rbp+40h] BYREF
  va_list va1; // [rsp+70h] [rbp+40h]
  Windows::UI::Composition::VisualTarget *v24; // [rsp+78h] [rbp+48h] BYREF
  va_list va2; // [rsp+78h] [rbp+48h]
  __int64 v26; // [rsp+80h] [rbp+50h] BYREF
  va_list va3; // [rsp+80h] [rbp+50h]
  va_list va4; // [rsp+88h] [rbp+58h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, DirectComposition::CDevice **);
  v3 = v20;
  va_copy(va2, va1);
  v22 = va_arg(va2, DirectComposition::CDevice **);
  va_copy(va3, va2);
  v24 = va_arg(va3, Windows::UI::Composition::VisualTarget *);
  va_copy(va4, va3);
  v26 = va_arg(va4, _QWORD);
  v4 = v22;
  v5 = v24;
  *(_DWORD *)v22 = 0;
  *(_QWORD *)v5 = 0LL;
  if ( v3 )
    a3 = 1;
  v19 = a3;
  v7 = a2 - 50;
  if ( !v7 )
  {
    v22 = a1;
    v12 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropDwmCompositor *,bool &,void * &>(
            (Windows::UI::Composition::InteropVisual **)va2,
            (DirectComposition::CDevice ***)va1,
            &v19,
            (void **)va);
    if ( v12 < 0 )
    {
      v13 = 301LL;
      goto LABEL_25;
    }
    v17 = (DirectComposition::CDevice **)v24;
LABEL_29:
    v16 = *((_DWORD *)v17 + 32);
    v15 = (char *)(v17 + 37);
    goto LABEL_30;
  }
  v8 = v7 - 30;
  if ( !v8 )
  {
    v22 = a1;
    v12 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropHolographicTexture,Windows::UI::Composition::InteropHolographicTexture,Windows::UI::Composition::InteropDwmCompositor *,bool &,void * &,bool &>(
            (Windows::UI::Composition::InteropHolographicTexture **)va2,
            (struct Windows::UI::Composition::Compositor **)va1,
            &v19,
            (void **)va,
            (bool *)va3);
    if ( v12 < 0 )
    {
      v13 = 272LL;
      goto LABEL_25;
    }
LABEL_19:
    v16 = *((_DWORD *)v24 + 32);
    v15 = (char *)v24 + 136;
LABEL_30:
    *(_DWORD *)v4 = v16;
    goto LABEL_31;
  }
  v9 = v8 - 61;
  if ( !v9 )
  {
    v20 = a1;
    v12 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropRedirectVisual,Windows::UI::Composition::InteropRedirectVisual,Windows::UI::Composition::InteropDwmCompositor *>(
            (Microsoft::WRL2::NestableRuntimeClass **)va1,
            (struct Windows::UI::Composition::Compositor **)va);
    if ( v12 < 0 )
    {
      v13 = 313LL;
      goto LABEL_25;
    }
    v17 = v22;
    goto LABEL_29;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    v22 = a1;
    v12 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropRemoteAppRenderTarget,Windows::UI::Composition::InteropRemoteAppRenderTarget,Windows::UI::Composition::InteropDwmCompositor *,bool &,void * &,bool &>(
            (Windows::UI::Composition::InteropRemoteAppRenderTarget **)va2,
            (struct Windows::UI::Composition::Compositor **)va1,
            &v19,
            (void **)va,
            (bool *)va3);
    if ( v12 < 0 )
    {
      v13 = 287LL;
      goto LABEL_25;
    }
    goto LABEL_19;
  }
  if ( v10 != 53 )
    return 2147500034LL;
  v22 = a1;
  if ( (_BYTE)v26 )
  {
    v12 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropDwmCompositor *,bool &,void * &>(
            (Windows::UI::Composition::InteropVisual **)va2,
            (DirectComposition::CDevice ***)va1,
            &v19,
            (void **)va);
    if ( v12 < 0 )
    {
      v13 = 330LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
    v14 = v24;
    v15 = (char *)v24 + 296;
  }
  else
  {
    v12 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisualTarget,Windows::UI::Composition::InteropVisualTarget,Windows::UI::Composition::InteropDwmCompositor *,void * &>(
            (Windows::UI::Composition::VisualTarget **)va2,
            (DirectComposition::CDevice ***)va1,
            (HANDLE *)va);
    if ( v12 < 0 )
    {
      v13 = 341LL;
      goto LABEL_25;
    }
    v14 = v24;
    v15 = (char *)v24 + 184;
  }
  *(_DWORD *)v4 = *((_DWORD *)v14 + 32);
LABEL_31:
  *(_QWORD *)v5 = v15;
  return 0LL;
}
