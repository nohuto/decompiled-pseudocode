/*
 * XREFs of ?StopAnimationGroup@ProxyObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@234@@Z @ 0x180147420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?GetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAPEAUHSTRING__@@@Z @ 0x18008AD4C (-GetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAPEAUHSTRING__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StopAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z @ 0x180152800 (-StopAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::StopAnimationGroup(
        struct Microsoft::WRL2::ContextSession **this,
        struct IUnknown *a2)
{
  int v4; // eax
  HSTRING *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  HSTRING string; // [rsp+40h] [rbp+20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+50h] [rbp+30h] BYREF

  v12 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
  v4 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         this[3],
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
         (struct Microsoft::WRL2::ContextRuntimeClass **)&string);
  v5 = (HSTRING *)string;
  v12 = (Microsoft::WRL2::NestableRuntimeClass *)string;
  if ( v4 < 0 || !string )
  {
    string = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&string);
    if ( (int)Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                this[3],
                a2,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimationGroup::s_InterfaceType,
                (struct Microsoft::WRL2::ContextRuntimeClass **)&string) >= 0 )
    {
      if ( string )
      {
        v8 = Windows::UI::Composition::CompositionAnimationGroup::StopAnimations(
               (Windows::UI::Composition::CompositionAnimationGroup *)string,
               (struct Windows::UI::Composition::CompositionObject *)this);
        v7 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D2,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
            (const char *)(unsigned int)v8);
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&string);
          goto LABEL_12;
        }
      }
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)&string);
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  Windows::UI::Composition::CompositionAnimation::GetTarget(v5, &string);
  v6 = (*((__int64 (__fastcall **)(struct Microsoft::WRL2::ContextSession **, HSTRING))*this + 22))(this, string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    WindowsDeleteString(string);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C2,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
    (const char *)(unsigned int)v6);
  WindowsDeleteString(string);
  string = 0LL;
LABEL_12:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
  return v7;
}
