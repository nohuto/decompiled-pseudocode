/*
 * XREFs of ?attach@?$com_ptr_t@VCCpuClipAntialiasSinkContext@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVCCpuClipAntialiasSinkContext@@@Z @ 0x1801D6D50
 * Callers:
 *     ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801D2A58 (--4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<CCpuClipAntialiasSinkContext,wil::err_returncode_policy>::attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return result;
}
