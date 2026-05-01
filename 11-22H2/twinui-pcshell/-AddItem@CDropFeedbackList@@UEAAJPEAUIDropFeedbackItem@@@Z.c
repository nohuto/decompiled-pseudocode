/*
 * XREFs of ?AddItem@CDropFeedbackList@@UEAAJPEAUIDropFeedbackItem@@@Z @ 0x1805E8440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CDropFeedbackList::AddItem(CDropFeedbackList *this, struct IDropFeedbackItem *a2)
{
  _QWORD *v2; // rbx
  void *v4; // r8
  __int64 v5; // rdx
  int v6; // edi
  __int64 *v7; // r8
  struct IDropFeedbackItem *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 16);
  v9 = a2;
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v9);
  v5 = v2[1];
  v6 = 0;
  if ( v5 != v2[3]
    || (v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)v2,
               v5 + 1,
               v4),
        v6 >= 0) )
  {
    v7 = (__int64 *)(*v2 + 8 * v2[1]++);
    if ( v7 )
    {
      *v7 = 0LL;
      if ( v7 != (__int64 *)&v9 )
      {
        v9 = 0LL;
        *v7 = (__int64)a2;
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v6;
}
