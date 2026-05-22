/*
 * XREFs of ?GetConnection@BamoSystemContextManagerPrincipal@@QEBAPEAVBamoConnection@ISMBamos_AutoBamos@@XZ @ 0x18004E150
 * Callers:
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x1801346CC (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
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
