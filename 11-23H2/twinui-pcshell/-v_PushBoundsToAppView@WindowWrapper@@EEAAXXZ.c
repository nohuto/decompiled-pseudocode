/*
 * XREFs of ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x1804DE0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18019C070 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804DD818 (-GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall WindowWrapper::v_PushBoundsToAppView(WindowWrapper *this)
{
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v2; // rcx
  int v3; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  bool v8; // di
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  _QWORD *v13; // rax
  __int64 **v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r8
  int v21; // eax
  int v22; // edx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  int v25; // eax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  int v28; // eax
  int v29; // edx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
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
  int v42; // edx
  int v43; // eax
  int v44; // eax
  __int128 v45; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v47; // [rsp+60h] [rbp+30h] BYREF
  __int64 v48; // [rsp+68h] [rbp+38h] BYREF
  __int64 v49; // [rsp+70h] [rbp+40h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  v2 = 0LL;
  v47 = 0LL;
  v3 = *((_DWORD *)this + 130);
  if ( (*((_BYTE *)this + 664) & 1) != (v3 & 1) )
  {
    v47 = 0LL;
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v47);
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                     *((_QWORD *)this + 35),
                     &v49);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 40LL))(*v4, &v48);
    LOBYTE(v6) = v3 & 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 128LL))(
           *v5,
           *((unsigned int *)this + 88),
           v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x100,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v7,
        v45);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    v3 = *((_DWORD *)this + 130);
    v2 = v47;
  }
  v8 = (v3 & 2) != 0;
  if ( ((*((_DWORD *)this + 166) & 2) != 0) != v8 )
  {
    v47 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v47);
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                     *((_QWORD *)this + 35),
                     &v49);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v9 + 40LL))(*v9, &v48);
    LOBYTE(v11) = v8;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v10 + 136LL))(
            *v10,
            *((unsigned int *)this + 88),
            v11);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x108,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v12,
        v45);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    v2 = v47;
  }
  if ( *((float *)this + 160) != *((float *)this + 122)
    || *((float *)this + 161) != *((float *)this + 123)
    || *((float *)this + 162) != *((float *)this + 124)
    || *((float *)this + 163) != *((float *)this + 125) )
  {
    v47 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v47);
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v49);
    v14 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v13 + 40LL))(*v13, &v48);
    v15 = *v14;
    v16 = **v14;
    v45 = *(_OWORD *)((char *)this + 488);
    v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v16 + 176))(
            v15,
            *((unsigned int *)this + 88),
            &v45);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x111,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v17,
        v45);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    v2 = v47;
  }
  if ( *((_DWORD *)this + 132) != *((_DWORD *)this + 168) )
  {
    v47 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v47);
    v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v49);
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v18 + 40LL))(*v18, &v48);
    LOBYTE(v20) = *((_BYTE *)this + 528);
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v19 + 192LL))(
            *v19,
            *((unsigned int *)this + 88),
            v20);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x117,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v21,
        v45);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    v2 = v47;
  }
  v22 = *((_DWORD *)this + 133);
  if ( v22 != *((_DWORD *)this + 169) )
  {
    if ( v22 )
    {
      if ( v22 != 1 )
        goto LABEL_39;
      v47 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v47);
      v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                        *((_QWORD *)this + 35),
                        &v49);
      v24 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v23 + 40LL))(*v23, &v48);
      v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v24 + 160LL))(
              *v24,
              *((unsigned int *)this + 88),
              1LL);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x127,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v25,
          v45);
    }
    else
    {
      v47 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v47);
      v26 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                        *((_QWORD *)this + 35),
                        &v49);
      v27 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v26 + 40LL))(*v26, &v48);
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v27 + 160LL))(
              *v27,
              *((unsigned int *)this + 88),
              0LL);
      if ( v28 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x121,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v28,
          v45);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    v2 = v47;
  }
LABEL_39:
  v29 = *((_DWORD *)this + 135);
  if ( v29 == *((_DWORD *)this + 171) )
    goto LABEL_52;
  if ( v29 )
  {
    if ( v29 != 1 )
      goto LABEL_52;
    v47 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v47);
    v30 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v49);
    v31 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v30 + 40LL))(*v30, &v48);
    v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v31 + 144LL))(
            *v31,
            *((unsigned int *)this + 88),
            2LL);
    if ( v32 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v32,
        v45);
  }
  else
  {
    v47 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v47);
    v33 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v49);
    v34 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v33 + 40LL))(*v33, &v48);
    v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v34 + 144LL))(
            *v34,
            *((unsigned int *)this + 88),
            1LL);
    if ( v35 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x136,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v35,
        v45);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
  v2 = v47;
LABEL_52:
  if ( *((_DWORD *)this + 136) != *((_DWORD *)this + 172) )
  {
    v47 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v47);
    v36 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v49);
    v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v36 + 40LL))(*v36, &v48);
    v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v37 + 224LL))(
            *v37,
            *((unsigned int *)this + 88),
            *((unsigned int *)this + 136));
    if ( v38 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x147,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v38,
        v45);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    v2 = v47;
  }
  if ( *((_DWORD *)this + 170) != *((_DWORD *)this + 134) )
  {
    v47 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v47);
    v39 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v49);
    v40 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v39 + 40LL))(*v39, &v48);
    v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v40 + 208LL))(
            *v40,
            *((unsigned int *)this + 88),
            *((unsigned int *)this + 134));
    if ( v41 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v41,
        v45);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    v2 = v47;
  }
  v42 = *((_DWORD *)this + 137);
  if ( v42 != *((_DWORD *)this + 173) )
  {
    PushWindowTransparencyModeToWindow((HWND)*((int *)this + 74), v42, *((_DWORD *)this + 159));
    v2 = v47;
  }
  v43 = *((_DWORD *)this + 138);
  if ( v43 != *((_DWORD *)this + 174) )
  {
    SetPropW((HWND)*((int *)this + 74), L"CanOpenInNewTab", (HANDLE)(v43 != 0));
    v2 = v47;
  }
  if ( v2 )
  {
    v44 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 56LL))(v2);
    if ( v44 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v44,
        v45);
  }
  *((_OWORD *)this + 41) = *((_OWORD *)this + 32);
  *((_OWORD *)this + 42) = *((_OWORD *)this + 33);
  *((_QWORD *)this + 86) = *((_QWORD *)this + 68);
  *((_DWORD *)this + 174) = *((_DWORD *)this + 138);
  *((_OWORD *)this + 40) = *(_OWORD *)((char *)this + 488);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v47);
}
