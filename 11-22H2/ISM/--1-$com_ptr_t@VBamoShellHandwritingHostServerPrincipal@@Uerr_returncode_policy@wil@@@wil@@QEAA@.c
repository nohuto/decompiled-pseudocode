/*
 * XREFs of ??1?$com_ptr_t@VBamoShellHandwritingHostServerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180070498
 * Callers:
 *     ??1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18014A53C (--1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<BamoShellHandwritingHostServerPrincipal,wil::err_returncode_policy>::~com_ptr_t<BamoShellHandwritingHostServerPrincipal,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
