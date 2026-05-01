/*
 * XREFs of ??1ModernResourceEnforcer@@MEAA@XZ @ 0x180083514
 * Callers:
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x1800835E0 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
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
  ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>((__int64 *)this + 36);
}
