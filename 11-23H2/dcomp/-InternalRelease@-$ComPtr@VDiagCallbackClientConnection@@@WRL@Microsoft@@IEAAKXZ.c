/*
 * XREFs of ?InternalRelease@?$ComPtr@VDiagCallbackClientConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18016C9E0
 * Callers:
 *     ??1DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@QEAA@XZ @ 0x1800957EC (--1DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Initialize@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAAXPEAK@Z @ 0x18016C764 (-Initialize@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAAXPEAK@Z.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18016DE3C (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<DiagCallbackClientConnection>::InternalRelease(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *v1; // rdx
  unsigned int result; // eax

  v1 = *a1;
  result = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::Bamo::BaseBamoConnection::Release(v1);
  }
  return result;
}
