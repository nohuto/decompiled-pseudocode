/*
 * XREFs of ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1804B4664
 * Callers:
 *     ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x18005FDD0 (-IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180096C50 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DD7C0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800DDA68 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800DDE10 (--1RoVariant@@QEAA@XZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x180440F28 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1804B1200 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1804B1C18 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1804B68D8 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
__int64 __fastcall PeoplePaneViewManager::IsWindowVisibleInContactPanel(
        PeoplePaneViewManager *this,
        HWND a2,
        const unsigned __int16 *a3,
        int *a4)
{
  int v7; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64, struct IInspectable **); // rdi
  int v19; // edi
  WCHAR *v20; // rbx
  HSTRING v21; // rcx
  int v22; // ebx
  int v23; // ebx
  HSTRING v24; // rcx
  __int64 v25; // rax
  const WCHAR *p_lpStringValue; // rbx
  const WCHAR *StringRawBuffer; // rax
  bool v28; // bl
  int v29; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-1C0h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-1A8h] BYREF
  HSTRING string; // [rsp+58h] [rbp-1A0h] BYREF
  int v35; // [rsp+60h] [rbp-198h]
  const WCHAR *v36; // [rsp+68h] [rbp-190h] BYREF
  int v37; // [rsp+70h] [rbp-188h]
  __int64 v38; // [rsp+80h] [rbp-178h] BYREF
  _BYTE v39[8]; // [rsp+90h] [rbp-168h] BYREF
  _BYTE v40[128]; // [rsp+98h] [rbp-160h] BYREF
  _BYTE v41[104]; // [rsp+118h] [rbp-E0h] BYREF
  LPCWSTR lpStringValue; // [rsp+180h] [rbp-78h] BYREF
  struct IInspectable *v43[3]; // [rsp+188h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1A0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+1B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  *a4 = 0;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
  v7 = CoreQueryWindowService(
         a2,
         &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
         &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
         &v30);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    return (unsigned int)v7;
  }
  v31 = 0LL;
  v45 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v45,
         (__int64 *)&v31);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41A,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    return v10;
  }
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  v11 = RoCreatePropertySetSerializer(&v32);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41E,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    return v12;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v32 + 56LL))(v32, v31, v30);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41F,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    return v14;
  }
  v33 = 0LL;
  v15 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
          &v31,
          &v33);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x422,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    return v16;
  }
  v36 = 0LL;
  v37 = 0;
  v17 = v33;
  v18 = *(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v33 + 48LL);
  lpStringValue = (LPCWSTR)&v36;
  v43[0] = 0LL;
  v45 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"RunningComponentUIApplicationList",
    0x22u,
    0x21u);
  v19 = v18(v17, v45, v43);
  v45 = 0LL;
  v20 = (WCHAR *)lpStringValue;
  RoVariant::RoVariant((RoVariant *)&string, v43[0]);
  v21 = *(HSTRING *)v20;
  *(_QWORD *)v20 = string;
  string = v21;
  LODWORD(v21) = *((_DWORD *)v20 + 2);
  *((_DWORD *)v20 + 2) = v35;
  v35 = (int)v21;
  RoVariant::~RoVariant((RoVariant *)&string);
  if ( v19 < 0 )
  {
    RoVariant::~RoVariant((RoVariant *)&v36);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    return (unsigned int)v19;
  }
  v22 = v37;
  if ( v37 < 0 )
    goto LABEL_18;
  if ( v37 )
  {
    if ( v37 == 1 || v37 == 3 )
    {
      v29 = 13;
    }
    else
    {
      v22 = (*(__int64 (__fastcall **)(const WCHAR *, int *))(*(_QWORD *)v36 + 48LL))(v36, &v29);
      if ( v22 < 0 )
      {
LABEL_18:
        RoVariant::~RoVariant((RoVariant *)&v36);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
        return (unsigned int)v22;
      }
      v22 = v37;
    }
  }
  else
  {
    v29 = 0;
  }
  if ( v29 == 12 )
  {
    string = 0LL;
    lpStringValue = v36;
    LODWORD(v43[0]) = v22;
    WindowsDeleteString(0LL);
    string = 0LL;
    v23 = RoVariant::Accessor::GetString((RoVariant::Accessor *)&lpStringValue, &string);
    if ( v23 < 0 )
    {
      WindowsDeleteString(string);
      string = 0LL;
      RoVariant::~RoVariant((RoVariant *)&v36);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
      return (unsigned int)v23;
    }
    v24 = string;
    if ( string )
    {
      std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(&v38);
      v25 = std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v39, (__int64)a3);
      std::operator<<<unsigned short,std::char_traits<unsigned short>>(v25, (__int64)L";");
      std::basic_stringbuf<unsigned short>::str(v40, &lpStringValue);
      p_lpStringValue = (const WCHAR *)&lpStringValue;
      if ( v43[2] >= (struct IInspectable *)8 )
        p_lpStringValue = lpStringValue;
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v28 = FindStringOrdinal(0x400000u, StringRawBuffer, -1, p_lpStringValue, -1, 1) != -1;
      std::wstring::_Tidy_deallocate((__int64)&lpStringValue);
      if ( v28 )
        *a4 = 1;
      std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v41);
      std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v41);
      v24 = string;
    }
    WindowsDeleteString(v24);
  }
  RoVariant::~RoVariant((RoVariant *)&v36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
  return 0LL;
}
