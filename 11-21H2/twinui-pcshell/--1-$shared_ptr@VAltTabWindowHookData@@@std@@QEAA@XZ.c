/*
 * XREFs of ??1?$shared_ptr@VAltTabWindowHookData@@@std@@QEAA@XZ @ 0x180180E7C
 * Callers:
 *     _AltTabWindowHook::AltTabWindowHook_::_1_::dtor$1 @ 0x18060DDF5 (_AltTabWindowHook--AltTabWindowHook_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::shared_ptr<AltTabWindowHookData>::~shared_ptr<AltTabWindowHookData>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
