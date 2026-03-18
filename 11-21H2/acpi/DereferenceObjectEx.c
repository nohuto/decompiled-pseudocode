/*
 * XREFs of DereferenceObjectEx @ 0x1C00189F4
 * Callers:
 *     DerefOf @ 0x1C000A880 (DerefOf.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C000C920 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C000CDE0 (GetPciAddressWorker.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseField @ 0x1C0015980 (ParseField.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C001817C (AMLIGetNameSpaceObjectNoLock.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     Field @ 0x1C0019CE0 (Field.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     AMLIIterateSiblingsNext @ 0x1C001BA54 (AMLIIterateSiblingsNext.c)
 *     AMLIFindNameSpaceObject @ 0x1C001F5E4 (AMLIFindNameSpaceObject.c)
 *     EnableDisableCMOSRegions @ 0x1C0020180 (EnableDisableCMOSRegions.c)
 *     Load @ 0x1C0022220 (Load.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 *     CreateNativeNameSpaceObject @ 0x1C0027F50 (CreateNativeNameSpaceObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0028690 (AMLIApplyNamespaceOverride.c)
 *     PerformMutexDriverCallbacks @ 0x1C002AEB8 (PerformMutexDriverCallbacks.c)
 *     Alias @ 0x1C002C5D0 (Alias.c)
 *     IndexField @ 0x1C002E000 (IndexField.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005D960 (InternalRawAccessOpRegionHandler.c)
 *     Simulator_EvaluateNode @ 0x1C0064D80 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0065048 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C00654A0 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00655C8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0065AA0 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0065C08 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0065D84 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0066118 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C00662A8 (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C0066C60 (ParseDLMObjectInternal.c)
 *     DebugNotify @ 0x1C00673F0 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C00676F0 (DebugRunMethod.c)
 *     BankField @ 0x1C0068620 (BankField.c)
 *     FreeContext @ 0x1C00694F8 (FreeContext.c)
 *     LoadTable @ 0x1C006A0B0 (LoadTable.c)
 *     ParseNestedContext @ 0x1C006BFA0 (ParseNestedContext.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 */

void __fastcall DereferenceObjectEx(unsigned __int64 a1)
{
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(a1 + 64) |= 4u;
    if ( (*(_WORD *)(a1 + 64) & 0x40) == 0 )
      FreeNameSpaceObjects(a1);
  }
}
