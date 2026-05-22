/*
 * XREFs of ?Release@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x180065E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::Release(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return Microsoft::BamoImpl::BufferingMessageCallHost::Release(
           (Microsoft::BamoImpl::BamoImplObject *)(a1 - 24),
           a2,
           a3,
           a4);
}
