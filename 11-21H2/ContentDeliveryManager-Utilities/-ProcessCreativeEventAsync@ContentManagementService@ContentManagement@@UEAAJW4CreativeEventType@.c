/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x1800620C0
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x1800625A0 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_cdeb3b86346b203bd3e87afbcbd1e510___ @ 0x180052F50 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_-.c)
 *     _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x180055028 (_lambda_cdeb3b86346b203bd3e87afbcbd1e510_--_lambda_cdeb3b86346b203bd3e87afbcbd1e510_.c)
 *     _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x1800568C8 (_lambda_cdeb3b86346b203bd3e87afbcbd1e510_--__lambda_cdeb3b86346b203bd3e87afbcbd1e510_.c)
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18005D92C (-GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  HRESULT v11; // eax
  unsigned int v12; // ebx
  HSTRING v13; // rbx
  HRESULT v14; // eax
  unsigned int v15; // edi
  HSTRING v16; // rdi
  HSTRING v17; // rsi
  HRESULT v18; // eax
  unsigned int v19; // esi
  HSTRING v20; // r14
  HRESULT v21; // eax
  unsigned int v22; // r14d
  ContentManagement *StringRawBuffer; // rax
  struct ContentManagement::ICreativeEventReportedCache **v24; // r8
  int EventCacheIfNeeded; // eax
  unsigned int v26; // r15d
  __int64 v27; // rcx
  HSTRING v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // r10
  volatile signed __int64 *v32; // rbx
  signed __int64 v33; // rcx
  bool v34; // zf
  signed __int64 v35; // rax
  signed __int32 v36; // eax
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  HSTRING v40; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h]
  volatile signed __int64 *v42; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h]
  HSTRING v45; // [rsp+80h] [rbp-88h] BYREF
  char v46; // [rsp+88h] [rbp-80h]
  HSTRING v47; // [rsp+90h] [rbp-78h] BYREF
  char v48; // [rsp+98h] [rbp-70h]
  int v49[2]; // [rsp+A0h] [rbp-68h] BYREF
  char v50; // [rsp+A8h] [rbp-60h]
  HSTRING newString; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING v52; // [rsp+B8h] [rbp-50h] BYREF
  HSTRING v53; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v55[13]; // [rsp+D0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]
  int v57; // [rsp+170h] [rbp+68h] BYREF
  __int64 v58; // [rsp+178h] [rbp+70h] BYREF

  v57 = a2;
  *(_QWORD *)v49 = 0LL;
  v50 = 0;
  v11 = WindowsDuplicateString(a3, &newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  v13 = newString;
  *(_QWORD *)v49 = newString;
  WindowsDeleteString(0LL);
  v47 = 0LL;
  v48 = 0;
  v14 = WindowsDuplicateString(a4, &v52);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v14);
    if ( v13 )
      WindowsDeleteString(v13);
    return v15;
  }
  else
  {
    v16 = v52;
    v47 = v52;
    WindowsDeleteString(0LL);
    v17 = 0LL;
    v45 = 0LL;
    v46 = 0;
    if ( string )
    {
      v18 = WindowsDuplicateString(string, &v53);
      v19 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x158,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v18);
        if ( v16 )
          WindowsDeleteString(v16);
        if ( !v13 )
          return v19;
        v29 = v13;
        goto LABEL_25;
      }
      v17 = v53;
      v45 = v53;
      WindowsDeleteString(0LL);
    }
    v20 = 0LL;
    v43 = 0LL;
    LOBYTE(v44) = 0;
    if ( !a6 )
    {
LABEL_9:
      v58 = 0LL;
      StringRawBuffer = (ContentManagement *)WindowsGetStringRawBuffer(v16, 0LL);
      EventCacheIfNeeded = ContentManagement::GetEventCacheIfNeeded(
                             StringRawBuffer,
                             (const unsigned __int16 *)&v58,
                             v24);
      v26 = EventCacheIfNeeded;
      if ( EventCacheIfNeeded < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x162,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)EventCacheIfNeeded);
        v27 = v58;
        if ( v58 )
        {
          v58 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        if ( v20 )
          WindowsDeleteString(v20);
        if ( v17 )
          WindowsDeleteString(v17);
        if ( v16 )
          WindowsDeleteString(v16);
        if ( v13 )
          WindowsDeleteString(v13);
        return v26;
      }
      v30 = a7;
      v54 = a7;
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
      v31 = a1 - 48;
      v32 = (volatile signed __int64 *)(a1 - 48);
      v42 = (volatile signed __int64 *)(a1 - 48);
      if ( a1 != 48 )
      {
        v33 = *(_QWORD *)(v31 + 112);
        while ( v33 >= 0 )
        {
          if ( (_DWORD)v33 != 0x7FFFFFFF )
          {
            v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 112), v33 + 1, v33);
            v34 = v33 == v35;
            v33 = v35;
            if ( !v34 )
              continue;
          }
          goto LABEL_44;
        }
        do
          v36 = *(_DWORD *)(2 * v33 + 0x10);
        while ( v36 != 0x7FFFFFFF
             && v36 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v33 + 16), v36 + 1, v36) );
LABEL_44:
        v32 = v42;
      }
      v37 = lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510_(
              (__int64)v55,
              a1 - 48,
              (__int64 *)&v42,
              &v57,
              (__int64)v49,
              (__int64)&v47,
              (__int64)&v45,
              (__int64)&v43,
              &v54,
              &v58);
      v40 = (HSTRING)0x8200000003LL;
      LODWORD(v41) = 0;
      v19 = Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_cdeb3b86346b203bd3e87afbcbd1e510___(
              (__int64)&v40,
              a9,
              v38,
              v37);
      lambda_cdeb3b86346b203bd3e87afbcbd1e510_::__lambda_cdeb3b86346b203bd3e87afbcbd1e510_(v55);
      if ( (v19 & 0x80000000) != 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x176,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)v19);
      if ( v32 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v32);
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      v39 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
      if ( v43 )
        WindowsDeleteString(v43);
      if ( v45 )
        WindowsDeleteString(v45);
      if ( v47 )
        WindowsDeleteString(v47);
      v29 = *(HSTRING *)v49;
      if ( !*(_QWORD *)v49 )
        return v19;
LABEL_25:
      WindowsDeleteString(v29);
      return v19;
    }
    v21 = WindowsDuplicateString(a6, &v40);
    v22 = v21;
    if ( v21 >= 0 )
    {
      v20 = v40;
      v43 = v40;
      WindowsDeleteString(0LL);
      goto LABEL_9;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v21);
    if ( v17 )
      WindowsDeleteString(v17);
    if ( v16 )
      WindowsDeleteString(v16);
    if ( v13 )
      WindowsDeleteString(v13);
    return v22;
  }
}
