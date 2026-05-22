/*
 * XREFs of ?Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800B22D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_MarkPrincipalReadyOnPropertiesRefreshed_5(
        __int64 a1,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::MarkPrincipalReadyOnPropertiesRefreshed(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
           a2,
           **(_DWORD **)a2);
}
