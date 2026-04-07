/*
 * XREFs of ?CreateSharedVisual@UdwmDcompVisual@@AEAAJAEAUSharedDwmDcompVisual@@_N@Z @ 0x180036F40
 * Callers:
 *     ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x180036E64 (-Initialize@UdwmDcompVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037184 (-CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@UdwmBottomVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037264 (-CreateFromSharedHandle@UdwmBottomVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UdwmDcompVisual::CreateSharedVisual(UdwmDcompVisual *this, struct SharedDwmDcompVisual *a2, char a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // r15
  int v8; // ebx
  void **v9; // r14
  __int64 (__fastcall *v10)(__int64 *, char *); // rbx
  void *v11; // rcx
  int v12; // eax
  _QWORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct UdwmTopVisual *v18; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+68h] [rbp+20h] BYREF

  v18 = this;
  v5 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 32LL);
  v6 = *v5;
  if ( !a3 )
  {
    v14 = (_QWORD *)((char *)a2 + 8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2 + 1);
    v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))(v6 + 216))(
           v5,
           &GUID_e8de1639_4331_4b26_bc5f_6a321d347a85,
           v14);
    if ( v8 < 0 )
    {
      v15 = 364LL;
      goto LABEL_18;
    }
    v9 = (void **)((char *)a2 + 24);
    v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *))(*v5 + 224))(v5, *v14, (char *)a2 + 24);
    if ( v8 >= 0 )
      goto LABEL_7;
    v15 = 365LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v7 = (_QWORD *)((char *)a2 + 16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2 + 2);
  v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))(v6 + 216))(
         v5,
         &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
         v7);
  if ( v8 < 0 )
  {
    v15 = 350LL;
    goto LABEL_18;
  }
  v9 = (void **)((char *)a2 + 24);
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *))(*v5 + 224))(v5, *v7, (char *)a2 + 24);
  if ( v8 < 0 )
  {
    v15 = 353LL;
    goto LABEL_18;
  }
  v10 = *(__int64 (__fastcall **)(__int64 *, char *))(*v5 + 48);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2 + 1);
  v8 = v10(v5, (char *)a2 + 8);
  if ( v8 < 0 )
  {
    v15 = 356LL;
    goto LABEL_18;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *))(*v5 + 24))(v5);
  if ( v8 < 0 )
  {
    v15 = 357LL;
    goto LABEL_18;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v7 + 24LL))(*v7, *((_QWORD *)a2 + 1));
  if ( v8 < 0 )
  {
    v15 = 360LL;
    goto LABEL_18;
  }
LABEL_7:
  v8 = (*(__int64 (__fastcall **)(__int64 *))(*v5 + 24))(v5);
  if ( v8 < 0 )
  {
    v15 = 368LL;
    goto LABEL_18;
  }
  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = *v9;
  if ( a3 )
  {
    v12 = UdwmTopVisual::CreateFromSharedHandle(v11, &v18);
    v8 = v12;
    if ( v12 >= 0 )
      goto LABEL_10;
    v16 = 377LL;
  }
  else
  {
    v12 = UdwmBottomVisual::CreateFromSharedHandle(v11, &v18);
    v8 = v12;
    if ( v12 >= 0 )
    {
LABEL_10:
      *(_QWORD *)a2 = v18;
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      return 0LL;
    }
    v16 = 383LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)v12);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return (unsigned int)v8;
}
