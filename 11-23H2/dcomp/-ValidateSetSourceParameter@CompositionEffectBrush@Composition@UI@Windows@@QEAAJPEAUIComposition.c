/*
 * XREFs of ?ValidateSetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAVContextSession@WRL2@Microsoft@@PEAPEAVCompositionBrush@234@@Z @ 0x180045838
 * Callers:
 *     ?SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUICompositionBrush@234@@Z @ 0x1800459F0 (-SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIComp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectBrush::ValidateSetSourceParameter(
        Windows::UI::Composition::CompositionEffectBrush *this,
        struct IUnknown *a2,
        struct Microsoft::WRL2::ContextSession *a3,
        struct Windows::UI::Composition::CompositionBrush **a4)
{
  Microsoft::WRL2::NestableRuntimeClass *v5; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v7; // rsi
  Microsoft::WRL2::NestableRuntimeClass *v8; // r14
  Microsoft::WRL2::NestableRuntimeClass *v9; // r15
  int v10; // eax
  Microsoft::WRL2::NestableRuntimeClass *v11; // r13
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+20h] [rbp-28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+28h] [rbp-20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v20; // [rsp+30h] [rbp-18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v21; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  Microsoft::WRL2::NestableRuntimeClass *v23; // [rsp+90h] [rbp+48h] BYREF
  struct IUnknown *v24; // [rsp+98h] [rbp+50h]
  struct Microsoft::WRL2::ContextSession *v25; // [rsp+A0h] [rbp+58h]
  Microsoft::WRL2::NestableRuntimeClass *v26; // [rsp+A8h] [rbp+60h] BYREF

  v25 = a3;
  v24 = a2;
  v23 = this;
  v5 = 0LL;
  *a4 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          a3,
          a2,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
          &v23);
  v11 = v23;
  v21 = v23;
  if ( v10 < 0 )
  {
    v13 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            v25,
            v24,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionColorBrushT<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
            &v23);
    v5 = v23;
    v20 = v23;
    if ( v13 >= 0 )
    {
      *a4 = v23;
    }
    else
    {
      v14 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              v25,
              v24,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionGradientBrushT<Windows::UI::Composition::CompositionGradientBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
              &v23);
      v6 = v23;
      v19 = v23;
      if ( v14 >= 0 )
      {
        *a4 = v23;
      }
      else
      {
        v15 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                v25,
                v24,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBackdropBrushT<Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
                &v23);
        v7 = v23;
        v18 = v23;
        if ( v15 >= 0 )
        {
          *a4 = v23;
        }
        else
        {
          v16 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                  v25,
                  v24,
                  (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionNineGridBrushT<Windows::UI::Composition::CompositionNineGridBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
                  &v23);
          v8 = v23;
          v26 = v23;
          if ( v16 >= 0 )
          {
            *a4 = v23;
          }
          else
          {
            v17 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                    v25,
                    v24,
                    (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
                    &v23);
            v9 = v23;
            if ( v17 < 0 )
            {
              Windows::UI::Composition::OriginateInvalidArgument(0LL, L"value");
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x9A,
                (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
                (const char *)0x80070057LL);
              Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v23);
              Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v26);
              Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
              Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v19);
              Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v20);
              Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v21);
              return 2147942487LL;
            }
            *a4 = v23;
          }
        }
      }
    }
  }
  else
  {
    *a4 = v23;
  }
  if ( v9 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  if ( v8 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  if ( v7 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
  if ( v6 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
  if ( v5 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  if ( v11 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
  return 0LL;
}
