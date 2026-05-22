/*
 * XREFs of ?ValidateShapeBrush@Composition@UI@Windows@@YAJPEAUICompositionBrush@123@PEAVContextSession@WRL2@Microsoft@@PEAPEAVCompositionBrush@123@@Z @ 0x1800462A4
 * Callers:
 *     ?put_StrokeBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x18000C860 (-put_StrokeBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@3.c)
 *     ?put_FillBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180046160 (-put_FillBrush@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ValidateShapeBrush(
        struct IUnknown *this,
        struct Windows::UI::Composition::ICompositionBrush *a2,
        struct Microsoft::WRL2::ContextSession *a3,
        struct Windows::UI::Composition::CompositionBrush **a4)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rdi
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+50h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+68h] [rbp+20h] BYREF

  v9[0] = 0LL;
  v4 = 0LL;
  if ( !this )
    goto LABEL_7;
  if ( (int)Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              a2,
              this,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionColorBrushT<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
              &v11) >= 0 )
  {
    v4 = v11;
LABEL_7:
    *(_QWORD *)a3 = v4;
    return 0LL;
  }
  if ( (int)Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              a2,
              this,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionGradientBrushT<Windows::UI::Composition::CompositionGradientBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
              &v12) >= 0 )
  {
    v9[0] = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(v9);
    v4 = v12;
    if ( v11 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    goto LABEL_7;
  }
  Windows::UI::Composition::OriginateInvalidArgument(0LL, L"value");
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionspriteshape.cpp",
    (const char *)0x80070057LL);
  if ( v12 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
  if ( v11 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(v9);
  return 2147942487LL;
}
