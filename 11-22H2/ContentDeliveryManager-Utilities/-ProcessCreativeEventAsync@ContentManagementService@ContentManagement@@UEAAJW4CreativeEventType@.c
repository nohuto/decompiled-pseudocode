/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18005BBF0
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18005BF00 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002C744 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Duplicate@String@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800313A0 (-Duplicate@String@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180037C98 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004B3F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x18004E094 (Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Found_ea_18004E094.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_cdeb3b86346b203bd3e87afbcbd1e510___ @ 0x18004E5C0 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_cdeb3b86346b203bd3e87afbc.c)
 *     _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510__0 @ 0x1800502A4 (_lambda_cdeb3b86346b203bd3e87afbcbd1e510_--_lambda_cdeb3b86346b203bd3e87afbcbd1e510__0.c)
 *     _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x1800522E8 (_lambda_cdeb3b86346b203bd3e87afbcbd1e510_--__lambda_cdeb3b86346b203bd3e87afbcbd1e510_.c)
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x180058384 (-GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x180059D74 (-InternalAddRef@-$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        HSTRING a6,
        __int64 a7,
        int a8,
        __int64 *a9)
{
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  ContentManagement *StringRawBuffer; // rax
  struct ContentManagement::ICreativeEventReportedCache **v17; // r8
  int EventCacheIfNeeded; // eax
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // esi
  HSTRING string; // [rsp+50h] [rbp-B0h] BYREF
  char v28; // [rsp+58h] [rbp-A8h]
  HSTRING v29; // [rsp+60h] [rbp-A0h] BYREF
  char v30; // [rsp+68h] [rbp-98h]
  HSTRING v31; // [rsp+70h] [rbp-90h] BYREF
  char v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v35[4]; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING v36; // [rsp+B0h] [rbp-50h] BYREF
  char v37; // [rsp+B8h] [rbp-48h]
  HSTRING v38; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v39[128]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]
  int v41; // [rsp+178h] [rbp+78h] BYREF
  __int64 v42; // [rsp+180h] [rbp+80h] BYREF

  v41 = a2;
  v36 = 0LL;
  v37 = 0;
  v31 = a3;
  v11 = Windows::Internal::String::Duplicate(&v36, &v31);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_23;
  }
  string = 0LL;
  v28 = 0;
  v31 = a4;
  v13 = Windows::Internal::String::Duplicate(&string, &v31);
  v12 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v13);
LABEL_5:
    Windows::Internal::String::~String(&string);
    goto LABEL_23;
  }
  v29 = 0LL;
  v30 = 0;
  if ( a5 )
  {
    v31 = a5;
    v14 = Windows::Internal::String::Duplicate(&v29, &v31);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x158,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v14);
LABEL_9:
      Windows::Internal::String::~String(&v29);
      goto LABEL_5;
    }
  }
  v31 = 0LL;
  v32 = 0;
  if ( a6 )
  {
    v38 = a6;
    v15 = Windows::Internal::String::Duplicate(&v31, &v38);
    v12 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v15);
LABEL_13:
      Windows::Internal::String::~String(&v31);
      goto LABEL_9;
    }
  }
  v42 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
  StringRawBuffer = (ContentManagement *)WindowsGetStringRawBuffer(string, 0LL);
  EventCacheIfNeeded = ContentManagement::GetEventCacheIfNeeded(StringRawBuffer, (unsigned __int16 *)&v42, v17);
  v12 = EventCacheIfNeeded;
  if ( EventCacheIfNeeded < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)EventCacheIfNeeded);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
    goto LABEL_13;
  }
  v19 = a7;
  v33 = a7;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v33);
  v20 = a1 - 48;
  v34 = a1 - 48;
  Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::InternalAddRef(&v34);
  v21 = lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510__0(
          (__int64)v39,
          a1 - 48,
          &v34,
          (__int64)&v41,
          (__int64)&v36,
          (__int64)&string,
          (__int64)&v29,
          (__int64)&v31,
          &v33,
          &v42);
  v35[0] = 3;
  v35[1] = 130;
  v35[2] = 0;
  v22 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_cdeb3b86346b203bd3e87afbcbd1e510___(v21);
  v25 = Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
          a9,
          (__int64)v35,
          v23,
          v24,
          (void (__fastcall ***)(_QWORD, __int64))v22);
  lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_((__int64)v39);
  if ( v25 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x176,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v25);
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v20);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v42);
  Windows::Internal::String::~String(&v31);
  Windows::Internal::String::~String(&v29);
  Windows::Internal::String::~String(&string);
  v12 = v25;
LABEL_23:
  Windows::Internal::String::~String(&v36);
  return v12;
}
