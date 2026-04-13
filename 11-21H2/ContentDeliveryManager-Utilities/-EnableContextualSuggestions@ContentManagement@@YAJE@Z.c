/*
 * XREFs of ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x180031ECC
 * Callers:
 *     ?put_ContextualSuggestionsEnabled@ContextualSuggestionsManager@ContentManagement@@UEAAJE@Z @ 0x18004AC80 (-put_ContextualSuggestionsEnabled@ContextualSuggestionsManager@ContentManagement@@UEAAJE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180026F4C (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContentManagement::EnableContextualSuggestions(ContentManagement *this)
{
  char v1; // di
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v7; // eax
  signed int v8; // edx
  char *v9; // r8
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v11; // rcx
  int v12; // eax
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v14; // rcx
  int (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+38h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v1 = (char)this;
  v17 = 0LL;
  if ( WindowsCreateStringReference(L"ContentManagement.ContentManagementService", 0x2Au, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v17 = 0LL;
  v3 = RoActivateInstance(string, &v19);
  if ( v3 >= 0 )
  {
    if ( *(_QWORD *)&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v4 = v19;
      v17 = v19;
      goto LABEL_9;
    }
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v19)(
           v19,
           &GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4,
           &v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v4 = v17;
LABEL_9:
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3,
      v17);
    v5 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return (unsigned int)v3;
  }
  v18 = 0LL;
  LOBYTE(v2) = v1;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 48LL))(v4, v2, &v18);
  v3 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7,
      v17);
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[2])(v10);
    }
    v11 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return (unsigned int)v3;
  }
  v12 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
          v18,
          v8,
          v9);
  v3 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v12,
      v17);
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v13)[2])(v13);
    }
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return (unsigned int)v3;
  }
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v15)[2])(v15);
  }
  v16 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0LL;
}
