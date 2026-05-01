/*
 * XREFs of ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x18012F010
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18012F3CC (-GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@.c)
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18015A090 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall WindowWrapper::v_PushBoundsToAppView(WindowWrapper *this)
{
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v2; // rcx
  int v3; // edx
  int v4; // edi
  bool v5; // di
  _QWORD *v6; // rax
  __int64 **v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  int v12; // edx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  int v18; // eax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r8
  int v26; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  int v30; // eax
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
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  int v45; // eax
  __int128 v46; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v48; // [rsp+50h] [rbp+20h] BYREF
  __int64 v49; // [rsp+58h] [rbp+28h] BYREF
  __int64 v50; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  v2 = 0LL;
  v48 = 0LL;
  v3 = *((_DWORD *)this + 166);
  v4 = *((_DWORD *)this + 130);
  if ( (v3 & 1) != (v4 & 1) )
  {
    v48 = 0LL;
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v48);
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v50);
    v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v19 + 40LL))(*v19, &v49);
    LOBYTE(v21) = v4 & 1;
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v20 + 128LL))(
            *v20,
            *((unsigned int *)this + 88),
            v21);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x100,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v22,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v3 = *((_DWORD *)this + 166);
    v4 = *((_DWORD *)this + 130);
    v2 = v48;
  }
  v5 = (v4 & 2) != 0;
  if ( ((v3 & 2) != 0) != v5 )
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v48);
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v50);
    v24 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v23 + 40LL))(*v23, &v49);
    LOBYTE(v25) = v5;
    v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v24 + 136LL))(
            *v24,
            *((unsigned int *)this + 88),
            v25);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x108,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v26,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v2 = v48;
  }
  if ( *((float *)this + 160) != *((float *)this + 122)
    || *((float *)this + 161) != *((float *)this + 123)
    || *((float *)this + 162) != *((float *)this + 124)
    || *((float *)this + 163) != *((float *)this + 125) )
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v48);
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                     *((_QWORD *)this + 35),
                     &v50);
    v7 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v6 + 40LL))(*v6, &v49);
    v8 = *v7;
    v9 = **v7;
    v46 = *(_OWORD *)((char *)this + 488);
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v9 + 176))(v8, *((unsigned int *)this + 88), &v46);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x111,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v10,
        v46);
    if ( v49 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    if ( v50 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    v2 = v48;
  }
  if ( *((_DWORD *)this + 132) != *((_DWORD *)this + 168) )
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v48);
    v27 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v50);
    v28 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v27 + 40LL))(*v27, &v49);
    LOBYTE(v29) = *((_BYTE *)this + 528);
    v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v28 + 192LL))(
            *v28,
            *((unsigned int *)this + 88),
            v29);
    if ( v30 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x117,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v30,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v2 = v48;
  }
  v11 = *((_DWORD *)this + 133);
  if ( v11 != *((_DWORD *)this + 169) )
  {
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_17;
      v48 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v48);
      v31 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                        *((_QWORD *)this + 35),
                        &v50);
      v32 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v31 + 40LL))(*v31, &v49);
      v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v32 + 160LL))(
              *v32,
              *((unsigned int *)this + 88),
              1LL);
      if ( v33 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x127,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v33,
          v46);
    }
    else
    {
      v48 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v48);
      v34 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                        *((_QWORD *)this + 35),
                        &v50);
      v35 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v34 + 40LL))(*v34, &v49);
      v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v35 + 160LL))(
              *v35,
              *((unsigned int *)this + 88),
              0LL);
      if ( v36 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x121,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v36,
          v46);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v2 = v48;
  }
LABEL_17:
  v12 = *((_DWORD *)this + 135);
  if ( v12 == *((_DWORD *)this + 171) )
    goto LABEL_18;
  if ( v12 )
  {
    if ( v12 != 1 )
      goto LABEL_18;
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v48);
    v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v50);
    v38 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v37 + 40LL))(*v37, &v49);
    v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v38 + 144LL))(
            *v38,
            *((unsigned int *)this + 88),
            2LL);
    if ( v39 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v39,
        v46);
  }
  else
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v48);
    v40 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v50);
    v41 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v40 + 40LL))(*v40, &v49);
    v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v41 + 144LL))(
            *v41,
            *((unsigned int *)this + 88),
            1LL);
    if ( v42 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x136,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v42,
        v46);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
  v2 = v48;
LABEL_18:
  if ( *((_DWORD *)this + 136) != *((_DWORD *)this + 172) )
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v48);
    v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v50);
    v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v16 + 40LL))(*v16, &v49);
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v17 + 224LL))(
            *v17,
            *((unsigned int *)this + 88),
            *((unsigned int *)this + 136));
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x147,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v18,
        v46);
    if ( v49 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    if ( v50 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    v2 = v48;
  }
  if ( *((_DWORD *)this + 170) != *((_DWORD *)this + 134) )
  {
    v48 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v48);
    v43 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v50);
    v44 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v43 + 40LL))(*v43, &v49);
    v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v44 + 208LL))(
            *v44,
            *((unsigned int *)this + 88),
            *((unsigned int *)this + 134));
    if ( v45 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v45,
        v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v50);
    v2 = v48;
  }
  v13 = *((unsigned int *)this + 137);
  if ( (_DWORD)v13 != *((_DWORD *)this + 173) )
  {
    PushWindowTransparencyModeToWindow(*((int *)this + 74), v13, *((unsigned int *)this + 159));
    v2 = v48;
  }
  v14 = *((_DWORD *)this + 138);
  if ( v14 != *((_DWORD *)this + 174) )
  {
    SetPropW((HWND)*((int *)this + 74), L"CanOpenInNewTab", (HANDLE)(v14 != 0));
    v2 = v48;
  }
  if ( v2 )
  {
    v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 56LL))(v2);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v15,
        v46);
    v2 = v48;
  }
  *((_OWORD *)this + 41) = *((_OWORD *)this + 32);
  *((_OWORD *)this + 42) = *((_OWORD *)this + 33);
  *((_QWORD *)this + 86) = *((_QWORD *)this + 68);
  *((_DWORD *)this + 174) = *((_DWORD *)this + 138);
  *((_OWORD *)this + 40) = *(_OWORD *)((char *)this + 488);
  if ( v2 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
}
