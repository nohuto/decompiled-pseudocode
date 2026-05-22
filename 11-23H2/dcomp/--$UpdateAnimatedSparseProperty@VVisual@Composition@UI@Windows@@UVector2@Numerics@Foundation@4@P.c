/*
 * XREFs of ??$UpdateAnimatedSparseProperty@VVisual@Composition@UI@Windows@@UVector2@Numerics@Foundation@4@P81234@EBA?AU5674@XZP81234@EAAXU5674@@Z@ProxyObject@Composition@UI@Windows@@IEAAXPEAVVisual@123@AEBUVector2@Numerics@Foundation@3@_N2GP84123@EBA?AU5673@XZP84123@EAAXU5673@@ZAEBUAnimatedProperty@AnimationHelper@123@@Z @ 0x18010AC44
 * Callers:
 *     ?OnAnimatedPropertyChanged@Visual@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180072060 (-OnAnimatedPropertyChanged@Visual@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 * Callees:
 *     ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180071A38 (--$UpdateAnimatedPropertyWorker@V-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@V.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedSparseProperty<Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned __int16 a6,
        __int128 *a7,
        __int128 *a8)
{
  __int128 v8; // xmm1
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-10h]

  v9 = a2;
  v10 = *a7;
  v8 = *a8;
  a7 = (__int128 *)&Windows::UI::Composition::Visual::sc_RelativeSizeAdjustment;
  v11 = v8;
  v12 = a3;
  Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>,Windows::UI::Composition::PropertyUpdateInfo>(
    a1,
    (__int64)&v9,
    (__int64 *)&a7,
    a4,
    a5,
    a6);
}
