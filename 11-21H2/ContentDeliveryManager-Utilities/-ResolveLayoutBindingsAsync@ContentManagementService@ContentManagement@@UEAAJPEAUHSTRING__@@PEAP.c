/*
 * XREFs of ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x180063680
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2___ @ 0x180053084 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymou_ea_180053084.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::ResolveLayoutBindingsAsync(
        ContentManagement::ContentManagementService *this,
        HSTRING a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  volatile signed __int64 *v7; // rbx
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  signed __int32 v11; // eax
  signed __int64 v12; // rcx
  signed __int64 v13; // rax
  signed __int32 v14; // eax
  int v15; // edi
  _DWORD v17[4]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING v18; // [rsp+30h] [rbp-30h]
  char v19; // [rsp+38h] [rbp-28h]
  volatile signed __int64 *v20; // [rsp+40h] [rbp-20h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h]
  char v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  HSTRING newString; // [rsp+98h] [rbp+38h] BYREF

  v18 = 0LL;
  v19 = 0;
  v5 = WindowsDuplicateString(a2, &newString);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x255,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    v18 = newString;
    WindowsDeleteString(0LL);
    v7 = (volatile signed __int64 *)((char *)this - 80);
    if ( this != (ContentManagement::ContentManagementService *)80 )
    {
      v8 = *((_QWORD *)v7 + 14);
      while ( v8 >= 0 )
      {
        if ( (_DWORD)v8 != 0x7FFFFFFF )
        {
          v10 = _InterlockedCompareExchange64(v7 + 14, v8 + 1, v8);
          v9 = v8 == v10;
          v8 = v10;
          if ( !v9 )
            continue;
        }
        goto LABEL_10;
      }
      do
        v11 = *(_DWORD *)(2 * v8 + 0x10);
      while ( v11 != 0x7FFFFFFF
           && v11 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v8 + 16), v11 + 1, v11) );
LABEL_10:
      v7 = (volatile signed __int64 *)((char *)this - 80);
    }
    v20 = v7;
    if ( v7 )
    {
      v12 = *((_QWORD *)v7 + 14);
      while ( v12 >= 0 )
      {
        if ( (_DWORD)v12 != 0x7FFFFFFF )
        {
          v13 = _InterlockedCompareExchange64(v7 + 14, v12 + 1, v12);
          v9 = v12 == v13;
          v12 = v13;
          if ( !v9 )
            continue;
        }
        goto LABEL_19;
      }
      do
        v14 = *(_DWORD *)(2 * v12 + 0x10);
      while ( v14 != 0x7FFFFFFF
           && v14 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v12 + 16), v14 + 1, v14) );
LABEL_19:
      v7 = (volatile signed __int64 *)((char *)this - 80);
    }
    string = v18;
    v18 = 0LL;
    v22 = 0;
    v19 = 1;
    v17[0] = 3;
    v17[1] = 128;
    v17[2] = 0;
    v15 = Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ResolveLayoutBindingsOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2___(
            (__int64)v17,
            a3,
            0x7FFFFFFFLL,
            &v20);
    if ( string )
      WindowsDeleteString(string);
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v20);
    if ( v15 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x260,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v15);
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v7);
    return (unsigned int)v15;
  }
}
