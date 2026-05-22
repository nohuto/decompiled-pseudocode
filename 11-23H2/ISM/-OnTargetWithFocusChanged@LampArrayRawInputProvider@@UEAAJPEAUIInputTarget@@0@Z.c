/*
 * XREFs of ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800106E0
 * Callers:
 *     <none>
 * Callees:
 *     ??9Iterator@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEBA_NAEBV01@@Z @ 0x180010ACC (--9Iterator@-$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEBA_NAEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001AE74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001AF80 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ??1?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18005BAF0 (--1-$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800E97DC (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayRawInputProvider::OnTargetWithFocusChanged(
        LampArrayRawInputProvider *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  struct IInputTarget *v3; // r9
  int v5; // ebx
  __int64 v6; // rdx
  struct LampArrayEndpoint *v8; // rsi
  _QWORD *v9; // r8
  _QWORD *v10; // r9
  __int32 v11; // r10d
  __int64 v12; // rdx
  _QWORD *v13; // r8
  _QWORD *v14; // r9
  __int32 v15; // r10d
  _QWORD *v16; // rbx
  LampArrayRawInputProvider *v17; // r14
  _QWORD *v18; // r9
  int active; // eax
  unsigned int v20; // edi
  _QWORD *v21; // rbx
  LampArrayRawInputProvider *v22; // r14
  _QWORD *v23; // r9
  int v24; // eax
  unsigned int v25; // edi
  ULONG UserDataCount; // [rsp+20h] [rbp-79h]
  _QWORD *v27; // [rsp+30h] [rbp-69h] BYREF
  __int32 v28; // [rsp+38h] [rbp-61h] BYREF
  char *v29; // [rsp+40h] [rbp-59h] BYREF
  __int64 v30; // [rsp+48h] [rbp-51h] BYREF
  __int32 v31; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v32[3]; // [rsp+54h] [rbp-45h] BYREF
  char v33[8]; // [rsp+60h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-19h] BYREF
  void *v36; // [rsp+90h] [rbp-9h]
  int v37; // [rsp+98h] [rbp-1h]
  int v38; // [rsp+9Ch] [rbp+3h]
  const char *v39; // [rsp+A0h] [rbp+7h]
  __int64 v40; // [rsp+A8h] [rbp+Fh]
  _DWORD *v41; // [rsp+B0h] [rbp+17h]
  __int64 v42; // [rsp+B8h] [rbp+1Fh]
  __int32 *v43; // [rsp+C0h] [rbp+27h]
  __int64 v44; // [rsp+C8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v3 = a3;
  v28 = 0;
  if ( a3 )
  {
    v30 = 0LL;
    v5 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v30);
    if ( v5 < 0 )
    {
      v6 = 384LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v5,
        UserDataCount);
      Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(&v30);
      return (unsigned int)v5;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int32 *))(*(_QWORD *)v30 + 32LL))(v30, &v28);
    if ( v5 < 0 )
    {
      v6 = 386LL;
      goto LABEL_4;
    }
    Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(&v30);
  }
  v8 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl,
                          a2,
                          a3,
                          v3) )
  {
    wil::srwlock::lock_exclusive((char *)this + 128, v33);
    v27 = (_QWORD *)*((_QWORD *)this + 10);
    v29 = (char *)this + 80;
    if ( (unsigned __int8)NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v27, &v29) )
    {
      v10 = v9;
      v11 = v28;
      while ( *((_DWORD *)v10 + 6) != v11 )
      {
        v27 = (_QWORD *)*v9;
        if ( !(unsigned __int8)NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(
                                 &v27,
                                 &v29) )
          goto LABEL_15;
      }
      v8 = (struct LampArrayEndpoint *)(v10 + 2);
    }
LABEL_15:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v33);
    goto LABEL_16;
  }
  v27 = (_QWORD *)*((_QWORD *)this + 10);
  v29 = (char *)this + 80;
  if ( !(unsigned __int8)NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v27, &v29) )
  {
LABEL_16:
    v15 = v28;
    goto LABEL_17;
  }
  v14 = v13;
  v15 = v28;
  while ( *((_DWORD *)v14 + 6) != v15 )
  {
    v27 = (_QWORD *)*v13;
    if ( !(unsigned __int8)NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v27, &v29) )
      goto LABEL_17;
  }
  v8 = (struct LampArrayEndpoint *)(v14 + 2);
LABEL_17:
  if ( (unsigned int)dword_180266498 > 5 )
  {
    v31 = v15;
    v32[0] = *((_DWORD *)this + 12);
    v43 = &v31;
    v44 = 4LL;
    v41 = v32;
    v42 = 4LL;
    v39 = "FocusChanged";
    v40 = 13LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_1802664A0;
    UserData.Size = *(unsigned __int16 *)off_1802664A0;
    UserData.Reserved = 2;
    v36 = &unk_1802242DA;
    v37 = 91;
    v38 = 1;
    v32[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    v15 = v28;
  }
  _InterlockedExchange((volatile __int32 *)this + 12, v15);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl,
                          v12,
                          v13,
                          v14) )
  {
    wil::srwlock::lock_exclusive((char *)this + 144, &v30);
    v16 = (_QWORD *)*((_QWORD *)this + 7);
    v27 = v16;
    v29 = (char *)this + 56;
    if ( (unsigned __int8)NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v27, &v29) )
    {
      v17 = (LampArrayRawInputProvider *)((char *)this - 16);
      v18 = v16;
      while ( 1 )
      {
        active = LampArrayRawInputProvider::SetActiveViewClient(v17, (struct LampArrayDevice *)v18[2], v8);
        v20 = active;
        if ( active < 0 )
          break;
        v16 = (_QWORD *)*v16;
        v27 = v16;
        if ( !(unsigned __int8)NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(
                                 &v27,
                                 &v29) )
          goto LABEL_24;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)active,
        UserDataCount);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v30);
      return v20;
    }
LABEL_24:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v30);
    return 0LL;
  }
  v21 = (_QWORD *)*((_QWORD *)this + 7);
  v27 = v21;
  v29 = (char *)this + 56;
  if ( !(unsigned __int8)NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v27, &v29) )
    return 0LL;
  v22 = (LampArrayRawInputProvider *)((char *)this - 16);
  v23 = v21;
  while ( 1 )
  {
    v24 = LampArrayRawInputProvider::SetActiveViewClient(v22, (struct LampArrayDevice *)v23[2], v8);
    v25 = v24;
    if ( v24 < 0 )
      break;
    v21 = (_QWORD *)*v21;
    v27 = v21;
    if ( !(unsigned __int8)NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Iterator::operator!=(&v27, &v29) )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AF,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
    (const char *)(unsigned int)v24,
    UserDataCount);
  return v25;
}
