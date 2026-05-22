/*
 * XREFs of ?InternalRelease@?$ComPtr@VBamoShellHandwritingHostClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180064260
 * Callers:
 *     ??1ShellHandwritingProcessor@@UEAA@XZ @ 0x180063F5C (--1ShellHandwritingProcessor@@UEAA@XZ.c)
 *     ?OnShellHandwritingHostClientRegistered@ShellHandwritingProcessor@@UEAAXPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x1800645C0 (-OnShellHandwritingHostClientRegistered@ShellHandwritingProcessor@@UEAAXPEAVBamoShellHandwriting.c)
 *     ?OnShellHandwritingHostClientUnregistered@ShellHandwritingProcessor@@UEAAXPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x180064650 (-OnShellHandwritingHostClientUnregistered@ShellHandwritingProcessor@@UEAAXPEAVBamoShellHandwriti.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<BamoShellHandwritingHostClientProxy>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}
