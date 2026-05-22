/*
 * XREFs of ?InternalRelease@?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800623A4
 * Callers:
 *     ??1ShellHandwritingClientProxy@@UEAA@XZ @ 0x1800622A4 (--1ShellHandwritingClientProxy@@UEAA@XZ.c)
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18006230C (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 *     ?OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ @ 0x180062460 (-OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ.c)
 *     ??1ShellHandwritingProcessor@@UEAA@XZ @ 0x180063F5C (--1ShellHandwritingProcessor@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x180064740 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?Release@BamoInputSystemPrincipal@@UEAAKXZ @ 0x18001A4B0 (-Release@BamoInputSystemPrincipal@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ShellHandwritingHostServer>::InternalRelease(BamoInputSystemPrincipal **a1)
{
  __int64 result; // rax
  BamoInputSystemPrincipal *v2; // rdx

  result = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return BamoInputSystemPrincipal::Release(v2);
  }
  return result;
}
