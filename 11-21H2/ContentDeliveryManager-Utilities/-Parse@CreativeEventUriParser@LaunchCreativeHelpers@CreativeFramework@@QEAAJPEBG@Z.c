/*
 * XREFs of ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x1800838B4
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x1800625A0 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180023EEC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUriRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A330 (-InternalRelease@-$ComPtr@UIUriRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIUriEscapeStatics@Foundation@Windows@@@?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUriEscapeStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006CB28 (--$As@UIUriEscapeStatics@Foundation@Windows@@@-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windo.c)
 *     ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x18008422C (-SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800842F0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::Parse(
        CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *this,
        unsigned __int16 *a2)
{
  HSTRING v3; // rbx
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rdi
  GUID **v8; // rax
  int v9; // eax
  int v10; // eax
  const WCHAR *StringRawBuffer; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  PCWSTR v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  const unsigned __int16 *v28; // rbx
  const unsigned __int16 *v29; // rax
  __int64 v30; // rcx
  _WORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  _BYTE v42[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v43; // [rsp+38h] [rbp-41h] BYREF
  __int64 v44; // [rsp+40h] [rbp-39h] BYREF
  __int64 v45; // [rsp+48h] [rbp-31h] BYREF
  HSTRING v46; // [rsp+50h] [rbp-29h] BYREF
  HSTRING v47; // [rsp+58h] [rbp-21h] BYREF
  __int64 v48; // [rsp+60h] [rbp-19h] BYREF
  HSTRING v49; // [rsp+68h] [rbp-11h] BYREF
  __int64 v50; // [rsp+70h] [rbp-9h] BYREF
  __int64 (__fastcall ***v51)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-1h] BYREF
  HSTRING v52; // [rsp+80h] [rbp+7h] BYREF
  HSTRING v53; // [rsp+88h] [rbp+Fh] BYREF
  __int64 (__fastcall ***v54)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+17h] BYREF
  HSTRING string; // [rsp+98h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v52 = (HSTRING)a2;
  v54 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v3 = string;
  Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease((__int64 *)&v54);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v54);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_97;
  }
  v6 = v54;
  v45 = 0LL;
  v7 = (*v54)[6];
  Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease(&v45);
  v8 = (GUID **)Windows::Internal::StringReference::StringReference((__int64)&string, (const WCHAR **)&v52);
  v9 = v7(v6, *v8, &v45);
  v5 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_96;
  }
  v46 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v45 + 136LL))(v45, &v46);
  v5 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_94;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(v46, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"creative-ms", -1, 1) != 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)0x80070057LL);
LABEL_110:
    if ( v46 )
      WindowsDeleteString(v46);
    Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease((__int64 *)&v54);
    return 2147942487LL;
  }
  v47 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v45 + 104LL))(v45, &v47);
  v5 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_92;
  }
  v48 = 0LL;
  v13 = Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>::As<Windows::Foundation::IUriEscapeStatics>(
          &v54,
          &v48);
  v5 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_91;
  }
  v49 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v48 + 48LL))(v48, v47, &v49);
  v5 = v14;
  if ( v14 < 0 )
  {
    v15 = 56LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_89;
  }
  v16 = WindowsGetStringRawBuffer(v49, 0LL);
  v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          this,
          v16,
          -1LL);
  v5 = v14;
  if ( v14 < 0 )
  {
    v15 = 57LL;
    goto LABEL_17;
  }
  v17 = *((_QWORD *)this + 1);
  if ( v17 == -1 )
  {
    if ( *(_QWORD *)this )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)(*(_QWORD *)this + 2 * v17) );
    }
    else
    {
      v17 = 0LL;
    }
    *((_QWORD *)this + 1) = v17;
  }
  for ( ; v17; --v17 )
  {
    if ( !wcschr(L"/", *(_WORD *)(*(_QWORD *)this + 2 * v17 - 2)) )
      break;
  }
  if ( v17 != *((_QWORD *)this + 1) )
  {
    *(_WORD *)(*(_QWORD *)this + 2 * v17) = 0;
    *((_QWORD *)this + 1) = v17;
  }
  v18 = v45;
  v51 = 0LL;
  v19 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v45 + 120LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease((__int64 *)&v51);
  v20 = v19(v18, &v51);
  v5 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_88;
  }
  v44 = 0LL;
  v21 = (**v51)(v51, &GUID_876be83b_7218_5bfb_a169_83152ef7e146, &v44);
  v5 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_36;
  }
  v43 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 48LL))(v44, &v43);
  v5 = v23;
  if ( v23 < 0 )
  {
    v24 = 67LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_41;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v43 + 56LL))(v43, v42);
  v5 = v23;
  if ( v23 < 0 )
  {
    v24 = 69LL;
    goto LABEL_40;
  }
  while ( 1 )
  {
    if ( !v42[0] )
    {
      if ( *(_QWORD *)this && **(_WORD **)this )
      {
        v31 = (_WORD *)*((_QWORD *)this + 3);
        if ( v31 && *v31 )
        {
          v32 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
          v33 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease((__int64 *)&v51);
          if ( v49 )
            WindowsDeleteString(v49);
          Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease(&v48);
          if ( v47 )
            WindowsDeleteString(v47);
          if ( v46 )
            WindowsDeleteString(v46);
          Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease(&v45);
          Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease((__int64 *)&v54);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x56,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
          (const char *)0x80070057LL);
        v39 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        }
        v40 = v44;
        if ( !v44 )
          goto LABEL_106;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x55,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
          (const char *)0x80070057LL);
        v41 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
        }
        v40 = v44;
        if ( !v44 )
          goto LABEL_106;
      }
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
LABEL_106:
      Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease((__int64 *)&v51);
      if ( v49 )
        WindowsDeleteString(v49);
      Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease(&v48);
      if ( v47 )
        WindowsDeleteString(v47);
      goto LABEL_110;
    }
    v50 = 0LL;
    v26 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 48LL))(v43, &v50);
    v5 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v26);
      v37 = v50;
      if ( v50 )
      {
        v50 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = v43;
      if ( v43 )
      {
        v43 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v22 = v44;
      if ( v44 )
        goto LABEL_87;
      goto LABEL_88;
    }
    v52 = 0LL;
    v53 = 0LL;
    v27 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v50 + 48LL))(v50, &v52);
    v5 = v27;
    if ( v27 < 0 )
      break;
    v27 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v50 + 56LL))(v50, &v53);
    v5 = v27;
    if ( v27 < 0 )
    {
      v35 = 78LL;
      goto LABEL_73;
    }
    v28 = WindowsGetStringRawBuffer(v53, 0LL);
    v29 = WindowsGetStringRawBuffer(v52, 0LL);
    v27 = CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::SetUriParam(this, v29, v28);
    v5 = v27;
    if ( v27 < 0 )
    {
      v35 = 79LL;
      goto LABEL_73;
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v43 + 64LL))(v43, v42);
    v5 = v27;
    if ( v27 < 0 )
    {
      v35 = 81LL;
      goto LABEL_73;
    }
    if ( v53 )
      WindowsDeleteString(v53);
    if ( v52 )
      WindowsDeleteString(v52);
    v30 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
  v35 = 77LL;
LABEL_73:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v35,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
    (const char *)(unsigned int)v27);
  if ( v53 )
    WindowsDeleteString(v53);
  if ( v52 )
    WindowsDeleteString(v52);
  v36 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
LABEL_41:
  v25 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
LABEL_36:
  v22 = v44;
  if ( v44 )
  {
LABEL_87:
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
LABEL_88:
  Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease((__int64 *)&v51);
LABEL_89:
  if ( v49 )
    WindowsDeleteString(v49);
LABEL_91:
  Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease(&v48);
LABEL_92:
  if ( v47 )
    WindowsDeleteString(v47);
LABEL_94:
  if ( v46 )
    WindowsDeleteString(v46);
LABEL_96:
  Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease(&v45);
LABEL_97:
  Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::InternalRelease((__int64 *)&v54);
  return v5;
}
