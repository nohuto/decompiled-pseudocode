/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180048FE0
 * Callers:
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000C820 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000DF00 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000E3E0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x180014940 (-Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180014B80 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x1800398F0 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AA88 (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004AAAC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_EModernResourceEnforcer@@UEAAPEAXI@Z @ 0x18004F350 (--_EModernResourceEnforcer@@UEAAPEAXI@Z.c)
 *     ??_E?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180076200 (--_E-$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UE.c)
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x180082AC0 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18008BCC0 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ??1?$MakeAllocator@VCBackgroundAccessStateChangedListener@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008DEBC (--1-$MakeAllocator@VCBackgroundAccessStateChangedListener@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18008DF10 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAA.c)
 *     ??_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z @ 0x18008DF40 (--_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18008DF80 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free_0(Block);
}
