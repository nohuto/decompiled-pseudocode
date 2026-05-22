/*
 * XREFs of ?UpdateApiValue@?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@QEBA_NXZ @ 0x18006D378
 * Callers:
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006D4D4 (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Windows::UI::Composition::SparsePropertyUpdater<float,Windows::UI::Composition::Visual,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>::UpdateApiValue(
        __int64 a1)
{
  if ( (*(float (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1 + *(int *)(a1 + 16)) == **(float **)(a1 + 40) )
    return 0;
  (*(void (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)a1 + *(int *)(a1 + 32));
  return 1;
}
