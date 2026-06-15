/*
 * XREFs of ??0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z @ 0x18013D4B0
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800675AC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

CPropertyStoreHelper *__fastcall CPropertyStoreHelper::CPropertyStoreHelper(
        CPropertyStoreHelper *this,
        struct IPropertyStore *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IPropertyStore *))a2->lpVtbl->AddRef)(a2);
  return this;
}
