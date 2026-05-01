/*
 * XREFs of ?PushBoundsToAppView@UwpWindowWrapper@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009F0F8
 * Callers:
 *     ?v_PushBoundsToAppView@UwpWindowWrapper@@EEAAXXZ @ 0x18009F0E0 (-v_PushBoundsToAppView@UwpWindowWrapper@@EEAAXXZ.c)
 *     ?PushBoundsDuringActivationRequested@UwpWindowWrapper@@UEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801BD900 (-PushBoundsDuringActivationRequested@UwpWindowWrapper@@UEAAXUWindowId@WindowManagement@Applicati.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBatch@UwpWindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009F474 (-GetBatch@UwpWindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Intern.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18019C070 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UwpWindowWrapper::PushBoundsToAppView(__int64 a1, int a2)
{
  HWND v2; // rbx
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v4; // rcx
  int v5; // esi
  bool v6; // si
  int v7; // edx
  int v8; // edx
  __int64 v9; // rdx
  int v10; // eax
  __int64 result; // rax
  _QWORD *v12; // rax
  __int64 **v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  int v20; // eax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // r8
  int v24; // eax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r8
  int v28; // eax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // r8
  int v32; // eax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  int v35; // eax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  int v38; // eax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  int v41; // eax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  int v44; // eax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  int v47; // eax
  __int128 v48; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v50; // [rsp+60h] [rbp+30h] BYREF
  __int64 v51; // [rsp+70h] [rbp+40h] BYREF
  __int64 v52; // [rsp+78h] [rbp+48h] BYREF

  v2 = (HWND)a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 224LL))(*(_QWORD *)(a1 + 288));
  if ( !(_DWORD)v2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)0x80070490LL,
      v48);
  v4 = 0LL;
  v50 = 0LL;
  v5 = *(_DWORD *)(a1 + 528);
  if ( (*(_BYTE *)(a1 + 680) & 1) != (v5 & 1) )
  {
    v50 = 0LL;
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v50);
    v21 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v52);
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v21 + 40LL))(*v21, &v51);
    LOBYTE(v23) = v5 & 1;
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v22 + 64LL))(*v22, (unsigned int)v2, v23);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x128,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v24,
        v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    v5 = *(_DWORD *)(a1 + 528);
    v4 = v50;
  }
  v6 = (v5 & 2) != 0;
  if ( ((*(_DWORD *)(a1 + 680) & 2) != 0) != v6 )
  {
    v50 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v50);
    v25 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v52);
    v26 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v25 + 40LL))(*v25, &v51);
    LOBYTE(v27) = v6;
    v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v26 + 72LL))(*v26, (unsigned int)v2, v27);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x130,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v28,
        v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    v4 = v50;
  }
  if ( *(float *)(a1 + 656) != *(float *)(a1 + 496)
    || *(float *)(a1 + 660) != *(float *)(a1 + 500)
    || *(float *)(a1 + 664) != *(float *)(a1 + 504)
    || *(float *)(a1 + 668) != *(float *)(a1 + 508) )
  {
    v50 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v50);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v52);
    v13 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v12 + 40LL))(*v12, &v51);
    v14 = *v13;
    v15 = **v13;
    v48 = *(_OWORD *)(a1 + 496);
    v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v15 + 104))(v14, (unsigned int)v2, &v48);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x139,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v16,
        v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    v4 = v50;
  }
  if ( *(_DWORD *)(a1 + 536) != *(_DWORD *)(a1 + 688) )
  {
    v50 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v50);
    v29 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v52);
    v30 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v29 + 40LL))(*v29, &v51);
    LOBYTE(v31) = *(_BYTE *)(a1 + 536);
    v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v30 + 120LL))(*v30, (unsigned int)v2, v31);
    if ( v32 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13F,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v32,
        v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    v4 = v50;
  }
  v7 = *(_DWORD *)(a1 + 540);
  if ( v7 != *(_DWORD *)(a1 + 692) )
  {
    if ( v7 )
    {
      if ( v7 != 1 )
        goto LABEL_10;
      v50 = 0LL;
      if ( v4 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
      UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v50);
      v33 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                        *(_QWORD *)(a1 + 288),
                        &v52);
      v34 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v33 + 40LL))(*v33, &v51);
      v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v34 + 88LL))(*v34, (unsigned int)v2, 1LL);
      if ( v35 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x14F,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v35,
          v48);
    }
    else
    {
      v50 = 0LL;
      if ( v4 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
      UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v50);
      v36 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                        *(_QWORD *)(a1 + 288),
                        &v52);
      v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v36 + 40LL))(*v36, &v51);
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v37 + 88LL))(*v37, (unsigned int)v2, 0LL);
      if ( v38 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x149,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v38,
          v48);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    v4 = v50;
  }
LABEL_10:
  v8 = *(_DWORD *)(a1 + 548);
  if ( v8 == *(_DWORD *)(a1 + 700) )
    goto LABEL_11;
  if ( v8 )
  {
    if ( v8 != 1 )
      goto LABEL_11;
    v50 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v50);
    v39 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v52);
    v40 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v39 + 40LL))(*v39, &v51);
    v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v40 + 80LL))(*v40, (unsigned int)v2, 2LL);
    if ( v41 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x164,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v41,
        v48);
  }
  else
  {
    v50 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v50);
    v42 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v52);
    v43 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v42 + 40LL))(*v42, &v51);
    v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v43 + 80LL))(*v43, (unsigned int)v2, 1LL);
    if ( v44 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15E,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v44,
        v48);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
  v4 = v50;
LABEL_11:
  if ( *(_DWORD *)(a1 + 552) != *(_DWORD *)(a1 + 704) )
  {
    v50 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v50);
    v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v52);
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v18 + 40LL))(*v18, &v51);
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v19 + 208LL))(
            *v19,
            (unsigned int)v2,
            *(unsigned int *)(a1 + 552));
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16F,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v20,
        v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    v4 = v50;
  }
  if ( *(_DWORD *)(a1 + 696) != *(_DWORD *)(a1 + 544) )
  {
    v50 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v50);
    v45 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v52);
    v46 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v45 + 40LL))(*v45, &v51);
    v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v46 + 176LL))(
            *v46,
            (unsigned int)v2,
            *(unsigned int *)(a1 + 544));
    if ( v47 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x175,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v47,
        v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    v4 = v50;
  }
  v9 = *(unsigned int *)(a1 + 556);
  if ( (_DWORD)v9 != *(_DWORD *)(a1 + 708) )
  {
    PushWindowTransparencyModeToWindow(v2, v9, *(unsigned int *)(a1 + 652));
    v4 = v50;
  }
  v10 = *(_DWORD *)(a1 + 560);
  if ( v10 != *(_DWORD *)(a1 + 712) )
  {
    SetPropW(v2, L"CanOpenInNewTab", (HANDLE)(v10 != 0));
    v4 = v50;
  }
  if ( v4 )
  {
    v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 56LL))(v4);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x185,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v17,
        v48);
    v4 = v50;
  }
  *(_OWORD *)(a1 + 672) = *(_OWORD *)(a1 + 520);
  *(_OWORD *)(a1 + 688) = *(_OWORD *)(a1 + 536);
  *(_QWORD *)(a1 + 704) = *(_QWORD *)(a1 + 552);
  result = *(unsigned int *)(a1 + 560);
  *(_DWORD *)(a1 + 712) = result;
  *(_OWORD *)(a1 + 656) = *(_OWORD *)(a1 + 496);
  if ( v4 )
    return (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}
