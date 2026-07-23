/*
 * XREFs of MiGetPfnLink @ 0x14037493C
 * Callers:
 *     MiFreeReadListPages @ 0x1407215E0 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14072167C (MiFreeReadListPageList.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14080EA2C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MmCreateShadowMapping @ 0x14081DE80 (MmCreateShadowMapping.c)
 *     MiReturnReservedEnclavePages @ 0x140AAD520 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
