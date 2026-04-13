/*
 * XREFs of ?GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800D7610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800265C8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1800D7F5C (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVWebAccount@Credentials@Security@Window.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall MobilityExperienceManager::GetHasMobilityAccount(
        MobilityExperienceManager *this,
        unsigned __int8 *a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  HRESULT v8; // edx
  __int64 v9; // r8
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // eax
  int v12; // edi
  int v13; // r14d
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  HRESULT v18; // eax
  HRESULT v19; // eax
  _QWORD *v20; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rcx
  int (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-49h] BYREF
  __int64 *v26; // [rsp+30h] [rbp-41h] BYREF
  __int64 v27; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-31h] BYREF
  __int64 v29; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v30; // [rsp+50h] [rbp-21h] BYREF
  INT32 result; // [rsp+58h] [rbp-19h] BYREF
  __int64 v32; // [rsp+60h] [rbp-11h] BYREF
  int v33; // [rsp+68h] [rbp-9h] BYREF
  int *v34; // [rsp+70h] [rbp-1h]
  int v35; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v36; // [rsp+80h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+17h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  *a2 = 0;
  v26 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
         0x40u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
LABEL_94:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    JUMPOUT(0x1800D7DC6LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, &v26);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)ActivationFactory);
    if ( v26 )
      (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
    return v5;
  }
  v25 = 0LL;
  v6 = *v26;
  v25 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v6 + 96))(v26, &v25);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v7);
    if ( v25 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
    return v5;
  }
  v29 = 0LL;
  v10 = v25;
  v5 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(
         v25,
         v8,
         v9);
  if ( (v5 & 0x80000000) != 0
    || (v5 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v10)[8])(v10, &v29),
        (v5 & 0x80000000) != 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)v5);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v25 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
    return v5;
  }
  v32 = v29;
  v34 = &v35;
  v35 = 0;
  v36 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 56LL))(v29, &v33);
  *v34 = v11;
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::get_at_current(
    &v32,
    0LL);
  v12 = 0;
  v13 = v33;
  while ( 1 )
  {
    if ( *v34 < 0 || v12 == v13 )
      goto LABEL_36;
    v27 = 0LL;
    v14 = *v36;
    v27 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v14 + 48))(v36, &v27);
    v5 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v15);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v24 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
      }
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      if ( v25 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
      if ( v26 )
        (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
      return v5;
    }
    v30 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 **))v27)(
           v27,
           &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
           &v30) >= 0 )
      break;
LABEL_25:
    if ( v30 )
      (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::get_at_current(
      &v32,
      (unsigned int)++v12);
  }
  string1 = 0LL;
  v16 = *v30;
  string1 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v16 + 56))(v30, &string1);
  v5 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v17);
    if ( string1 )
      WindowsDeleteString(string1);
    if ( v30 )
      (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v23 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
    }
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v25 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
    return v5;
  }
  result = 0;
  string = 0LL;
  v18 = WindowsCreateStringReference(L"consumers", 9u, &hstringHeader, &string);
  if ( v18 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
    goto LABEL_94;
  }
  v19 = WindowsCompareStringOrdinal(string1, string, &result);
  v5 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v19);
    string = 0LL;
    if ( string1 )
      WindowsDeleteString(string1);
    if ( v30 )
      (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v22 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
    }
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v25 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
    return v5;
  }
  string = 0LL;
  if ( result )
  {
    if ( string1 )
      WindowsDeleteString(string1);
    goto LABEL_25;
  }
  *a2 = 1;
  if ( string1 )
    WindowsDeleteString(string1);
  if ( v30 )
    (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
LABEL_36:
  v20 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
  }
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v25 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v25)[2])(v25);
  if ( v26 )
    (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
  return 0LL;
}
