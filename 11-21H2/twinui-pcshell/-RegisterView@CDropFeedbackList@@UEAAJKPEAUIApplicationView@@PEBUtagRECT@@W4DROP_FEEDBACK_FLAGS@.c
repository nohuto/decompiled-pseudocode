/*
 * XREFs of ?RegisterView@CDropFeedbackList@@UEAAJKPEAUIApplicationView@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x18052DE40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18053816C (-CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEED.c)
 */

__int64 __fastcall CDropFeedbackList::RegisterView(_QWORD *a1, unsigned int a2, __int64 a3)
{
  int Instance; // esi
  __int64 v7; // rbx
  void *v8; // r8
  __int64 v9; // rdx
  __int64 *v10; // rdx
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  Instance = CDropFeedbackItem_CreateInstance(a2, 0LL, a3);
  if ( Instance >= 0 )
  {
    v7 = v13;
    v12 = v13;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v12);
    v9 = a1[3];
    Instance = 0;
    if ( v9 != a1[5]
      || (Instance = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       (__int64)(a1 + 2),
                       v9 + 1,
                       v8),
          Instance >= 0) )
    {
      v10 = (__int64 *)(a1[2] + 8 * a1[3]++);
      if ( v10 )
      {
        *v10 = 0LL;
        if ( v10 != &v12 )
        {
          v12 = 0LL;
          *v10 = v7;
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  return (unsigned int)Instance;
}
