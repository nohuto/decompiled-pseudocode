/*
 * XREFs of ??1ModernResourceEnforcer@@UEAA@XZ @ 0x18004F304
 * Callers:
 *     ??_EModernResourceEnforcer@@UEAAPEAXI@Z @ 0x18004F350 (--_EModernResourceEnforcer@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ModernResourceEnforcer::~ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  v2 = *((_QWORD *)this + 33);
  if ( v2 )
    TpReleaseWork(v2);
  ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>((__int64 *)this + 36);
}
