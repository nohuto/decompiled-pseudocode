/*
 * XREFs of ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x18005DFC4
 * Callers:
 *     ?GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18005F590 (-GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PE.c)
 *     ?SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@Z @ 0x180064A90 (-SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(
        RTL_SRWLOCK *this,
        HSTRING a2,
        struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **a3)
{
  PVOID v6; // rdi
  RTL_SRWLOCK *v7; // rsi
  RTL_SRWLOCK *v8; // r14
  PVOID Ptr; // rbx
  HRESULT v10; // eax
  HSTRING v11; // rbx
  PVOID v12; // rcx
  int ActivationFactory; // eax
  unsigned int v14; // ebx
  PVOID v16; // rbx
  __int64 v17; // rcx
  PVOID v18; // rbx
  HRESULT v19; // eax
  HSTRING v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  PVOID v27; // rcx
  __int64 v28; // rcx
  PVOID v29; // rbx
  void *v30; // rbx
  PVOID v31; // rcx
  PVOID v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, HSTRING *); // rsi
  int v36; // eax
  PVOID v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  __int64 (__fastcall ***v40)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **); // rcx
  PVOID v41; // rcx
  __int64 v42; // rcx
  int v43; // eax
  __int64 (__fastcall ***v44)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **); // rcx
  PVOID v45; // rcx
  __int64 v46; // rcx
  __int64 (__fastcall ***v47)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **); // rcx
  PVOID v48; // rcx
  __int64 v49; // rcx
  PVOID v50; // [rsp+30h] [rbp-39h] BYREF
  __int64 v51; // [rsp+38h] [rbp-31h] BYREF
  HSTRING v52; // [rsp+40h] [rbp-29h] BYREF
  __int64 v53; // [rsp+48h] [rbp-21h] BYREF
  __int64 (__fastcall ***v54)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **); // [rsp+50h] [rbp-19h] BYREF
  PVOID v55; // [rsp+58h] [rbp-11h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-9h] BYREF
  HSTRING string; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a3 = 0LL;
  v6 = 0LL;
  v55 = 0LL;
  v7 = this + 15;
  AcquireSRWLockShared(this + 15);
  v8 = this + 19;
  Ptr = this[19].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(this[19].Ptr);
    v6 = Ptr;
    v55 = Ptr;
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( !v6 )
  {
    AcquireSRWLockExclusive(v7);
    if ( !v8->Ptr )
    {
      string = 0LL;
      v10 = WindowsCreateStringReference(
              L"WindowsInternal.Shell.UnifiedTile.PackagedUnifiedTileIdentifier",
              0x3Fu,
              &hstringHeader,
              &string);
      if ( v10 < 0 )
      {
LABEL_86:
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
        JUMPOUT(0x18005E8F3LL);
      }
      v11 = string;
      v12 = v8->Ptr;
      if ( v8->Ptr )
      {
        v8->Ptr = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ActivationFactory = RoGetActivationFactory(v11, &GUID_ec3e7864_aaab_4367_9c63_94d289545500, &this[19]);
      v14 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A3,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)ActivationFactory);
        if ( v7 )
          ReleaseSRWLockExclusive(v7);
        return v14;
      }
    }
    v16 = v8->Ptr;
    if ( v8->Ptr )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v16 + 8LL))(v8->Ptr);
      v6 = v16;
      v55 = v16;
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
  }
  v51 = 0LL;
  v14 = (*(__int64 (__fastcall **)(PVOID, HSTRING, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, a2, &v51);
  if ( (v14 & 0x80000000) != 0 )
  {
    v17 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
LABEL_21:
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
    return v14;
  }
  v50 = 0LL;
  AcquireSRWLockShared(v7);
  v18 = this[20].Ptr;
  if ( v18 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v18 + 8LL))(this[20].Ptr);
    v50 = v18;
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( v50 )
    goto LABEL_56;
  v53 = 0LL;
  string = 0LL;
  v19 = WindowsCreateStringReference(
          L"WindowsInternal.Shell.CDSProperties.CDSTilePropertiesBatched",
          0x3Cu,
          &hstringHeader,
          &string);
  if ( v19 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
    goto LABEL_86;
  }
  v20 = string;
  v21 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = RoGetActivationFactory(v20, &GUID_3055f2cd_a89f_43f3_be60_867e2644b283, &v53);
  v14 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v22);
    v23 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    goto LABEL_21;
  }
  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, PVOID *))(*(_QWORD *)v53 + 48LL))(v53, 0LL, 1LL, &v50);
  v14 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v25);
    v26 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
LABEL_77:
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
    return v14;
  }
  AcquireSRWLockExclusive(v7);
  v29 = this[20].Ptr;
  if ( v29 )
  {
    if ( v50 != v29 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v29 + 8LL))(this[20].Ptr);
      v32 = v50;
      v50 = v29;
      if ( v32 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v32 + 16LL))(v32);
    }
  }
  else
  {
    v30 = v50;
    if ( v50 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v50 + 8LL))(v50);
      v31 = this[20].Ptr;
      this[20].Ptr = v30;
      if ( v31 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v33 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
LABEL_56:
  v52 = 0LL;
  v34 = v51;
  v35 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v51 + 56LL);
  WindowsDeleteString(0LL);
  v52 = 0LL;
  v36 = v35(v34, &v52);
  v14 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v36);
    WindowsDeleteString(v52);
    v52 = 0LL;
    v37 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    goto LABEL_77;
  }
  v54 = 0LL;
  v39 = (*(__int64 (__fastcall **)(PVOID, HSTRING, _QWORD))(*(_QWORD *)v50 + 88LL))(v50, v52, &v54);
  v14 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v39);
    v40 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **)))(*v40)[2])(v40);
    }
    WindowsDeleteString(v52);
    v52 = 0LL;
    v41 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v41 + 16LL))(v41);
    }
    v42 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    goto LABEL_77;
  }
  v43 = (**v54)(v54, &GUID_f2456d27_5e13_42b8_bc25_00b4cc364e44, a3);
  v14 = v43;
  if ( v43 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v43);
    v44 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **)))(*v44)[2])(v44);
    }
    WindowsDeleteString(v52);
    v52 = 0LL;
    v45 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v45 + 16LL))(v45);
    }
    v46 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
    goto LABEL_77;
  }
  v47 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties **)))(*v47)[2])(v47);
  }
  WindowsDeleteString(v52);
  v52 = 0LL;
  v48 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v48 + 16LL))(v48);
  }
  v49 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
