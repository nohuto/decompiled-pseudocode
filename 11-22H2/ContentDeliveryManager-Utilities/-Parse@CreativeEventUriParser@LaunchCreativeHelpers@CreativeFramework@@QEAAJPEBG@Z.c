/*
 * XREFs of ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x180078BEC
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18005BF00 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z @ 0x18002415C (--$-0$0BH@@StringReference@Internal@Windows@@QEAA@AEAY0BH@$$CBG@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180026424 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002C744 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042B18 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$As@UIUriEscapeStatics@Foundation@Windows@@@?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUriEscapeStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180065B1C (--$As@UIUriEscapeStatics@Foundation@Windows@@@-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windo.c)
 *     ?InternalRelease@?$ComPtr@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180078BB4 (-InternalRelease@-$ComPtr@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@IE.c)
 *     ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x1800792A0 (-SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800793E4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::Parse(
        CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *this,
        const unsigned __int16 *a2)
{
  __int64 *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // r15
  unsigned __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  const WCHAR *StringRawBuffer; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  PCWSTR v19; // rax
  __int64 i; // rbx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v23; // eax
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v25)(_QWORD, GUID *, __int64 *); // rdi
  int v26; // eax
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, __int64 *); // rdi
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, __int64 *); // rdi
  int v35; // eax
  int v36; // eax
  const unsigned __int16 *v37; // rbx
  const unsigned __int16 *v38; // rax
  __int64 v39; // rdx
  _WORD *v40; // rax
  __int64 v42; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v43[8]; // [rsp+38h] [rbp-61h] BYREF
  HSTRING v44; // [rsp+40h] [rbp-59h] BYREF
  HSTRING v45; // [rsp+48h] [rbp-51h] BYREF
  __int64 v46; // [rsp+50h] [rbp-49h] BYREF
  HSTRING v47; // [rsp+58h] [rbp-41h] BYREF
  __int64 v48; // [rsp+60h] [rbp-39h] BYREF
  __int64 (__fastcall ***v49)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-31h] BYREF
  __int64 v50; // [rsp+70h] [rbp-29h] BYREF
  __int64 v51; // [rsp+78h] [rbp-21h] BYREF
  HSTRING v52; // [rsp+80h] [rbp-19h] BYREF
  HSTRING v53; // [rsp+88h] [rbp-11h] BYREF
  __int64 (__fastcall ***v54)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-9h] BYREF
  HSTRING string; // [rsp+98h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v54 = 0LL;
  v4 = (__int64 *)Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[23])a2);
  v5 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
         *v4,
         (__int64)&v54);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v54;
    v42 = 0LL;
    v8 = (*v54)[6];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    if ( v9 > 0xFFFFFFFF )
    {
      LODWORD(v9) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(a2, v9, &hstringHeader, &string);
    v10 = v8(v7, (GUID *)string, &v42);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v10);
LABEL_66:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
      goto LABEL_67;
    }
    v44 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42 + 136LL))(v42, &v44);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 45LL;
LABEL_64:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)v12);
      goto LABEL_65;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v44, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"creative-ms", -1, 1) != 2 )
    {
      v6 = -2147024809;
      v13 = 46LL;
      v12 = 2147942487LL;
      goto LABEL_64;
    }
    v45 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42 + 104LL))(v42, &v45);
    v6 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v15);
LABEL_62:
      Windows::Internal::String::~String(&v45);
LABEL_65:
      Windows::Internal::String::~String(&v44);
      goto LABEL_66;
    }
    v46 = 0LL;
    v16 = Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>::As<Windows::Foundation::IUriEscapeStatics>(
            &v54,
            &v46);
    v6 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v16);
LABEL_61:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v46);
      goto LABEL_62;
    }
    v47 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v46 + 48LL))(v46, v45, &v47);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v19 = WindowsGetStringRawBuffer(v47, 0LL);
      v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              this,
              v19,
              -1LL);
      v6 = v17;
      if ( v17 >= 0 )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(this);
        for ( i = *((_QWORD *)this + 1); i; --i )
        {
          if ( !wcschr(L"/", *(_WORD *)(*(_QWORD *)this + 2 * i - 2)) )
            break;
        }
        if ( i != *((_QWORD *)this + 1) )
        {
          *(_WORD *)(*(_QWORD *)this + 2 * i) = 0;
          *((_QWORD *)this + 1) = i;
        }
        v21 = v42;
        v49 = 0LL;
        v22 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v42 + 120LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease((__int64 *)&v49);
        v23 = v22(v21, &v49);
        v6 = v23;
        if ( v23 >= 0 )
        {
          v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v49;
          v50 = 0LL;
          v25 = **v49;
          Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease(&v50);
          v26 = v25(v24, &GUID_876be83b_7218_5bfb_a169_83152ef7e146, &v50);
          v6 = v26;
          if ( v26 >= 0 )
          {
            v27 = v50;
            v48 = 0LL;
            v28 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v50 + 48LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease(&v48);
            v29 = v28(v27, &v48);
            v6 = v29;
            if ( v29 >= 0 )
            {
              v32 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v48 + 56LL))(v48, v43);
              v6 = v32;
              if ( v32 >= 0 )
              {
                while ( v43[0] )
                {
                  v33 = v48;
                  v51 = 0LL;
                  v34 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 48LL);
                  Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease(&v51);
                  v35 = v34(v33, &v51);
                  v6 = v35;
                  if ( v35 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x49,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
                      (const char *)(unsigned int)v35);
                    goto LABEL_43;
                  }
                  v53 = 0LL;
                  v52 = 0LL;
                  v36 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v51 + 48LL))(v51, &v53);
                  v6 = v36;
                  if ( v36 < 0 )
                  {
                    v39 = 77LL;
LABEL_42:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v39,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
                      (const char *)(unsigned int)v36);
                    Windows::Internal::String::~String(&v52);
                    Windows::Internal::String::~String(&v53);
LABEL_43:
                    Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease(&v51);
                    goto LABEL_57;
                  }
                  v36 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v51 + 56LL))(v51, &v52);
                  v6 = v36;
                  if ( v36 < 0 )
                  {
                    v39 = 78LL;
                    goto LABEL_42;
                  }
                  v37 = WindowsGetStringRawBuffer(v52, 0LL);
                  v38 = WindowsGetStringRawBuffer(v53, 0LL);
                  v36 = CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::SetUriParam(this, v38, v37);
                  v6 = v36;
                  if ( v36 < 0 )
                  {
                    v39 = 79LL;
                    goto LABEL_42;
                  }
                  v36 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v48 + 64LL))(v48, v43);
                  v6 = v36;
                  if ( v36 < 0 )
                  {
                    v39 = 81LL;
                    goto LABEL_42;
                  }
                  Windows::Internal::String::~String(&v52);
                  Windows::Internal::String::~String(&v53);
                  Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease(&v51);
                }
                if ( *(_QWORD *)this && **(_WORD **)this )
                {
                  v40 = (_WORD *)*((_QWORD *)this + 3);
                  if ( v40 && *v40 )
                  {
                    Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease(&v48);
                    Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease(&v50);
                    Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease((__int64 *)&v49);
                    Windows::Internal::String::~String(&v47);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v46);
                    Windows::Internal::String::~String(&v45);
                    Windows::Internal::String::~String(&v44);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v54);
                    return 0LL;
                  }
                  v31 = 86LL;
                }
                else
                {
                  v31 = 85LL;
                }
                v6 = -2147024809;
                v30 = 2147942487LL;
              }
              else
              {
                v30 = (unsigned int)v32;
                v31 = 69LL;
              }
            }
            else
            {
              v30 = (unsigned int)v29;
              v31 = 67LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v31,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
              (const char *)v30);
LABEL_57:
            Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease(&v48);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x40,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
              (const char *)(unsigned int)v26);
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease(&v50);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3E,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
            (const char *)(unsigned int)v23);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>::InternalRelease((__int64 *)&v49);
        goto LABEL_60;
      }
      v18 = 57LL;
    }
    else
    {
      v18 = 56LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v17);
LABEL_60:
    Windows::Internal::String::~String(&v47);
    goto LABEL_61;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
    (const char *)(unsigned int)v5);
LABEL_67:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v54);
  return v6;
}
