/*
 * XREFs of ?v_PushBoundsToAppView@UwpWindowWrapper@@EEAAXXZ @ 0x180406950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18015A090 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBatch@UwpWindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180405C1C (-GetBatch@UwpWindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Intern.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall UwpWindowWrapper::v_PushBoundsToAppView(UwpWindowWrapper *this)
{
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v2; // rcx
  int v3; // edx
  int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  int v8; // eax
  bool v9; // di
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  int v13; // eax
  _QWORD *v14; // rax
  __int64 **v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  int v23; // edx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int v26; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  int v29; // eax
  int v30; // edx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  int v33; // eax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  int v36; // eax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  int v39; // eax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  int v42; // eax
  int v43; // edx
  int v44; // eax
  int v45; // eax
  __int128 v46; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v48; // [rsp+50h] [rbp+20h] BYREF
  __int64 v49; // [rsp+58h] [rbp+28h] BYREF
  __int64 v50; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 224LL))(*((_QWORD *)this + 34));
  v2 = 0LL;
  v48 = 0LL;
  v3 = *((_DWORD *)this + 162);
  v4 = *((_DWORD *)this + 128);
  if ( (v3 & 1) != (v4 & 1) )
  {
    v48 = 0LL;
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)((char *)this - 8), &v48);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 152LL))(
                     *((_QWORD *)this + 34),
                     &v50);
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v5 + 40LL))(*v5, &v49);
    LOBYTE(v7) = v4 & 1;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 64LL))(
           *v6,
           *((unsigned int *)this + 72),
           v7);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x118,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v8,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v3 = *((_DWORD *)this + 162);
    v4 = *((_DWORD *)this + 128);
    v2 = v48;
  }
  v9 = (v4 & 2) != 0;
  if ( ((v3 & 2) != 0) != v9 )
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)((char *)this - 8), &v48);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 152LL))(
                      *((_QWORD *)this + 34),
                      &v50);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 40LL))(*v10, &v49);
    LOBYTE(v12) = v9;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v11 + 72LL))(
            *v11,
            *((unsigned int *)this + 72),
            v12);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x120,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v13,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v2 = v48;
  }
  if ( *((float *)this + 156) != *((float *)this + 120)
    || *((float *)this + 157) != *((float *)this + 121)
    || *((float *)this + 158) != *((float *)this + 122)
    || *((float *)this + 159) != *((float *)this + 123) )
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)((char *)this - 8), &v48);
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 152LL))(
                      *((_QWORD *)this + 34),
                      &v50);
    v15 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v14 + 40LL))(*v14, &v49);
    v16 = *v15;
    v17 = **v15;
    v46 = *((_OWORD *)this + 30);
    v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v17 + 104))(
            v16,
            *((unsigned int *)this + 72),
            &v46);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x129,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v18,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v2 = v48;
  }
  if ( *((_DWORD *)this + 130) != *((_DWORD *)this + 164) )
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)((char *)this - 8), &v48);
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 152LL))(
                      *((_QWORD *)this + 34),
                      &v50);
    v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v19 + 40LL))(*v19, &v49);
    LOBYTE(v21) = *((_BYTE *)this + 520);
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v20 + 120LL))(
            *v20,
            *((unsigned int *)this + 72),
            v21);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x12F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v22,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v2 = v48;
  }
  v23 = *((_DWORD *)this + 131);
  if ( v23 != *((_DWORD *)this + 165) )
  {
    if ( v23 )
    {
      if ( v23 != 1 )
        goto LABEL_39;
      v48 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      UwpWindowWrapper::GetBatch((UwpWindowWrapper *)((char *)this - 8), &v48);
      v24 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 152LL))(
                        *((_QWORD *)this + 34),
                        &v50);
      v25 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v24 + 40LL))(*v24, &v49);
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v25 + 88LL))(
              *v25,
              *((unsigned int *)this + 72),
              1LL);
      if ( v26 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x13F,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v26,
          v46);
    }
    else
    {
      v48 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      UwpWindowWrapper::GetBatch((UwpWindowWrapper *)((char *)this - 8), &v48);
      v27 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 152LL))(
                        *((_QWORD *)this + 34),
                        &v50);
      v28 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v27 + 40LL))(*v27, &v49);
      v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v28 + 88LL))(
              *v28,
              *((unsigned int *)this + 72),
              0LL);
      if ( v29 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x139,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v29,
          v46);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v2 = v48;
  }
LABEL_39:
  v30 = *((_DWORD *)this + 133);
  if ( v30 == *((_DWORD *)this + 167) )
    goto LABEL_52;
  if ( v30 )
  {
    if ( v30 != 1 )
      goto LABEL_52;
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)((char *)this - 8), &v48);
    v31 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 152LL))(
                      *((_QWORD *)this + 34),
                      &v50);
    v32 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v31 + 40LL))(*v31, &v49);
    v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v32 + 80LL))(
            *v32,
            *((unsigned int *)this + 72),
            2LL);
    if ( v33 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x154,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v33,
        v46);
  }
  else
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)((char *)this - 8), &v48);
    v34 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 152LL))(
                      *((_QWORD *)this + 34),
                      &v50);
    v35 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v34 + 40LL))(*v34, &v49);
    v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v35 + 80LL))(
            *v35,
            *((unsigned int *)this + 72),
            1LL);
    if ( v36 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v36,
        v46);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
  v2 = v48;
LABEL_52:
  if ( *((_DWORD *)this + 134) != *((_DWORD *)this + 168) )
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)((char *)this - 8), &v48);
    v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 152LL))(
                      *((_QWORD *)this + 34),
                      &v50);
    v38 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v37 + 40LL))(*v37, &v49);
    v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v38 + 208LL))(
            *v38,
            *((unsigned int *)this + 72),
            *((unsigned int *)this + 134));
    if ( v39 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v39,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v2 = v48;
  }
  if ( *((_DWORD *)this + 166) != *((_DWORD *)this + 132) )
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)((char *)this - 8), &v48);
    v40 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 152LL))(
                      *((_QWORD *)this + 34),
                      &v50);
    v41 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v40 + 40LL))(*v40, &v49);
    v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v41 + 176LL))(
            *v41,
            *((unsigned int *)this + 72),
            *((unsigned int *)this + 132));
    if ( v42 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x165,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v42,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v2 = v48;
  }
  v43 = *((_DWORD *)this + 135);
  if ( v43 != *((_DWORD *)this + 169) )
  {
    PushWindowTransparencyModeToWindow((HWND)*((int *)this + 72), v43, *((_DWORD *)this + 155));
    v2 = v48;
  }
  v44 = *((_DWORD *)this + 136);
  if ( v44 != *((_DWORD *)this + 170) )
  {
    SetPropW((HWND)*((int *)this + 72), L"CanOpenInNewTab", (HANDLE)(v44 != 0));
    v2 = v48;
  }
  if ( v2 )
  {
    v45 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 56LL))(v2);
    if ( v45 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x175,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v45,
        v46);
  }
  *((_OWORD *)this + 40) = *(_OWORD *)((char *)this + 504);
  *((_OWORD *)this + 41) = *(_OWORD *)((char *)this + 520);
  *((_QWORD *)this + 84) = *((_QWORD *)this + 67);
  *((_DWORD *)this + 170) = *((_DWORD *)this + 136);
  *((_OWORD *)this + 39) = *((_OWORD *)this + 30);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v48);
}
