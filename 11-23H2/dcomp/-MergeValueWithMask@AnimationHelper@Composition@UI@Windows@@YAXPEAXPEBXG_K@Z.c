/*
 * XREFs of ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC
 * Callers:
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180004F7C (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetVector3Value@@UD2DVector3@@@Co.c)
 *     ??$UpdateAnimatedPropertyWorker@VTypelessPropertyUpdater@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAVTypelessPropertyUpdater@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180072480 (--$UpdateAnimatedPropertyWorker@VTypelessPropertyUpdater@Composition@UI@Windows@@VPropertyUpdate.c)
 *     ?UpdateApiValueWithMask@?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@QEBAXG@Z @ 0x180072628 (-UpdateApiValueWithMask@-$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP8.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180094898 (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Co.c)
 *     ?UpdateApiValueWithMask@?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@QEBAXG@Z @ 0x18010C5C4 (-UpdateApiValueWithMask@-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Co.c)
 *     ?UpdateApiValueWithMask@?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@QEBAXG@Z @ 0x18010C640 (-UpdateApiValueWithMask@-$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Co.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetBooleanValue@@_N@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148C7C (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@U.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148CFC (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148D7C (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@C.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148DFC (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetVector2Value@@UD2DVector2@@@Co.c)
 * Callees:
 *     memcpy_s @ 0x180066970 (memcpy_s.c)
 */

void __fastcall Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
        Windows::UI::Composition::AnimationHelper *this,
        void *a2,
        const void *a3,
        rsize_t a4)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // ecx
  int v8; // r9d
  __int64 v9; // rdx

  if ( (_WORD)a3 == 0xFFFF )
  {
    memcpy_s(this, a4, a2, a4);
  }
  else
  {
    v6 = a4 >> 2;
    v7 = 0;
    if ( a4 >> 2 )
    {
      v8 = (unsigned __int16)a3;
      v9 = 0LL;
      do
      {
        if ( _bittest(&v8, v7) )
          *((_DWORD *)this + v9) = *((_DWORD *)a2 + v9);
        v9 = ++v7;
      }
      while ( v7 < v6 );
    }
  }
}
