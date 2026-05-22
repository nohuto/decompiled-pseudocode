/*
 * XREFs of ?UpdateApiValue@?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@QEBA_NXZ @ 0x1800B5D28
 * Callers:
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x1800B5A6C (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VV.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector3,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector3 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector3)>::UpdateApiValue(
        __int64 a1)
{
  __int64 *v2; // rdx
  unsigned __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-20h]

  (*(void (__fastcall **)(_QWORD, __int64 *))(a1 + 8))(*(_QWORD *)a1 + *(int *)(a1 + 16), &v9);
  v2 = *(__int64 **)(a1 + 40);
  v3 = v9 - *v2;
  if ( v9 == *v2 )
    v3 = v10 - (unsigned __int64)*((unsigned int *)v2 + 2);
  if ( !v3 )
    return 0;
  v4 = *((_DWORD *)v2 + 2);
  v5 = *(_QWORD *)a1 + *(int *)(a1 + 32);
  v7 = *v2;
  v8 = v4;
  (*(void (__fastcall **)(__int64, __int64 *))(a1 + 24))(v5, &v7);
  return 1;
}
