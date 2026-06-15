/*
 * XREFs of ??1?$CAutoPtr@VCConstraintModel@@@ATL@@QEAA@XZ @ 0x1800FE944
 * Callers:
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$1 @ 0x18007D23C (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<CConstraintModel>::~CAutoPtr<CConstraintModel>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
