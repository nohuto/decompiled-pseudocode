/*
 * XREFs of ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z @ 0x180162060
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x18013B930 (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180609C80 (-CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopCreated@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180609D20 (-VirtualDesktopCreated@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180609D30 (-VirtualDesktopDestroyed@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopNameChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180609D40 (-VirtualDesktopNameChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@.c)
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x18005C358 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E1A74 (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??4?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801625D0 (--4-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV01.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180162620 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801626F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHSTRING__@@XZ @ 0x1801B68B0 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18038BC1C (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopAcessibility::RecalculateDesktopName(VirtualDesktopAcessibility *this, char a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, struct IUnknown **); // rbx
  int v6; // eax
  int v7; // ebx
  struct IUnknown *v8; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64); // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  const unsigned __int16 *StringRawBuffer; // rax
  __int64 v17; // r8
  const WCHAR *v18; // rdx
  HWND DesktopWindow; // rax
  __int64 v21; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v22[8]; // [rsp+28h] [rbp-28h] BYREF
  const WCHAR *v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h]
  __int64 v25; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IUnknown *v27; // [rsp+80h] [rbp+30h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h] BYREF
  HSTRING string; // [rsp+98h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), v22);
  v27 = 0LL;
  v4 = *((_QWORD *)this + 25);
  v5 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v4 + 360LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
  v6 = v5(v4, &v27);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v28 = 0LL;
    v8 = v27;
    QueryInterface = v27->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
            v8,
            &GUID_c9be252c_e386_425e_b33c_ca422112f51f,
            &v28);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
        (const char *)(unsigned int)v10);
LABEL_28:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v28);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(&v23);
      goto LABEL_29;
    }
    string = 0LL;
    v11 = v28;
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 32LL);
    v13 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::put(&string);
    v14 = v12(v11, v13);
    v7 = v14;
    if ( v14 < 0 )
    {
      v15 = 84LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_27;
    }
    if ( string )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)&v23,
              StringRawBuffer,
              0xFFFFFFFFFFFFFFFFuLL);
      v7 = v14;
      if ( v14 < 0 )
      {
        v15 = 88LL;
        goto LABEL_13;
      }
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, __int64 *))(**((_QWORD **)this + 24) + 104LL))(
             *((_QWORD *)this + 24),
             v27,
             &v21);
      if ( v7 < 0 )
      {
LABEL_27:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string);
        goto LABEL_28;
      }
      v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
              &v23,
              &_ImageBase,
              13501LL,
              v21 + 1);
      v7 = v14;
      if ( v14 < 0 )
      {
        v15 = 95LL;
        goto LABEL_13;
      }
    }
    if ( !(unsigned int)SHIsSameObject(v27, *((struct IUnknown **)this + 26)) )
      goto LABEL_24;
    LODWORD(v17) = v24;
    if ( v24 == -1 )
    {
      if ( v23 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( v23[v17] );
      }
      else
      {
        LODWORD(v17) = 0;
      }
    }
    v18 = &LocaleName;
    if ( v23 )
      v18 = v23;
    if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
           (const WCHAR **)this + 28,
           v18,
           v17) != 2 )
    {
LABEL_24:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator=(
        (char *)this + 224,
        &v23);
      Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)this + 26, (__int64 *)&v27);
      if ( a2 )
      {
        DesktopWindow = GetDesktopWindow();
        NotifyWinEvent(0x800Cu, DesktopWindow, 0, 0);
      }
    }
    v7 = 0;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
    (const char *)(unsigned int)v6);
LABEL_29:
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v27);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v22);
  return (unsigned int)v7;
}
