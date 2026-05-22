/*
 * XREFs of ?GetConnection@BamoSystemContextManagerPrincipal@@QEBAPEAVBamoConnection@ISMBamos_AutoBamos@@XZ @ 0x18005FE90
 * Callers:
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18006230C (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18014ED54 (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
 * Callees:
 *     <none>
 */

struct ISMBamos_AutoBamos::BamoConnection *__fastcall BamoSystemContextManagerPrincipal::GetConnection(
        BamoSystemContextManagerPrincipal *this)
{
  __int64 v1; // rcx
  struct ISMBamos_AutoBamos::BamoConnection *result; // rax

  v1 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
  result = 0LL;
  if ( *(int *)(v1 + 8) > 0 )
    return *(struct ISMBamos_AutoBamos::BamoConnection **)(v1 + 16);
  return result;
}
