/*
 * XREFs of MiGetPfnLink @ 0x14037479C
 * Callers:
 *     MiFreeReadListPages @ 0x1407213E0 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14072147C (MiFreeReadListPageList.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14080E75C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     MmCreateShadowMapping @ 0x14081DBB0 (MmCreateShadowMapping.c)
 *     MiReturnReservedEnclavePages @ 0x140AAD6B0 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
