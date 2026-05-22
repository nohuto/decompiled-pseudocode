/*
 * XREFs of ?StartAnimationGroup@ProxyObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@234@@Z @ 0x18008AC70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?GetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAPEAUHSTRING__@@@Z @ 0x18008AD4C (-GetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAPEAUHSTRING__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PlayAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@W4AnimationValueSynchronizationBehavior@234@PEA_NPEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1801519FC (-PlayAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::StartAnimationGroup(
        struct Microsoft::WRL2::ContextSession **this,
        struct IUnknown *a2)
{
  int v4; // eax
  Windows::UI::Composition::CompositionAnimation *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HSTRING string; // [rsp+50h] [rbp+20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+60h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+68h] [rbp+38h] BYREF

  v14 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
  v4 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         this[3],
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
         (struct Microsoft::WRL2::ContextRuntimeClass **)&string);
  v5 = (Windows::UI::Composition::CompositionAnimation *)string;
  v14 = (Microsoft::WRL2::NestableRuntimeClass *)string;
  if ( v4 >= 0 && string )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    Windows::UI::Composition::CompositionAnimation::GetTarget(v5, &string);
    v6 = (*((__int64 (__fastcall **)(struct Microsoft::WRL2::ContextSession **, HSTRING, Windows::UI::Composition::CompositionAnimation *, _QWORD, _QWORD))*this
          + 19))(
           this,
           string,
           v5,
           0LL,
           0LL);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x294,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
        (const char *)(unsigned int)v6);
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_6;
    }
    WindowsDeleteString(string);
  }
  else
  {
    v13 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
    v9 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           this[3],
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimationGroup::s_InterfaceType,
           (struct Microsoft::WRL2::ContextRuntimeClass **)&string);
    v13 = (Microsoft::WRL2::NestableRuntimeClass *)string;
    if ( v9 >= 0 )
    {
      if ( string )
      {
        v10 = Windows::UI::Composition::CompositionAnimationGroup::PlayAnimations(
                (_DWORD)string,
                (_DWORD)this,
                0,
                0,
                (__int64)&string,
                0LL);
        v7 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2A5,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
            (const char *)(unsigned int)v10);
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
          goto LABEL_6;
        }
      }
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
  }
  v7 = 0;
LABEL_6:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
  return v7;
}
