/*
 * XREFs of ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18049BEE0
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x18049D2DC (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x18022CC8A (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     EnumWindowsHelpers::ForEachWindowHr__lambda_cab7c03a2b5ac7190be81e45414ea272___ @ 0x18049B79C (EnumWindowsHelpers--ForEachWindowHr__lambda_cab7c03a2b5ac7190be81e45414ea272___.c)
 *     ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18049C620 (-CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUH.c)
 *     ?CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18049CC94 (-CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CAppThumbnailWindow::CreateAppThumbnail(CAppThumbnailWindow *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD, GUID *, _QWORD *); // rbx
  _QWORD *v4; // r15
  int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int128 *, char *); // rbx
  _QWORD *v11; // r14
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  HMONITOR v17; // rdx
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // [rsp+30h] [rbp-108h] BYREF
  __int128 v25; // [rsp+38h] [rbp-100h] BYREF
  __int64 v26; // [rsp+48h] [rbp-F0h]
  int v27; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v28; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-D0h]
  __int128 v30; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+80h] [rbp-B8h]
  __int128 v32; // [rsp+90h] [rbp-A8h] BYREF
  HWND TrayWindowForMonitor; // [rsp+A0h] [rbp-98h] BYREF
  int v34; // [rsp+A8h] [rbp-90h] BYREF
  int *v35; // [rsp+B0h] [rbp-88h]
  int v36; // [rsp+B8h] [rbp-80h]
  _QWORD v37[8]; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v38; // [rsp+100h] [rbp-38h] BYREF
  int v39; // [rsp+108h] [rbp-30h]
  int v40; // [rsp+10Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v38 = 0LL;
  v39 = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  v40 = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  v2 = *((_QWORD *)this + 2);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, _QWORD *))(*(_QWORD *)v2 + 120LL);
  v4 = (_QWORD *)((char *)this + 40);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 5);
  v5 = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  LODWORD(v32) = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  DWORD1(v32) = v5;
  v6 = v3(v2, 0LL, v32, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v9 = *((_QWORD *)this + 2);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, char *))(*(_QWORD *)v9 + 96LL);
  v11 = (_QWORD *)((char *)this + 64);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 8);
  v32 = *(_OWORD *)((char *)this + 136);
  v12 = v10(v9, *v4, 0LL, &v32, (char *)this + 64);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(*(_QWORD *)*v11 + 24LL))(*v11, &v38, 0LL, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
  v24 = 0LL;
  v16 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v11)(
          *v11,
          &GUID_7814dccf_97c7_4f4f_8fc2_a3c6c8107597,
          &v24);
  v18 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v16);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v24);
    return v18;
  }
  v25 = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 19), v17);
  v34 = 18;
  v35 = &v27;
  v36 = 4;
  v37[0] = this;
  v37[1] = &TrayWindowForMonitor;
  v37[2] = &v25;
  v37[3] = &v30;
  v37[4] = &v34;
  v37[5] = &v27;
  v37[6] = &v28;
  v19 = EnumWindowsHelpers::ForEachWindowHr__lambda_cab7c03a2b5ac7190be81e45414ea272___((__int64)v37);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x117,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v19);
    if ( (_QWORD)v28 )
    {
      std::_Deallocate<16,0>((void *)v28, (v29 - v28) & 0xFFFFFFFFFFFFFFF8uLL);
      v28 = 0LL;
      v29 = 0LL;
    }
    if ( (_QWORD)v30 )
    {
      std::_Deallocate<16,0>((void *)v30, (v31 - v30) & 0xFFFFFFFFFFFFFFF8uLL);
      v30 = 0LL;
      v31 = 0LL;
    }
    if ( (_QWORD)v25 )
    {
      std::_Deallocate<16,0>((void *)v25, (v26 - v25) & 0xFFFFFFFFFFFFFFF8uLL);
      v25 = 0LL;
      v26 = 0LL;
    }
LABEL_40:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v24);
    return v20;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(v24, 0LL, 0LL);
  v20 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v21);
    if ( (_QWORD)v28 )
    {
      std::_Deallocate<16,0>((void *)v28, (v29 - v28) & 0xFFFFFFFFFFFFFFF8uLL);
      v28 = 0LL;
      v29 = 0LL;
    }
    if ( (_QWORD)v30 )
    {
      std::_Deallocate<16,0>((void *)v30, (v31 - v30) & 0xFFFFFFFFFFFFFFF8uLL);
      v30 = 0LL;
      v31 = 0LL;
    }
    if ( (_QWORD)v25 )
    {
      std::_Deallocate<16,0>((void *)v25, (v26 - v25) & 0xFFFFFFFFFFFFFFF8uLL);
      v25 = 0LL;
      v26 = 0LL;
    }
    goto LABEL_40;
  }
  v22 = CAppThumbnailWindow::CreateTrayThumbnail(this, &v30);
  v20 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11E,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v22);
    if ( (_QWORD)v28 )
    {
      std::_Deallocate<16,0>((void *)v28, (v29 - v28) & 0xFFFFFFFFFFFFFFF8uLL);
      v28 = 0LL;
      v29 = 0LL;
    }
    if ( (_QWORD)v30 )
    {
      std::_Deallocate<16,0>((void *)v30, (v31 - v30) & 0xFFFFFFFFFFFFFFF8uLL);
      v30 = 0LL;
      v31 = 0LL;
    }
    if ( (_QWORD)v25 )
    {
      std::_Deallocate<16,0>((void *)v25, (v26 - v25) & 0xFFFFFFFFFFFFFFF8uLL);
      v25 = 0LL;
      v26 = 0LL;
    }
    goto LABEL_40;
  }
  v23 = CAppThumbnailWindow::CreateBackgroundThumbnail(this, &v28);
  v20 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v23);
    if ( (_QWORD)v28 )
    {
      std::_Deallocate<16,0>((void *)v28, (v29 - v28) & 0xFFFFFFFFFFFFFFF8uLL);
      v28 = 0LL;
      v29 = 0LL;
    }
    if ( (_QWORD)v30 )
    {
      std::_Deallocate<16,0>((void *)v30, (v31 - v30) & 0xFFFFFFFFFFFFFFF8uLL);
      v30 = 0LL;
      v31 = 0LL;
    }
    if ( (_QWORD)v25 )
    {
      std::_Deallocate<16,0>((void *)v25, (v26 - v25) & 0xFFFFFFFFFFFFFFF8uLL);
      v25 = 0LL;
      v26 = 0LL;
    }
    goto LABEL_40;
  }
  if ( (_QWORD)v28 )
  {
    std::_Deallocate<16,0>((void *)v28, (v29 - v28) & 0xFFFFFFFFFFFFFFF8uLL);
    v28 = 0LL;
    v29 = 0LL;
  }
  if ( (_QWORD)v30 )
  {
    std::_Deallocate<16,0>((void *)v30, (v31 - v30) & 0xFFFFFFFFFFFFFFF8uLL);
    v30 = 0LL;
    v31 = 0LL;
  }
  if ( (_QWORD)v25 )
  {
    std::_Deallocate<16,0>((void *)v25, (v26 - v25) & 0xFFFFFFFFFFFFFFF8uLL);
    v25 = 0LL;
    v26 = 0LL;
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v24);
  return 0LL;
}
