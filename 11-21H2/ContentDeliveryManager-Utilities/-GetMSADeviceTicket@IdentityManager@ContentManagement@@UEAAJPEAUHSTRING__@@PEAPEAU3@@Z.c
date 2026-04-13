/*
 * XREFs of ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x180036510
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800268F4 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@S.c)
 *     ??0?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@1234@Upermission@01234@@Z @ 0x180027D9C (--0-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$Defaul.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall ContentManagement::IdentityManager::GetMSADeviceTicket(
        ContentManagement::IdentityManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  HRESULT v10; // eax
  int v11; // edx
  unsigned int v12; // r8d
  HSTRING v13; // rbx
  __int64 v14; // rcx
  int ActivationFactory; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HSTRING, HSTRING, __int64 *); // rdi
  HRESULT v20; // eax
  int v21; // edx
  unsigned int v22; // r8d
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rdx
  char v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  HRESULT v41; // edx
  __int64 v42; // r8
  __int64 v43; // rcx
  int (__fastcall ***v44)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int (__fastcall ***v49)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v50; // rcx
  __int64 v51; // rcx
  int (__fastcall ***v52)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  int (__fastcall ***v60)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  int (__fastcall ***v69)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int (__fastcall ***v78)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  int (__fastcall ***v86)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  int v91; // eax
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  int (__fastcall ***v95)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rcx
  int (__fastcall ***v103)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v109; // rcx
  int (__fastcall ***v110)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rcx
  int v115; // [rsp+20h] [rbp-59h]
  __int64 v116; // [rsp+30h] [rbp-49h] BYREF
  __int64 v117; // [rsp+38h] [rbp-41h] BYREF
  __int64 v118; // [rsp+40h] [rbp-39h] BYREF
  __int64 v119; // [rsp+48h] [rbp-31h]
  __int64 v120; // [rsp+50h] [rbp-29h] BYREF
  int (__fastcall ***v121)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-21h] BYREF
  __int64 v122; // [rsp+60h] [rbp-19h] BYREF
  __int64 v123; // [rsp+68h] [rbp-11h] BYREF
  char *v124; // [rsp+70h] [rbp-9h] BYREF
  __int64 v125; // [rsp+78h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+7h] BYREF
  HSTRING string; // [rsp+98h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *a3 = 0LL;
  v116 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.WebAuthentication.AuthenticationManager",
         0x41u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
    goto LABEL_204;
  v116 = 0LL;
  v8 = RoActivateInstance(string, &v125);
  if ( (v8 & 0x80000000) == 0 )
  {
    if ( *(_QWORD *)&GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v116 = v125;
    }
    else
    {
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v125)(
             v125,
             &GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb,
             &v116);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v125 + 16LL))(v125);
    }
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v8,
      v115);
    v9 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v8;
  }
  v117 = 0LL;
  string = 0LL;
  v10 = WindowsCreateStringReference(
          L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest",
          0x45u,
          &hstringHeader,
          &string);
  if ( v10 < 0 )
  {
LABEL_205:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10, v11, v12);
    JUMPOUT(0x180037613LL);
  }
  v13 = string;
  v14 = v117;
  if ( v117 )
  {
    v117 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  ActivationFactory = RoGetActivationFactory(v13, &GUID_bebb0a08_9e73_4077_9614_08614c0bc245, &v117);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v115);
    v16 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v8;
  }
  v118 = 0LL;
  v18 = v117;
  v19 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, __int64 *))(*(_QWORD *)v117 + 48LL);
  string = 0LL;
  v20 = WindowsCreateStringReference(L"MBI_SSL", 7u, &hstringHeader, &string);
  if ( v20 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20, v21, v22);
LABEL_204:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
    goto LABEL_205;
  }
  v23 = v19(v18, a2, string, &v118);
  v8 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B5,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v23,
      v115);
    v24 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    return v8;
  }
  v119 = 0LL;
  v8 = 0;
  v27 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v27
    && (v30 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>(
                (__int64)v27,
                v28,
                v29)) != 0 )
  {
    v119 = v30;
  }
  else
  {
    v8 = -2147024882;
    v30 = v119;
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B8,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v8,
      v115);
    v31 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v33 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    v34 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    return v8;
  }
  v35 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 104LL))(v30, v118);
  v8 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B9,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v35,
      v115);
    v36 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v39 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    }
    return v8;
  }
  v121 = 0LL;
  v120 = 0LL;
  v40 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v116 + 64LL))(
          v116,
          (v119 + 16) & -(__int64)(v119 != 0),
          &v121);
  v8 = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BE,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v40,
      v115);
    v43 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v44)[2])(v44);
    }
    v45 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    v46 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
    v47 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    v48 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    return v8;
  }
  v49 = v121;
  v50 = v120;
  if ( v120 )
  {
    v120 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
  v8 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>>(
         v49,
         v41,
         v42);
  if ( (v8 & 0x80000000) != 0
    || (v8 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v49)[8])(v49, &v120),
        (v8 & 0x80000000) != 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BF,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v8,
      v115);
    v109 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v109 + 16LL))(v109);
    }
    v110 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v110)[2])(v110);
    }
    v111 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 16LL))(v111);
    }
    v112 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v112 + 16LL))(v112);
    }
    v113 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v113 + 16LL))(v113);
    }
    v114 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v114 + 16LL))(v114);
    }
    return v8;
  }
  if ( !v120 )
  {
    v8 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)0x80070490LL,
      v115);
    v51 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    v52 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v52)[2])(v52);
    }
    v53 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v55 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    v56 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
    return v8;
  }
  v122 = 0LL;
  v57 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v120 + 48LL))(v120, &v122);
  v8 = v57;
  if ( v57 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C4,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v57,
      v115);
    v58 = v122;
    if ( v122 )
    {
      v122 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    }
    v59 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    }
    v60 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v60)[2])(v60);
    }
    v61 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    }
    v62 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    }
    v63 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
    }
    v64 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    }
    return v8;
  }
  v123 = 0LL;
  v65 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v122 + 48LL))(v122, 0LL, &v123);
  v8 = v65;
  if ( v65 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C7,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v65,
      v115);
    v66 = v123;
    if ( v123 )
    {
      v123 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    v67 = v122;
    if ( v122 )
    {
      v122 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    }
    v68 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
    }
    v69 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v69)[2])(v69);
    }
    v70 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    }
    v71 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
    }
    v72 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    }
    v73 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
    }
    return v8;
  }
  LODWORD(v124) = 0;
  v74 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v123 + 64LL))(v123, &v124);
  v8 = v74;
  if ( v74 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CA,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v74,
      v115);
    v75 = v123;
    if ( v123 )
    {
      v123 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    }
    v76 = v122;
    if ( v122 )
    {
      v122 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
    }
    v77 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
    }
    v78 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v78)[2])(v78);
    }
    v79 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
    }
    v80 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
    }
    v81 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
    }
    v82 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
    }
    return v8;
  }
  v8 = (unsigned int)v124;
  if ( (int)v124 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CB,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v124,
      v115);
    v83 = v123;
    if ( v123 )
    {
      v123 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
    }
    v84 = v122;
    if ( v122 )
    {
      v122 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
    }
    v85 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
    }
    v86 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v86)[2])(v86);
    }
    v87 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
    }
    v88 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
    }
    v89 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
    }
    v90 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v90 + 16LL))(v90);
    }
    return v8;
  }
  v91 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v123 + 48LL))(v123, a3);
  v8 = v91;
  if ( v91 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CC,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v91,
      v115);
    v92 = v123;
    if ( v123 )
    {
      v123 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
    }
    v93 = v122;
    if ( v122 )
    {
      v122 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
    }
    v94 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
    }
    v95 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v95)[2])(v95);
    }
    v96 = v119;
    if ( v119 )
    {
      v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
    }
    v97 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 16LL))(v97);
    }
    v98 = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 16LL))(v98);
    }
    v99 = v116;
    if ( v116 )
    {
      v116 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 16LL))(v99);
    }
    return v8;
  }
  v100 = v123;
  if ( v123 )
  {
    v123 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 16LL))(v100);
  }
  v101 = v122;
  if ( v122 )
  {
    v122 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
  }
  v102 = v120;
  if ( v120 )
  {
    v120 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
  }
  v103 = v121;
  if ( v121 )
  {
    v121 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v103)[2])(v103);
  }
  v104 = v119;
  if ( v119 )
  {
    v119 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
  }
  v105 = v118;
  if ( v118 )
  {
    v118 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
  }
  v106 = v117;
  if ( v117 )
  {
    v117 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 16LL))(v106);
  }
  v107 = v116;
  if ( v116 )
  {
    v116 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
  }
  return 0LL;
}
