/*
 * XREFs of ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E125C
 * Callers:
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E1108 (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ @ 0x1804E04F0 (-_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ.c)
 *     ?s_GetLayoutBufferRect@CAppTransitionManager@@CA?AUCRect@Geometry@@PEAUIAppLayout@@@Z @ 0x1804E1AFC (-s_GetLayoutBufferRect@CAppTransitionManager@@CA-AUCRect@Geometry@@PEAUIAppLayout@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_TagBuffer(CAppTransitionManager *this, struct IAppLayoutOperation *a2)
{
  __int64 v2; // rax
  char v5; // si
  __int64 (__fastcall *v6)(struct IAppLayoutOperation *, __int64 *); // rdi
  __int64 *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(struct IAppLayoutOperation *, __int64 *); // rdi
  __int64 *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  bool v15; // di
  int v16; // eax
  __int64 v17; // rdx
  __int128 *v18; // rcx
  int v19; // eax
  HWND v20; // rcx
  int v22; // [rsp+44h] [rbp-15h] BYREF
  __int64 v23; // [rsp+48h] [rbp-11h] BYREF
  __int64 v24; // [rsp+50h] [rbp-9h] BYREF
  __int64 v25; // [rsp+58h] [rbp-1h] BYREF
  __int128 v26; // [rsp+60h] [rbp+7h] BYREF
  __int128 v27; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = *(_QWORD *)a2;
  v24 = 0LL;
  v5 = 0;
  v6 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(v2 + 40);
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v24, &v25);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  v8 = v6(a2, v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *(_QWORD *)a2;
    v23 = 0LL;
    v11 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(v10 + 48);
    v12 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v23, &v25);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v12);
    v13 = v11(a2, v12);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x290,
        (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_26:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
      goto LABEL_27;
    }
    CAppTransitionManager::s_GetLayoutBufferRect(&v27, v24);
    CAppTransitionManager::s_GetLayoutBufferRect(&v26, v23);
    v14 = *((_QWORD *)this + 26);
    if ( v14 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 24LL))(v14, &v22) >= 0 && v22 )
      v27 = v26;
    if ( (int)v27 < SDWORD2(v27) && SDWORD1(v27) < SHIDWORD(v27) )
    {
      v5 = 1;
      v15 = (int)v26 >= SDWORD2(v26) || SDWORD1(v26) >= SHIDWORD(v26);
      v16 = CAppTransitionManager::_EnsureWindowForBufferTag(this);
      v9 = v16;
      if ( v16 < 0 )
      {
        v17 = 698LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_24;
      }
      if ( !v15 )
      {
        v18 = &v26;
        v19 = 1;
      }
      else
      {
        v18 = 0LL;
        v19 = 0;
      }
      v16 = DwmpTransitionWindowWithRects(
              *((_QWORD *)this + 24),
              v15 ? 16777284 : 25264196,
              &v27,
              &v27,
              (unsigned __int64)&v26 & -(__int64)(v19 != 0),
              v18,
              0LL);
      v9 = v16;
      if ( v16 < 0 )
      {
        v17 = 707LL;
        goto LABEL_22;
      }
    }
    v9 = 0;
    if ( v5 )
      goto LABEL_26;
LABEL_24:
    v20 = (HWND)*((_QWORD *)this + 24);
    if ( v20 )
    {
      DestroyWindow(v20);
      *((_QWORD *)this + 24) = 0LL;
    }
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28D,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_27:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  return v9;
}
