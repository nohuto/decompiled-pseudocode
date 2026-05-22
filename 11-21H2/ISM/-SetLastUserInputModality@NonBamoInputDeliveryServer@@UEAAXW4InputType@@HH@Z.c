/*
 * XREFs of ?SetLastUserInputModality@NonBamoInputDeliveryServer@@UEAAXW4InputType@@HH@Z @ 0x180154600
 * Callers:
 *     <none>
 * Callees:
 *     ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x180155C5C (-SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z.c)
 *     ?SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z @ 0x180155CFC (-SetLastUserInputModality@InputModalityManager@@QEAA_NW4InputDeviceTypeEx@@HHK@Z.c)
 */

void __fastcall NonBamoInputDeliveryServer::SetLastUserInputModality(__int64 a1)
{
  InputModalityManager *v1; // rcx
  __int64 v2; // r10

  if ( (unsigned __int8)InputModalityManager::SetLastUserInputModality(a1 + 288) )
    InputModalityManager::SendInputModalityToInputService(v1, *(struct IInputServiceProxy **)(v2 + 280));
}
