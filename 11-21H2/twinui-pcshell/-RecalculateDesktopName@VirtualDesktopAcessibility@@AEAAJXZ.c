/*
 * XREFs of ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x18010F3E0
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1801102E8 (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18054DE20 (-CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIObjectArray@@PEAUIVirtualDes.c)
 *     ?VirtualDesktopCreated@VirtualDesktopAcessibility@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x18054DEC0 (-VirtualDesktopCreated@VirtualDesktopAcessibility@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopAcessibility@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18054DED0 (-VirtualDesktopDestroyed@VirtualDesktopAcessibility@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@.c)
 *     ?VirtualDesktopNameChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18054DEE0 (-VirtualDesktopNameChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010F8F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ??4?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x18010FD1C (--4-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV01.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18010FDA8 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1802E2090 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualDesktopAcessibility::RecalculateDesktopName(VirtualDesktopAcessibility *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, struct IUnknown **); // rbx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ebx
  struct IUnknown *v7; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  HWND DesktopWindow; // rax
  __int64 v14; // rdx
  PCWSTR StringRawBuffer; // rax
  __int64 v16; // r8
  const WCHAR *v17; // rdx
  RTL_SRWLOCK *v18; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IUnknown *v22; // [rsp+80h] [rbp+30h] BYREF
  HSTRING string; // [rsp+88h] [rbp+38h] BYREF
  __int64 *v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), &v18);
  v22 = 0LL;
  v2 = *((_QWORD *)this + 25);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v2 + 312LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  v4 = v3(v2, 0LL, &v22);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_11;
  }
  v19 = 0uLL;
  v20 = 0LL;
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    v5);
  v24 = 0LL;
  v7 = v22;
  QueryInterface = v22->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 **))QueryInterface)(
         v7,
         &GUID_eddfebdb_99be_41b5_924b_71dee9de176c,
         &v24);
  v6 = v9;
  if ( v9 >= 0 )
  {
    string = 0LL;
    v10 = *v24;
    string = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v10 + 48))(v24, &string);
    v6 = v11;
    if ( v11 < 0 )
    {
      v14 = 84LL;
    }
    else if ( string )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)&v19,
              (__int64)StringRawBuffer,
              0xFFFFFFFFFFFFFFFFuLL);
      v6 = v11;
      if ( v11 >= 0 )
      {
LABEL_7:
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
        if ( !(unsigned int)SHIsSameObject(v22, *((struct IUnknown **)this + 26)) )
          goto LABEL_8;
        if ( v19 > __PAIR128__(-1LL, 0LL) )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( *(_WORD *)(v19 + 2 * v16) );
        }
        v17 = &LocaleName;
        if ( (_QWORD)v19 )
          v17 = (const WCHAR *)v19;
        if ( (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
                             (char *)this + 224,
                             v17) != 2 )
        {
LABEL_8:
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator=(
            (char *)this + 224,
            &v19);
          Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)this + 26, (__int64 *)&v22);
          DesktopWindow = GetDesktopWindow();
          NotifyWinEvent(0x800Cu, DesktopWindow, 0, 0);
        }
        v6 = 0;
        goto LABEL_10;
      }
      v14 = 88LL;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown *, __int64 *))(**((_QWORD **)this + 24) + 112LL))(
             *((_QWORD *)this + 24),
             0LL,
             v22,
             &v25);
      if ( v6 < 0 )
      {
LABEL_19:
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
        goto LABEL_20;
      }
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
              &v19,
              &_ImageBase,
              13501LL,
              v25 + 1);
      v6 = v11;
      if ( v11 >= 0 )
        goto LABEL_7;
      v14 = 95LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x51,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
    (const char *)(unsigned int)v9);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
LABEL_10:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v19);
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  return (unsigned int)v6;
}
