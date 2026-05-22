/*
 * XREFs of ?Thunk_Materialize_BamoMagnifierControllerProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801181B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoMagnifierControllerProxy_5(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *a1,
        unsigned int **a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  return BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoMagnifierControllerProxy(
           a1,
           (struct Microsoft::BamoImpl::BaseBamoConnectionImpl *)**a2,
           a3,
           a4);
}
