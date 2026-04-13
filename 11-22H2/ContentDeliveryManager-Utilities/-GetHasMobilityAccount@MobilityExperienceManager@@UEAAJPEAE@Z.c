/*
 * XREFs of ?GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800C1530
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180028DCC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002C744 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1800C2028 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVWebAccount@Credentials@Security@Window.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall MobilityExperienceManager::GetHasMobilityAccount(
        MobilityExperienceManager *this,
        unsigned __int8 *a2)
{
  int ActivationFactory; // eax
  int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  int v7; // edx
  __int64 v8; // r8
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  int v11; // ebx
  int v12; // r14d
  __int64 v13; // rax
  int v14; // eax
  int v15; // edi
  __int64 v16; // rax
  int v17; // eax
  HRESULT v18; // eax
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-49h] BYREF
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 **); // [rsp+30h] [rbp-41h] BYREF
  INT32 result; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-31h] BYREF
  __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v25; // [rsp+50h] [rbp-21h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-19h] BYREF
  __int64 v27; // [rsp+60h] [rbp-11h] BYREF
  int v28; // [rsp+68h] [rbp-9h] BYREF
  int *v29; // [rsp+70h] [rbp-1h]
  int v30; // [rsp+78h] [rbp+7h] BYREF
  __int64 *v31; // [rsp+80h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+17h] BYREF
  HSTRING string2; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  *a2 = 0;
  v26 = 0LL;
  string2 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
    0x41u,
    0x40u);
  ActivationFactory = RoGetActivationFactory(string2, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, &v26);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_22;
  }
  v20 = 0LL;
  v5 = *v26;
  v20 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v5 + 96))(v26, &v20);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v6);
LABEL_5:
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v20);
    goto LABEL_22;
  }
  v24 = 0LL;
  v9 = v20;
  v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(
         v20,
         v7,
         v8);
  if ( v4 >= 0 )
    v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v9)[8])(v9, &v24);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v4);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v24);
    goto LABEL_5;
  }
  v27 = v24;
  v29 = &v30;
  v30 = 0;
  v31 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 56LL))(v24, &v28);
  *v29 = v10;
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::get_at_current(
    &v27,
    0LL);
  v11 = 0;
  v12 = v28;
  while ( 1 )
  {
    if ( *v29 < 0 || v11 == v12 )
      goto LABEL_21;
    v21 = 0LL;
    v13 = *v31;
    v21 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, int (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v13 + 48))(
            v31,
            &v21);
    v15 = v14;
    if ( v14 < 0 )
      break;
    v25 = 0LL;
    if ( (**v21)(v21, &GUID_4a01eb05_4e42_41d4_b518_e008a5163614, &v25) >= 0 )
    {
      string1 = 0LL;
      v16 = *v25;
      string1 = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v16 + 56))(v25, &string1);
      v15 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x90,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
          (const char *)(unsigned int)v17);
        goto LABEL_25;
      }
      result = 0;
      string2 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"consumers", 0xAu, 9u);
      v18 = WindowsCompareStringOrdinal(string1, string2, &result);
      v15 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x93,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
          (const char *)(unsigned int)v18);
        string2 = 0LL;
LABEL_25:
        Windows::Internal::String::~String(&string1);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v25);
        goto LABEL_27;
      }
      string2 = 0LL;
      if ( !result )
      {
        *a2 = 1;
        Windows::Internal::String::~String(&string1);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v25);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v21);
LABEL_21:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v24);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v20);
        v4 = 0;
        goto LABEL_22;
      }
      Windows::Internal::String::~String(&string1);
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v25);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v21);
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::get_at_current(
      &v27,
      (unsigned int)++v11);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8B,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
    (const char *)(unsigned int)v14);
LABEL_27:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v24);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v20);
  v4 = v15;
LABEL_22:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v26);
  return (unsigned int)v4;
}
