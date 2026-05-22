/*
 * XREFs of ?SetLightSource@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@@Z @ 0x1800076F4
 * Callers:
 *     ?put_LightSource@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAUICompositionLight@345@@Z @ 0x180006920 (-put_LightSource@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAUICompositionLig.c)
 *     ?Destroy@CompositionProjectedShadow@Composition@UI@Windows@@UEAAXXZ @ 0x180006BF0 (-Destroy@CompositionProjectedShadow@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::SetLightSource(
        Windows::UI::Composition::CompositionProjectedShadow *this,
        struct IUnknown *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rdi
  int v6; // eax
  int v7; // eax
  unsigned int lpVtbl; // r9d
  Microsoft::WRL2::NestableRuntimeClass *v9; // rcx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           *((struct Microsoft::WRL2::ContextSession **)this + 3),
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::DistantLight::s_InterfaceType,
           &v13);
    v2 = v13;
    v15 = v13;
    if ( v6 < 0 )
    {
      v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
             *((struct Microsoft::WRL2::ContextSession **)this + 3),
             a2,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Private::SharedLight::s_InterfaceType,
             &v13);
      v3 = v13;
      if ( v7 < 0 )
      {
        Windows::UI::Composition::OriginateInvalidArgument(10LL, L"value");
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x115,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowscene.cpp",
          (const char *)0x80070057LL,
          v11);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
        return 2147942487LL;
      }
    }
    lpVtbl = (unsigned int)a2[16].lpVtbl;
  }
  else
  {
    lpVtbl = 0;
  }
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    2u,
    lpVtbl);
  if ( *((struct IUnknown **)this + 30) != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)a2);
    v9 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = a2;
    if ( v9 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  }
  if ( v3 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  if ( v2 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  return 0LL;
}
