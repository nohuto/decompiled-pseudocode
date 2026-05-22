/*
 * XREFs of ?InternalRelease@?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180075174
 * Callers:
 *     ??1ShellHandwritingClientProxy@@UEAA@XZ @ 0x180075078 (--1ShellHandwritingClientProxy@@UEAA@XZ.c)
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x1800750DC (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 *     ?OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ @ 0x180075230 (-OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ.c)
 *     ??1ShellHandwritingProcessor@@UEAA@XZ @ 0x1800779FC (--1ShellHandwritingProcessor@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1800781C0 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?Release@BamoInputSystemPrincipal@@UEAAKXZ @ 0x18001ADE0 (-Release@BamoInputSystemPrincipal@@UEAAKXZ.c)
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
