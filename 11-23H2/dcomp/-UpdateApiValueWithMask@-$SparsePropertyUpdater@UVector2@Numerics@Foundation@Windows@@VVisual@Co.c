/*
 * XREFs of ?UpdateApiValueWithMask@?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@QEBAXG@Z @ 0x18010C5C4
 * Callers:
 *     ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180071A38 (--$UpdateAnimatedPropertyWorker@V-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@V.c)
 * Callees:
 *     ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC (-MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>::UpdateApiValueWithMask(
        __int64 a1,
        unsigned __int16 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(a1 + 8))(*(_QWORD *)a1 + *(int *)(a1 + 16), &v5);
  Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
    (Windows::UI::Composition::AnimationHelper *)&v5,
    *(void **)(a1 + 40),
    (const void *)a2,
    8uLL);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)a1 + *(int *)(a1 + 32), v5);
}
