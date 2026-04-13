/*
 * XREFs of ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x1800313DC
 * Callers:
 *     ?put_ContextualSuggestionsEnabled@ContextualSuggestionsManager@ContentManagement@@UEAAJE@Z @ 0x180044ED0 (-put_ContextualSuggestionsEnabled@ContextualSuggestionsManager@ContentManagement@@UEAAJE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$ActivateInstance@UIProcessContextualSuggestionsEvent@ContentManagement@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIProcessContextualSuggestionsEvent@ContentManagement@@@Z @ 0x180024730 (--$ActivateInstance@UIProcessContextualSuggestionsEvent@ContentManagement@@@Foundation@Windows@@.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18002933C (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::EnableContextualSuggestions(ContentManagement *this)
{
  char v1; // si
  HSTRING v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD); // rdi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rdx
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  HSTRING string; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v1 = (char)this;
  v14 = 0LL;
  if ( WindowsCreateStringReference(L"ContentManagement.ContentManagementService", 0x2Au, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v2 = string;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v3 = Windows::Foundation::ActivateInstance<ContentManagement::IProcessContextualSuggestionsEvent>((__int64)v2, &v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v13 = 0LL;
    v5 = v14;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    LOBYTE(v7) = v1;
    v8 = v6(v5, v7, &v13);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v8 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
             v13,
             v9,
             v10);
      v4 = v8;
      if ( v8 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
        v4 = 0;
        goto LABEL_11;
      }
      v11 = 104LL;
    }
    else
    {
      v11 = 103LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8,
      (int)v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3,
      (int)v13);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v4;
}
