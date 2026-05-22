/*
 * XREFs of ?UpdateApiValueWithMask@?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@QEBAXG@Z @ 0x180072628
 * Callers:
 *     ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180072534 (--$UpdateAnimatedPropertyWorker@V-$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234.c)
 * Callees:
 *     ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC (-MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::SparsePropertyUpdater<float,Windows::UI::Composition::Visual,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>::UpdateApiValueWithMask(
        __int64 a1,
        unsigned __int16 a2)
{
  float v4; // xmm0_4
  void *v5; // rdx
  float v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(float (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1 + *(int *)(a1 + 16));
  v5 = *(void **)(a1 + 40);
  v7 = v4;
  Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
    (Windows::UI::Composition::AnimationHelper *)&v7,
    v5,
    (const void *)a2,
    4uLL);
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)a1 + *(int *)(a1 + 32));
}
