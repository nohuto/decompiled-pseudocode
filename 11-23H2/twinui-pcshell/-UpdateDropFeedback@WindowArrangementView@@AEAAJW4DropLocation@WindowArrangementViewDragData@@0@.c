/*
 * XREFs of ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x1805D5268
 * Callers:
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x1805D2F40 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x1805D5C44 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIObjectArray@@@?$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805CFFF8 (--$As@UIObjectArray@@@-$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1805D17D8 (-DropLocationToArrangementAction@WindowArrangementView@@AEAA-AW4ARRANGEMENT_ACTION@@W4DropLocati.c)
 *     ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x1805D395C (-QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrange.c)
 *     ?UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z @ 0x1805D5AF8 (-UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805E84D4 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowArrangementView::UpdateDropFeedback(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // r13d
  const struct _GUID *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, struct IUnknown **); // rbx
  int v12; // eax
  __int64 v13; // rdx
  struct IUnknown **v14; // r12
  int v15; // eax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v22; // r14d
  __int64 v23; // rbx
  int (__fastcall *v24)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v25; // rbx
  int (__fastcall *v26)(__int64, GUID *, struct IUnknown **); // rdi
  __int64 v27; // rax
  int v28; // ebx
  int v29; // eax
  __int64 v30; // rbx
  int (__fastcall *v31)(__int64, struct IUnknown *, __int64 *, _QWORD); // rdi
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v33; // rdi
  void (__fastcall *v34)(__int64, __int64 *, _QWORD); // rbx
  __int64 v35; // rcx
  __int64 v36; // rdi
  void (__fastcall *v37)(__int64, struct IUnknown *, __int64 *, _QWORD); // rbx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // eax
  void *v44; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v45; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v50; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h] BYREF
  __int64 v52; // [rsp+70h] [rbp-90h] BYREF
  int v53; // [rsp+78h] [rbp-88h]
  _BYTE v54[16]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v55; // [rsp+90h] [rbp-70h]
  _BYTE v56[40]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v57; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v58; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v59; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v60[16]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v53 = a3;
  v5 = 16;
  v44 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v44);
  v7 = CDropFeedbackList_CreateInstance(v6, &v44);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DB,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_61;
  }
  if ( a2 != 5 )
  {
    v48 = 0LL;
    v14 = (struct IUnknown **)(a1 + 88);
    v15 = WindowArrangementView::QueryArrangeView(a1, *(_QWORD *)(a1 + 88), a2, &v48);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EE,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_21;
    }
    v46 = 0LL;
    v16 = v48;
    v17 = (*v48)[6];
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v46);
    v18 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))v17)(v16, &v46);
    v8 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F1,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v18);
LABEL_20:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v46);
LABEL_21:
      v21 = v48;
      if ( v48 )
      {
        v48 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
      }
      goto LABEL_61;
    }
    v51 = 0LL;
    v19 = Microsoft::WRL::ComPtr<IAppLayoutOperation>::As<IObjectArray>(&v48, &v51);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 1268LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
      goto LABEL_20;
    }
    v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v51 + 24LL))(v51, &v50);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 1271LL;
      goto LABEL_19;
    }
    v22 = 0;
    if ( !v50 )
    {
LABEL_49:
      v9 = a1 + 120;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 120));
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v46);
      *(_QWORD *)(a1 + 120) = v46;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v46);
      v32 = v48;
      if ( v48 )
      {
        v48 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v32)[2])(v32);
      }
      goto LABEL_51;
    }
    while ( 1 )
    {
      v47 = 0LL;
      v23 = v51;
      v24 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v51 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v47);
      if ( v24(v23, v22, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v47) >= 0 )
        break;
LABEL_48:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v47);
      if ( ++v22 >= v50 )
        goto LABEL_49;
    }
    v45 = 0LL;
    v25 = v47;
    v26 = *(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v47 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v45);
    if ( v26(v25, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v45) >= 0 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v47 + 72LL))(v47, 0LL, &v58);
      if ( (unsigned int)SHIsSameObject(v45, *v14) )
      {
        if ( *(_DWORD *)(a1 + 152) == 1 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v46 + 48LL))(v46)
            || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v46 + 40LL))(v46) )
          {
            v5 |= 0x200u;
          }
          if ( a2 <= 1 && !*(_BYTE *)(a1 + 312) )
          {
            v59 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 80) + 120LL))(
                               *(_QWORD *)(a1 + 80),
                               v60);
            (*(void (__fastcall **)(void *, __int64, __int64, __int128 *))(*(_QWORD *)v44 + 72LL))(
              v44,
              101LL,
              3LL,
              &v59);
          }
          v27 = *(_QWORD *)v44;
          if ( a2 == 6 )
          {
            (*(void (__fastcall **)(void *, __int64, _QWORD))(v27 + 112))(v44, 101LL, v5);
          }
          else if ( v53 == 6 )
          {
            (*(void (__fastcall **)(void *, __int64, __int128 *, _QWORD))(v27 + 120))(v44, 101LL, &v58, v5);
          }
          else
          {
            (*(void (__fastcall **)(void *, __int64, __int64, __int128 *, unsigned int))(v27 + 88))(
              v44,
              101LL,
              3LL,
              &v58,
              v5);
          }
        }
        goto LABEL_47;
      }
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 80LL))(v47);
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 88LL))(v47);
      if ( v28 )
      {
        if ( !v29 )
        {
          v57 = 0LL;
          v52 = 0LL;
          v30 = v46;
          v31 = *(int (__fastcall **)(__int64, struct IUnknown *, __int64 *, _QWORD))(*(_QWORD *)v46 + 152LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v52);
          if ( v31(v30, *v14, &v52, 0LL) < 0 )
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v47 + 56LL))(v47, 0LL, &v57);
          else
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v52 + 56LL))(v52, 0LL, &v57);
          (*(void (__fastcall **)(void *, _QWORD, __int128 *, _QWORD))(*(_QWORD *)v44 + 80LL))(
            v44,
            (unsigned int)v45,
            &v57,
            v5 | 2);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v52);
          goto LABEL_47;
        }
        goto LABEL_46;
      }
      if ( v29 )
LABEL_46:
        (*(void (__fastcall **)(void *, _QWORD, _QWORD, __int128 *, unsigned int))(*(_QWORD *)v44 + 88LL))(
          v44,
          (unsigned int)v45,
          0LL,
          &v58,
          v5);
    }
LABEL_47:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v45);
    goto LABEL_48;
  }
  v9 = a1 + 120;
  Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)(a1 + 120), (__int64 *)(a1 + 112));
  v45 = 0LL;
  v10 = *(_QWORD *)(a1 + 120);
  v11 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v10 + 128LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v45);
  v12 = v11(v10, &v45);
  v8 = v12;
  if ( v12 >= 0 )
  {
    while ( ((int (__fastcall *)(struct IUnknown *, __int64, _BYTE *))v45->lpVtbl[1].QueryInterface)(v45, 1LL, v54) >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(void *, _QWORD, _BYTE *, __int64))(*(_QWORD *)v44 + 80LL))(v44, v55, v56, 17LL);
      v8 = v12;
      if ( v12 < 0 )
      {
        v13 = 1256LL;
        goto LABEL_9;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v45);
    v14 = (struct IUnknown **)(a1 + 88);
LABEL_51:
    v49 = 0LL;
    v33 = *(_QWORD *)v9;
    v34 = *(void (__fastcall **)(__int64, __int64 *, _QWORD))(**(_QWORD **)v9 + 168LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v49);
    v34(v33, &v49, 0LL);
    v35 = v49;
    if ( v49
      || (v36 = *(_QWORD *)v9,
          v37 = *(void (__fastcall **)(__int64, struct IUnknown *, __int64 *, _QWORD))(**(_QWORD **)v9 + 152LL),
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v49),
          v37(v36, *v14, &v49, 0LL),
          (v35 = v49) != 0) )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v35 + 56LL))(v35, 0LL, &v57);
      (*(void (__fastcall **)(void *, __int64, __int64, __int128 *, unsigned int))(*(_QWORD *)v44 + 88LL))(
        v44,
        100LL,
        1LL,
        &v57,
        v5);
    }
    LOBYTE(v38) = a2 == 5;
    v39 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 88LL))(*(_QWORD *)(a1 + 72), v38);
    v8 = v39;
    if ( v39 >= 0 )
    {
      v39 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 72) + 32LL))(
              *(_QWORD *)(a1 + 72),
              v44,
              0LL);
      v8 = v39;
      if ( v39 >= 0 )
      {
        v42 = WindowArrangementView::DropLocationToArrangementAction(v41, a2);
        WindowArrangementView::UpdateUIADropEffect(a1, v42);
        v8 = 0;
        goto LABEL_60;
      }
      v40 = 1384LL;
    }
    else
    {
      v40 = 1383LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v39);
LABEL_60:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v49);
    goto LABEL_61;
  }
  v13 = 1252LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v45);
LABEL_61:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v44);
  return v8;
}
