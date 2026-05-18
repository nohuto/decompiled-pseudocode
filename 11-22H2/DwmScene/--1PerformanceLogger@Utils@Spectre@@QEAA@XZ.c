/*
 * XREFs of ??1PerformanceLogger@Utils@Spectre@@QEAA@XZ @ 0x18001FDC8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VPerformanceLogger@Utils@Spectre@@@std@@EEAAXXZ @ 0x1800203E0 (-_Destroy@-$_Ref_count_obj2@VPerformanceLogger@Utils@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Utils::PerformanceLogger::~PerformanceLogger(std::_Ref_count_base **this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)*this + 8LL))(*this);
  v2 = this[5];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = this[3];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = this[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
