/*
 * XREFs of ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x180513410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180512354 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z @ 0x180512F4C (-FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806150B0 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180615920 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180615D0C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositionerOperation::ResizeView(
        TabletModePositionerOperation *this,
        struct IApplicationView *a2,
        int a3)
{
  TabletModePositionerOperation *v5; // r13
  struct _RTL_CRITICAL_SECTION *v6; // r15
  char *v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD); // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  const struct _GUID *v15; // r8
  int AdjacentItem; // eax
  __int64 v17; // rdx
  int v18; // ebx
  int v19; // esi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v20; // rdx
  int v21; // edi
  int v22; // esi
  int v23; // eax
  int v24; // ebx
  void *v26; // [rsp+30h] [rbp-59h] BYREF
  struct IAppLayoutItem *v27; // [rsp+38h] [rbp-51h] BYREF
  __int64 v28; // [rsp+40h] [rbp-49h] BYREF
  int v29; // [rsp+48h] [rbp-41h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+50h] [rbp-39h]
  int v31; // [rsp+58h] [rbp-31h]
  __int128 v32; // [rsp+60h] [rbp-29h] BYREF
  __int128 v33; // [rsp+70h] [rbp-19h] BYREF
  _DWORD v34[10]; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v29 = a3;
  v5 = (TabletModePositionerOperation *)((char *)this - 176);
  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176));
  v30 = v6;
  v31 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v7 = (char *)this - 152;
  v8 = CAppLayoutOperation::_VerifyAndPrepareLayout((TabletModePositionerOperation *)((char *)this - 152), 0LL, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_22;
  }
  v27 = 0LL;
  v10 = *((_QWORD *)this - 14);
  v11 = *(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD))(*(_QWORD *)v10 + 152LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
  v12 = v11(v10, a2, &v27, 0LL);
  v9 = v12;
  if ( v12 >= 0 )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this - 14) + 48LL))(*((_QWORD *)this - 14)) )
    {
      v28 = 0LL;
      v14 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v27,
              &v28);
      v9 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x111,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)v14);
LABEL_19:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
        goto LABEL_21;
      }
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
      AdjacentItem = TabletModePositionerOperation::FindAdjacentItem(v5, v27, v15, &v26);
      v9 = AdjacentItem;
      if ( AdjacentItem < 0 )
      {
        v17 = 275LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)AdjacentItem);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
        goto LABEL_19;
      }
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this - 14) + 24LL))(*((_QWORD *)this - 14), v34);
      v18 = v34[0];
      v19 = v34[2];
      v21 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v34, v20);
      v22 = v19 - v18;
      v23 = (*(__int64 (__fastcall **)(void *, _DWORD *, _QWORD))(*(_QWORD *)v26 + 72LL))(
              v26,
              v34,
              (unsigned int)(v22 - v21));
      v24 = v29;
      if ( v21 + v29 + v23 > v22 )
      {
        AdjacentItem = CAppLayoutOperation::_MakeViewFullScreen(v7, a2, 5LL);
        v9 = AdjacentItem;
        if ( AdjacentItem < 0 )
        {
          v17 = 300LL;
          goto LABEL_18;
        }
      }
      else
      {
        v32 = 0LL;
        (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v27 + 56LL))(v27, 0LL, &v32);
        DWORD2(v32) = v24 + v32;
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v28 + 104LL))(v28, 0LL, &v32);
        v33 = 0LL;
        (*(void (__fastcall **)(void *, _QWORD, __int128 *))(*(_QWORD *)v26 + 104LL))(v26, 0LL, &v33);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    }
    *((_DWORD *)v7 + 20) = 1;
    v12 = CAppLayoutOperation::_FinalizeLayout(v7, 0LL);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v9 = 0;
      goto LABEL_21;
    }
    v13 = 305LL;
    goto LABEL_15;
  }
  v13 = 264LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)v12);
LABEL_21:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
LABEL_22:
  if ( v31 >= 0 )
    LeaveCriticalSection(v6);
  return v9;
}
