/*
 * XREFs of ?_AddUpdate@CDropFeedbackList@@AEAAJPEAUIDropFeedbackItem@@@Z @ 0x18052E154
 * Callers:
 *     ?Close@CDropFeedbackList@@UEAAJK@Z @ 0x18052D850 (-Close@CDropFeedbackList@@UEAAJK@Z.c)
 *     ?DragFadeIn@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x18052D9F0 (-DragFadeIn@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?DragFadeOut@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_FLAGS@@@Z @ 0x18052DAA0 (-DragFadeOut@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Fade@CDropFeedbackList@@UEAAJKMW4DROP_FEEDBACK_FLAGS@@@Z @ 0x18052DB70 (-Fade@CDropFeedbackList@@UEAAJKMW4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Slide@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x18052DFD0 (-Slide@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x18052E0A0 (-Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CDropFeedbackList::_AddUpdate(CDropFeedbackList *this, struct IDropFeedbackItem *a2)
{
  unsigned __int64 v2; // r12
  unsigned int v3; // esi
  unsigned __int64 i; // rbp
  __int64 *v7; // rdi
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // r8d
  __int64 *v12; // rdx
  struct IDropFeedbackItem *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  for ( i = 0LL; ; ++i )
  {
    v7 = (__int64 *)((char *)this + 16);
    if ( i >= v2 )
    {
      v14 = a2;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v14);
      v10 = *((_QWORD *)this + 3);
      v11 = 0;
      if ( v10 != *((_QWORD *)this + 5)
        || (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)this + 16,
                    v10 + 1,
                    0LL),
            v11 >= 0) )
      {
        v12 = (__int64 *)(*((_QWORD *)this + 2) + 8 * (*((_QWORD *)this + 3))++);
        if ( v12 )
        {
          *v12 = 0LL;
          if ( v12 != (__int64 *)&v14 )
          {
            *v12 = (__int64)a2;
            v14 = 0LL;
          }
        }
      }
      v3 = v11;
      goto LABEL_14;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*v7 + 8 * i) + 88LL))(*(_QWORD *)(*v7 + 8 * i)) == 1 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v7 + 8 * i) + 80LL))(*(_QWORD *)(*v7 + 8 * i));
      if ( v8 == (*(unsigned int (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2) )
        break;
    }
  }
  v9 = *v7;
  if ( *(struct IDropFeedbackItem **)(*v7 + 8 * i) == a2 )
    return v3;
  v14 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v14);
  v14 = *(struct IDropFeedbackItem **)(v9 + 8 * i);
  *(_QWORD *)(v9 + 8 * i) = a2;
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
  return v3;
}
