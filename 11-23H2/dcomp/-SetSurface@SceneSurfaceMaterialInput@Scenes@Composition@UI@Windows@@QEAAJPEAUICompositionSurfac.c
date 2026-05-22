/*
 * XREFs of ?SetSurface@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@345@@Z @ 0x180145228
 * Callers:
 *     ?put_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@456@@Z @ 0x180145750 (-put_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositionS.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??4?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x1800A33BC (--4-$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICompos.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::SetSurface(
        Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput *this,
        struct IUnknown *a2)
{
  __int64 *v2; // r14
  int v5; // ebp
  Microsoft::WRL2::NestableRuntimeClass *v6; // rbx
  int v7; // eax
  const char *v9; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+50h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = (__int64 *)((char *)this + 184);
  if ( a2 == *((struct IUnknown **)this + 23) )
    return 0LL;
  v5 = 0;
  if ( !a2 )
  {
LABEL_9:
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1,
      v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurface>::operator=(v2, (__int64)a2);
    return 0LL;
  }
  v6 = 0LL;
  v11 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
  if ( (int)Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              *((struct Microsoft::WRL2::ContextSession **)this + 3),
              a2,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionMipmapSurface::s_InterfaceType,
              &v11) >= 0 )
  {
    v5 = *((_DWORD *)v11 + 32);
    goto LABEL_7;
  }
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         *((struct Microsoft::WRL2::ContextSession **)this + 3),
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionVisualSurface::s_InterfaceType,
         &v12);
  v6 = v12;
  if ( v7 >= 0 )
  {
    v5 = *((_DWORD *)v12 + 32);
LABEL_7:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
    if ( v6 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x6C,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialsurfacematerialinput.cpp",
    (const char *)0x80070057LL,
    (int)"This object currently only accepts CompositionMipmapSurface or VisualSurface as a surface.",
    v9);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
  if ( v6 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
  return 2147942487LL;
}
