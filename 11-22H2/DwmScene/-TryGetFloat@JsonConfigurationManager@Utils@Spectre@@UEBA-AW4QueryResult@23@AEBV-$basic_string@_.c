/*
 * XREFs of ?TryGetFloat@JsonConfigurationManager@Utils@Spectre@@UEBA?AW4QueryResult@23@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAM@Z @ 0x1800DF0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Utils::JsonConfigurationManager::TryGetFloat(__int64 a1, __int64 a2, float *a3)
{
  __int64 result; // rax
  double v5; // [rsp+30h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(__int64, __int64, double *))(*(_QWORD *)a1 + 120LL))(a1, a2, &v5);
  if ( !(_DWORD)result )
    *a3 = v5;
  return result;
}
