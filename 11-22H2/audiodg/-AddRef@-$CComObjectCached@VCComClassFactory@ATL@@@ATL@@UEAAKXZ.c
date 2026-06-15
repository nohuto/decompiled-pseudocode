/*
 * XREFs of ?AddRef@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140020DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001EF68 (-SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::AddRef(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 8));
  if ( v1 == 2 )
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return v1;
}
