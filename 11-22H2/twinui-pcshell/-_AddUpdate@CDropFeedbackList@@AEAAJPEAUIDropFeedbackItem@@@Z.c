/*
 * XREFs of ?_AddUpdate@CDropFeedbackList@@AEAAJPEAUIDropFeedbackItem@@@Z @ 0x1805E8E94
 * Callers:
 *     ?Close@CDropFeedbackList@@UEAAJK@Z @ 0x1805E85A0 (-Close@CDropFeedbackList@@UEAAJK@Z.c)
 *     ?DragFadeIn@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x1805E8740 (-DragFadeIn@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?DragFadeOut@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_FLAGS@@@Z @ 0x1805E87F0 (-DragFadeOut@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Fade@CDropFeedbackList@@UEAAJKMW4DROP_FEEDBACK_FLAGS@@@Z @ 0x1805E88C0 (-Fade@CDropFeedbackList@@UEAAJKMW4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Slide@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x1805E8D10 (-Slide@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x1805E8DE0 (-Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CDropFeedbackList::_AddUpdate(CDropFeedbackList *this, struct IDropFeedbackItem *a2)
{
  unsigned __int64 v2; // r12
  __int64 *v3; // rdi
  unsigned int v4; // esi
  unsigned __int64 i; // rbp
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 *v13; // rdx
  struct IDropFeedbackItem *v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  v3 = (__int64 *)((char *)this + 16);
  v4 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v2 )
    {
      v15 = a2;
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v15);
      v11 = v3[1];
      v12 = 0;
      if ( v11 != v3[3]
        || (v12 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v3,
                    v11 + 1,
                    0LL),
            v12 >= 0) )
      {
        v13 = (__int64 *)(*v3 + 8 * v3[1]++);
        if ( v13 )
        {
          *v13 = 0LL;
          if ( v13 != (__int64 *)&v15 )
          {
            *v13 = (__int64)a2;
            v15 = 0LL;
          }
        }
      }
      v4 = v12;
      goto LABEL_14;
    }
    v3 = (__int64 *)((char *)this + 16);
    v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * i);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8) == 1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v3 + 8 * i) + 80LL))(*(_QWORD *)(*v3 + 8 * i));
      if ( v9 == (*(unsigned int (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2) )
        break;
    }
  }
  v10 = *v3;
  if ( *(struct IDropFeedbackItem **)(*v3 + 8 * i) == a2 )
    return v4;
  v15 = a2;
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v15);
  v15 = *(struct IDropFeedbackItem **)(v10 + 8 * i);
  *(_QWORD *)(v10 + 8 * i) = a2;
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
  return v4;
}
