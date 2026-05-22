/*
 * XREFs of ?UpdateApiValueWithMask@?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@QEBAXG@Z @ 0x18010C640
 * Callers:
 *     ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x18010AB9C (--$UpdateAnimatedPropertyWorker@V-$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@V.c)
 * Callees:
 *     ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC (-MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector3,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector3 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector3)>::UpdateApiValueWithMask(
        __int64 a1,
        unsigned __int16 a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  (*(void (__fastcall **)(_QWORD, __int64 *))(a1 + 8))(*(_QWORD *)a1 + *(int *)(a1 + 16), &v8);
  Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
    (Windows::UI::Composition::AnimationHelper *)&v8,
    *(void **)(a1 + 40),
    (const void *)a2,
    0xCuLL);
  v4 = *(_QWORD *)a1 + *(int *)(a1 + 32);
  v6 = v8;
  v7 = v9;
  return (*(__int64 (__fastcall **)(__int64, __int64 *))(a1 + 24))(v4, &v6);
}
