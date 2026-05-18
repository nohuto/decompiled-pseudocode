/*
 * XREFs of ?GetFloat@JsonConfigurationManager@Utils@Spectre@@UEBAMAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@M@Z @ 0x1800DE720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

float __fastcall Spectre::Utils::JsonConfigurationManager::GetFloat(__int64 a1)
{
  return (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
}
