/*
 * XREFs of ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x1800354E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$ActivateInstance@UIAuthenticationManager@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIAuthenticationManager@WebAuthentication@Security@Internal@1@@Z @ 0x180024480 (--$ActivateInstance@UIAuthenticationManager@WebAuthentication@Security@Internal@Windows@@@Founda.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180028F9C (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@S.c)
 *     ??0?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@1234@Upermission@01234@@Z @ 0x18002AC5C (--0-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$Defaul.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ContentManagement::IdentityManager::GetMSADeviceTicket(
        ContentManagement::IdentityManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rbx
  int ActivationFactory; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING, __int64, __int64 *); // rdi
  int v12; // eax
  int v13; // edi
  void *v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64, _QWORD); // rdi
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rdi
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64 *); // rdi
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, _QWORD, __int64 *); // rdi
  int v30; // eax
  __int64 v31; // rdx
  unsigned __int64 v32; // r9
  int v34; // [rsp+20h] [rbp-59h]
  __int64 v35; // [rsp+30h] [rbp-49h] BYREF
  __int64 v36; // [rsp+38h] [rbp-41h] BYREF
  __int64 v37; // [rsp+40h] [rbp-39h] BYREF
  __int64 v38; // [rsp+48h] [rbp-31h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-29h] BYREF
  __int64 v40; // [rsp+58h] [rbp-21h] BYREF
  __int64 v41; // [rsp+60h] [rbp-19h] BYREF
  int v42; // [rsp+68h] [rbp-11h] BYREF
  __int64 v43; // [rsp+70h] [rbp-9h] BYREF
  __int64 v44; // [rsp+78h] [rbp-1h] BYREF
  void *v45; // [rsp+80h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v47; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *a3 = 0LL;
  v43 = 0LL;
  v47 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Security.WebAuthentication.AuthenticationManager",
    0x42u,
    0x41u);
  v5 = v47;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
  v6 = Windows::Foundation::ActivateInstance<Windows::Internal::Security::WebAuthentication::IAuthenticationManager>(
         v5,
         &v43);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v36 = 0LL;
    v47 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest",
      0x46u,
      0x45u);
    v8 = v47;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
    ActivationFactory = RoGetActivationFactory(v8, &GUID_bebb0a08_9e73_4077_9614_08614c0bc245, &v36);
    v7 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v34);
LABEL_5:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
      goto LABEL_43;
    }
    v37 = 0LL;
    v10 = v36;
    v11 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64 *))(*(_QWORD *)v36 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    v47 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MBI_SSL", 8u, 7u);
    v12 = v11(v10, a2, v47, &v37);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B7,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v12,
        v34);
LABEL_8:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      goto LABEL_5;
    }
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
    v35 = 0LL;
    v13 = 0;
    v44 = 0LL;
    v14 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v45 = v14;
    v15 = 0LL;
    if ( v14 )
    {
      v15 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>((__int64)v14);
      v44 = v15;
      v45 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v45);
    if ( v15 )
    {
      v44 = 0LL;
      v35 = v15;
    }
    else
    {
      v13 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BA,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v13,
        v34);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
      v7 = v13;
      goto LABEL_43;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 104LL))(v35, v37);
    v7 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BB,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v16,
        v34);
LABEL_18:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
      goto LABEL_8;
    }
    v39 = 0LL;
    v38 = 0LL;
    v17 = v43;
    v18 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v43 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
    v19 = v18(v17, (v35 + 16) & -(__int64)(v35 != 0), &v39);
    v7 = v19;
    if ( v19 < 0 )
    {
      v20 = (unsigned int)v19;
      v21 = 448LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v20,
        v34);
LABEL_22:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
      goto LABEL_18;
    }
    v22 = v39;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
    v7 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>>(
           v22,
           v23,
           v24);
    if ( v7 >= 0 )
      v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v22)[8])(
             v22,
             &v38);
    if ( v7 < 0 )
    {
      v20 = (unsigned int)v7;
      v21 = 449LL;
      goto LABEL_21;
    }
    v25 = v38;
    if ( !v38 )
    {
      v7 = -2147023728;
      v20 = 2147943568LL;
      v21 = 450LL;
      goto LABEL_21;
    }
    v41 = 0LL;
    v26 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
    v27 = v26(v25, &v41);
    v7 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C6,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v27,
        v34);
LABEL_31:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
      goto LABEL_22;
    }
    v40 = 0LL;
    v28 = v41;
    v29 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v41 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    v30 = v29(v28, 0LL, &v40);
    v7 = v30;
    if ( v30 >= 0 )
    {
      v42 = 0;
      v30 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v40 + 64LL))(v40, &v42);
      v7 = v30;
      if ( v30 >= 0 )
      {
        v7 = v42;
        if ( v42 < 0 )
        {
          v32 = (unsigned int)v42;
          v31 = 461LL;
          goto LABEL_35;
        }
        v30 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v40 + 48LL))(v40, a3);
        v7 = v30;
        if ( v30 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
          v7 = 0;
          goto LABEL_43;
        }
        v31 = 462LL;
      }
      else
      {
        v31 = 460LL;
      }
    }
    else
    {
      v31 = 457LL;
    }
    v32 = (unsigned int)v30;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v32,
      v34);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AC,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v6,
    v34);
LABEL_43:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
  return (unsigned int)v7;
}
