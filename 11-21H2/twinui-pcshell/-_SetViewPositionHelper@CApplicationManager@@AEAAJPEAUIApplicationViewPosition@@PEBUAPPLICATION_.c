/*
 * XREFs of ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800EDC98
 * Callers:
 *     ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800232F0 (-_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DA.c)
 *     ?SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewPosition@@W4SET_IMM_APP_POS@@@Z @ 0x180054580 (-SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicatio.c)
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x1800EB0D0 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18005897C (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_SetViewPositionHelper(
        CApplicationManager *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        struct ISyncIAMEventHandler *a12)
{
  struct ISyncIAMEventHandler *v13; // r14
  int v14; // eax
  unsigned int v15; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v13 = a12;
  v14 = (*(__int64 (__fastcall **)(struct ISyncIAMEventHandler *, __int64, __int64, __int64, int, int, __int64, __int64, int, int))(*(_QWORD *)a12 + 256LL))(
          a12,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1089,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
  else
  {
    if ( a10 && ((*(__int64 (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v13 + 280LL))(v13) & 2) != 0 )
    {
      a12 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a12);
      if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &a12) >= 0 )
        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, unsigned __int64, __int64, int, int, int))(*(_QWORD *)a12 + 24LL))(
          a12,
          0LL,
          ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
          a11,
          a10,
          5,
          1);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a12);
    }
    return 0LL;
  }
}
