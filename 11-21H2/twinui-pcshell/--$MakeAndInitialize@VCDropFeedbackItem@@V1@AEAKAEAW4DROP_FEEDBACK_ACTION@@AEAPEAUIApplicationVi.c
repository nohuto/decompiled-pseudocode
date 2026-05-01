/*
 * XREFs of ??$MakeAndInitialize@VCDropFeedbackItem@@V1@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationView@@AEAW4DROP_FEEDBACK_TYPE@@AEAPEBUtagRECT@@AEAPEBU5@AEANAEAW4DROP_FEEDBACK_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedbackItem@@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationView@@AEAW4DROP_FEEDBACK_TYPE@@AEAPEBUtagRECT@@5AEANAEAW4DROP_FEEDBACK_FLAGS@@@Z @ 0x180537AB4
 * Callers:
 *     ?CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18053816C (-CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEED.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CDropFeedbackItem@@QEAA@XZ @ 0x180537DFC (--0CDropFeedbackItem@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCDropFeedbackItem@@@WRL@Microsoft@@QEAAXPEAVCDropFeedbackItem@@@Z @ 0x180538128 (-Attach@-$ComPtr@VCDropFeedbackItem@@@WRL@Microsoft@@QEAAXPEAVCDropFeedbackItem@@@Z.c)
 *     ?RuntimeClassInitialize@CDropFeedbackItem@@QEAAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@@Z @ 0x180538F10 (-RuntimeClassInitialize@CDropFeedbackItem@@QEAAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDropFeedbackItem,CDropFeedbackItem,unsigned long &,enum DROP_FEEDBACK_ACTION &,IApplicationView * &,enum DROP_FEEDBACK_TYPE &,tagRECT const * &,tagRECT const * &,double &,enum DROP_FEEDBACK_FLAGS &>(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 *a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _DWORD *a9)
{
  CDropFeedbackItem *v13; // rax
  int v14; // edi
  CDropFeedbackItem *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = (CDropFeedbackItem *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
  {
    v15 = CDropFeedbackItem::CDropFeedbackItem(v13);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<CDropFeedbackItem>::Attach(&v19, v15);
    v16 = *a4;
    v17 = v19;
    v14 = CDropFeedbackItem::RuntimeClassInitialize(v19, *a2, *a3, v16, *a5, *a6, *a7, *a8, *a9);
    if ( v14 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v19);
      v14 = 0;
      *a1 = v17;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v14;
}
