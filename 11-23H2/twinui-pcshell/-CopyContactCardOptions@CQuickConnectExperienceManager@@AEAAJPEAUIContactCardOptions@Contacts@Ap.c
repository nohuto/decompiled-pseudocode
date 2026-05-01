/*
 * XREFs of ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x18044CB64
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18044C80C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x18044F1B0 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIContactCardOptions@Contacts@ApplicationModel@1@@Z @ 0x18044A7EC (--$ActivateInstance@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@Foundation@Windows@.c)
 *     ??$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18044A898 (--$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@-$ComPtr@UIContactCardOptions@Co.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CQuickConnectExperienceManager::CopyContactCardOptions(
        CQuickConnectExperienceManager *this,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions *a2,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions **a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v21; // [rsp+20h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-21h] BYREF
  __int64 v23; // [rsp+30h] [rbp-19h] BYREF
  __int64 v24; // [rsp+38h] [rbp-11h] BYREF
  __int64 v25; // [rsp+40h] [rbp-9h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-1h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp+3h] BYREF
  __int64 v28; // [rsp+50h] [rbp+7h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+60h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v32; // [rsp+80h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( !a2 )
  {
    v19 = 336LL;
    goto LABEL_45;
  }
  if ( !a3 )
  {
    v19 = 337LL;
LABEL_45:
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80070057LL);
    return v7;
  }
  *a3 = 0LL;
  v21 = 0LL;
  v32 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Contacts.ContactCardOptions",
    0x35u,
    0x34u);
  v5 = v32;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  v6 = Windows::Foundation::ActivateInstance<Windows::ApplicationModel::Contacts::IContactCardOptions>(v5, &v21);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v29 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
           a2,
           &v26);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 350LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_34:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
      goto LABEL_35;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, _QWORD))(*(_QWORD *)v21 + 56LL))(
           v21,
           v26);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 351LL;
      goto LABEL_13;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, unsigned int *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &v27);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 354LL;
      goto LABEL_13;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, _QWORD))(*(_QWORD *)v21 + 72LL))(
           v21,
           v27);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 355LL;
      goto LABEL_13;
    }
    v28 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
                &v29,
                &v28) >= 0 )
    {
      v25 = 0LL;
      v10 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v21,
              &v25);
      v7 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16A,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
LABEL_42:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
        goto LABEL_33;
      }
      v23 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, &v23);
      v7 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
LABEL_40:
        v18 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_42;
      }
      v24 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, &v24);
      v7 = v12;
      if ( v12 < 0 )
      {
        v13 = 368LL;
        goto LABEL_38;
      }
      v22 = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 56LL))(v23, &v22);
      v7 = v12;
      if ( v12 < 0 )
      {
        v13 = 371LL;
LABEL_38:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
        v17 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        goto LABEL_40;
      }
      v14 = 0;
      if ( v22 )
      {
        while ( 1 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 48LL))(v23, v14, &v30);
          v7 = v12;
          if ( v12 < 0 )
            break;
          v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 104LL))(v24, v30);
          v7 = v12;
          if ( v12 < 0 )
          {
            v13 = 377LL;
            goto LABEL_38;
          }
          if ( ++v14 >= v22 )
            goto LABEL_27;
        }
        v13 = 376LL;
        goto LABEL_38;
      }
LABEL_27:
      v15 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    *a3 = v21;
    v7 = 0;
LABEL_33:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x159,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_35:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  return v7;
}
