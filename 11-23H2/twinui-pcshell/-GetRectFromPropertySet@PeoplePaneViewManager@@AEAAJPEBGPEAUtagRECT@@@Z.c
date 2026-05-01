/*
 * XREFs of ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x1804B3A88
 * Callers:
 *     ?GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z @ 0x1804B39F0 (-GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z @ 0x1804B3A40 (-GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DD7C0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800DDA68 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800DDE10 (--1RoVariant@@QEAA@XZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z @ 0x1804B3998 (-GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall PeoplePaneViewManager::GetRectFromPropertySet(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        struct tagRECT *a3)
{
  int v6; // edi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // r8d
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, PVOID, char *); // rdi
  HSTRING_HEADER *v14; // rax
  const WCHAR **Reserved1; // rbx
  const WCHAR *v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PVOID, char *); // rdi
  HSTRING_HEADER *v20; // rax
  const WCHAR **v21; // rbx
  const WCHAR *v22; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  BOOL WindowRect; // eax
  float v27; // xmm2_4
  float v28; // xmm0_4
  const WCHAR *v29; // [rsp+20h] [rbp-79h] BYREF
  int v30; // [rsp+28h] [rbp-71h]
  __int64 v31; // [rsp+30h] [rbp-69h] BYREF
  __int64 v32; // [rsp+38h] [rbp-61h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-59h] BYREF
  __int64 v34; // [rsp+48h] [rbp-51h] BYREF
  void *v35; // [rsp+50h] [rbp-49h] BYREF
  int v36; // [rsp+58h] [rbp-41h]
  float v37; // [rsp+60h] [rbp-39h] BYREF
  float v38; // [rsp+64h] [rbp-35h]
  float v39; // [rsp+68h] [rbp-31h]
  float v40; // [rsp+6Ch] [rbp-2Dh]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-29h] BYREF
  __int64 v42; // [rsp+88h] [rbp-11h]
  struct tagRECT Rect; // [rsp+90h] [rbp-9h] BYREF
  HSTRING_HEADER v44; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v45; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v29 = a2;
  SetRectEmpty(a3);
  if ( !*((_QWORD *)this + 73) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
  v6 = CoreQueryWindowService(
         *((_QWORD *)this + 73),
         &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
         &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
         &v34);
  if ( v6 >= 0 )
  {
    v33 = 0LL;
    v42 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v42,
           (__int64 *)&v33);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x165,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_26:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
      goto LABEL_27;
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    v8 = RoCreatePropertySetSerializer(&v32);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 361LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_25:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
      goto LABEL_26;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v32 + 56LL))(v32, v33, v34);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 362LL;
      goto LABEL_10;
    }
    v31 = 0LL;
    v10 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
            &v33,
            &v31);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16D,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_24:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
      goto LABEL_25;
    }
    v35 = 0LL;
    v36 = 0;
    v12 = v31;
    v13 = *(int (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v31 + 48LL);
    hstringHeader.Reserved.Reserved1 = &v35;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, &v29, v11);
    LOBYTE(v13) = v13(v12, v14[1].Reserved.Reserved1, &hstringHeader.Reserved.Reserved2[8]) < 0;
    v45 = 0LL;
    Reserved1 = (const WCHAR **)hstringHeader.Reserved.Reserved1;
    RoVariant::RoVariant((RoVariant *)&v29, *(struct IInspectable **)&hstringHeader.Reserved.Reserved2[8]);
    v16 = *Reserved1;
    *Reserved1 = v29;
    v29 = v16;
    LODWORD(v16) = *((_DWORD *)Reserved1 + 2);
    *((_DWORD *)Reserved1 + 2) = v30;
    v30 = (int)v16;
    RoVariant::~RoVariant((RoVariant *)&v29);
    if ( !(_BYTE)v13 )
      goto LABEL_16;
    v18 = v31;
    v19 = *(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v31 + 48LL);
    hstringHeader.Reserved.Reserved1 = &v35;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, (const WCHAR **)off_1807F46C8, v17);
    v6 = v19(v18, v20[1].Reserved.Reserved1, &hstringHeader.Reserved.Reserved2[8]);
    v45 = 0LL;
    v21 = (const WCHAR **)hstringHeader.Reserved.Reserved1;
    RoVariant::RoVariant((RoVariant *)&v29, *(struct IInspectable **)&hstringHeader.Reserved.Reserved2[8]);
    v22 = *v21;
    *v21 = v29;
    v29 = v22;
    LODWORD(v22) = *((_DWORD *)v21 + 2);
    *((_DWORD *)v21 + 2) = v30;
    v30 = (int)v22;
    RoVariant::~RoVariant((RoVariant *)&v29);
    if ( v6 < 0 )
    {
      v23 = (unsigned int)v6;
      v24 = 374LL;
    }
    else
    {
LABEL_16:
      hstringHeader.Reserved.Reserved1 = v35;
      *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = v36;
      v25 = RoVariant::Accessor::GetRect(
              (RoVariant::Accessor *)&hstringHeader,
              (struct Windows::Foundation::Rect *)&v37);
      v6 = v25;
      if ( v25 >= 0 )
      {
        WindowRect = GetWindowRect(*((HWND *)this + 73), &Rect);
        v27 = v37;
        if ( WindowRect )
        {
          v27 = v37 + (float)Rect.left;
          v37 = v27;
          v28 = v38 + (float)Rect.top;
          v38 = v28;
        }
        else
        {
          v28 = v38;
        }
        a3->left = (int)v27;
        a3->top = (int)v28;
        a3->right = (int)v27 + (int)v39;
        a3->bottom = (int)v28 + (int)v40;
        v6 = 0;
        goto LABEL_23;
      }
      v23 = (unsigned int)v25;
      v24 = 376LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)v23);
LABEL_23:
    RoVariant::~RoVariant((RoVariant *)&v35);
    goto LABEL_24;
  }
LABEL_27:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
  return (unsigned int)v6;
}
