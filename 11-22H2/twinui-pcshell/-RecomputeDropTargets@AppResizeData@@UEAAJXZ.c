/*
 * XREFs of ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x1805DEC60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@UISC_SERVICE@CServiceHostComponent@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UISC_SERVICE@CServiceHostComponent@@@@V?$CSimpleArrayStandardCompareHelper@UISC_SERVICE@CServiceHostComponent@@@@V?$CSimpleArrayStandardMergeHelper@UISC_SERVICE@CServiceHostComponent@@@@@@QEAAXXZ @ 0x180586D58 (-RemoveAll@-$CTSimpleArray@UISC_SERVICE@CServiceHostComponent@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@U.c)
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x1805DE4F0 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 */

__int64 __fastcall AppResizeData::RecomputeDropTargets(AppResizeData *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CTSimpleArray<CServiceHostComponent::ISC_SERVICE,4294967294,CTPolicyCoTaskMem<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardCompareHelper<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardMergeHelper<CServiceHostComponent::ISC_SERVICE>>::RemoveAll((__int64)this + 32);
  v2 = AppResizeData::ComputeDropTargets((AppResizeData *)((char *)this - 24));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
