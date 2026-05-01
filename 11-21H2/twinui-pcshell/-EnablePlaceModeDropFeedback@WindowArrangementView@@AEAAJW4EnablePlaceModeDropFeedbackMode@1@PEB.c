/*
 * XREFs of ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180519184
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x180518E40 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x18051A8A0 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x18051BB50 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18051BD1C (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x18051C78C (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTargetViewFromLayout@WindowArrangementView@@AEAA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180519C14 (-GetTargetViewFromLayout@WindowArrangementView@@AEAA-AV-$ComPtr@UIApplicationView@@@WRL@Microsof.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18052D784 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowArrangementView::EnablePlaceModeDropFeedback(__int64 a1, int a2, int *a3, __int64 a4)
{
  const struct _GUID *v7; // rcx
  int v8; // ebx
  const struct _GUID *v9; // rcx
  char v10; // si
  int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64 *); // rbx
  int i; // eax
  __int64 v16; // r8
  unsigned int v17; // r13d
  bool v18; // di
  __int64 v19; // r9
  __int64 v20; // r13
  void *v22; // [rsp+30h] [rbp-59h] BYREF
  void *v23; // [rsp+38h] [rbp-51h] BYREF
  __int64 v24; // [rsp+40h] [rbp-49h] BYREF
  struct IUnknown *v25; // [rsp+48h] [rbp-41h] BYREF
  __int64 v26; // [rsp+50h] [rbp-39h]
  _BYTE v27[16]; // [rsp+60h] [rbp-29h] BYREF
  struct IUnknown *v28; // [rsp+70h] [rbp-19h]
  _BYTE v29[40]; // [rsp+78h] [rbp-11h] BYREF

  v26 = a4;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  v8 = CDropFeedbackList_CreateInstance(v7, &v23);
  if ( v8 >= 0 )
  {
    v22 = 0LL;
    if ( a2 == 1 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      v8 = CDropFeedbackList_CreateInstance(v9, &v22);
      v10 = 1;
      if ( v8 < 0 )
      {
LABEL_38:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
        goto LABEL_39;
      }
    }
    else
    {
      v10 = 0;
    }
    if ( a3 )
    {
      v11 = *a3;
      v12 = (unsigned int)a3[1];
    }
    else
    {
      v11 = 0;
      v12 = 0xFFFFFFFFLL;
    }
    v24 = 0LL;
    WindowArrangementView::GetTargetViewFromLayout(a1, &v25, v12);
    v13 = *(_QWORD *)(a1 + 120);
    v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 128LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v24);
    for ( i = v14(v13, &v24);
          ;
          i = (*(__int64 (__fastcall **)(void *, _QWORD, _BYTE *, __int64))(*(_QWORD *)v23 + 80LL))(v23, v17, v29, v19) )
    {
      v8 = i;
      if ( i < 0 )
        break;
      if ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v24 + 24LL))(v24, 1LL, v27) < 0 )
      {
        v20 = v26;
        (*(void (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 72) + 32LL))(
          *(_QWORD *)(a1 + 72),
          v23,
          v26);
        if ( v22 )
          (*(void (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 72) + 32LL))(
            *(_QWORD *)(a1 + 72),
            v22,
            v20);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 88LL))(*(_QWORD *)(a1 + 72), 0LL);
        break;
      }
      v17 = (unsigned int)v28;
      v18 = v25 && (unsigned int)SHIsSameObject(v25, v28);
      v19 = 2LL;
      if ( v10 )
      {
        v8 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, __int64))(*(_QWORD *)v22 + 104LL))(
               v22,
               v17,
               v16,
               512LL);
        v19 = 0x800000LL;
      }
      else if ( v18 )
      {
        v19 = 1024LL;
        if ( v11 == 2 )
          v19 = 2048LL;
      }
      if ( v8 < 0 )
        break;
      if ( a2 == 3 )
        v19 = 1LL;
      else
        LODWORD(v19) = v19 | 0x200;
      if ( !v10 )
      {
        if ( a2 == 2 )
        {
          LODWORD(v19) = v19 | 0x400000;
        }
        else if ( v18 && v11 == 3 )
        {
          LODWORD(v19) = v19 | 0x200000;
        }
        else
        {
          v19 = (unsigned int)v19 | 0x10;
        }
      }
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v24);
    goto LABEL_38;
  }
LABEL_39:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  return (unsigned int)v8;
}
