/*
 * XREFs of memset @ 0x180016A5E
 * Callers:
 *     sub_1800060F8 @ 0x1800060F8 (sub_1800060F8.c)
 *     sub_18000635C @ 0x18000635C (sub_18000635C.c)
 *     sub_1800063D4 @ 0x1800063D4 (sub_1800063D4.c)
 *     HamPopulateActivityProperties @ 0x180006CB0 (HamPopulateActivityProperties.c)
 *     sub_180007760 @ 0x180007760 (sub_180007760.c)
 *     sub_1800079B0 @ 0x1800079B0 (sub_1800079B0.c)
 *     sub_180008150 @ 0x180008150 (sub_180008150.c)
 *     HamHostIdInitializeKey @ 0x180008400 (HamHostIdInitializeKey.c)
 *     RmResourceSetPropertiesInitialize @ 0x180008FB0 (RmResourceSetPropertiesInitialize.c)
 *     sub_18000CB2C @ 0x18000CB2C (sub_18000CB2C.c)
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     sub_18001056C @ 0x18001056C (sub_18001056C.c)
 *     sub_180011578 @ 0x180011578 (sub_180011578.c)
 *     sub_180012B40 @ 0x180012B40 (sub_180012B40.c)
 *     sub_180012CD4 @ 0x180012CD4 (sub_180012CD4.c)
 *     sub_180013460 @ 0x180013460 (sub_180013460.c)
 *     sub_180013AD0 @ 0x180013AD0 (sub_180013AD0.c)
 *     sub_180014FB0 @ 0x180014FB0 (sub_180014FB0.c)
 *     sub_18001599C @ 0x18001599C (sub_18001599C.c)
 *     HamCompleteExtendedExecution @ 0x18001D330 (HamCompleteExtendedExecution.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}
