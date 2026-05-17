/*
 * XREFs of RtlReleaseActivationContext @ 0x18001C640
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18001B960 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800458B4 (sxsisol_SearchActCtxForDllName.c)
 *     LdrRemoveLoadAsDataTable @ 0x180067870 (LdrRemoveLoadAsDataTable.c)
 *     RtlQueueWorkItem @ 0x180070160 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180071130 (RtlpTpWorkUnposted.c)
 *     LdrpFindDllActivationContext @ 0x180077370 (LdrpFindDllActivationContext.c)
 *     RtlFreeActivationContextStack @ 0x180078F00 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180079040 (RtlDeactivateActivationContext.c)
 *     RtlDispatchAPC @ 0x1800854E0 (RtlDispatchAPC.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18007FE00 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x1800896C4 (RtlpFreeActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800EAB50 (RtlpMoveActCtxToFreeList.c)
 */

void __fastcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  signed __int32 i; // eax
  int v3; // edi

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*a1 - 1) <= 0x7FFFFFFD )
  {
    for ( i = *a1; i != 0x7FFFFFFF; i = *a1 )
    {
      v3 = i - 1;
      if ( i == _InterlockedCompareExchange(a1, i - 1, i) )
        goto LABEL_7;
    }
    v3 = 0x7FFFFFFF;
LABEL_7:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&a1[8 * (((unsigned __int8)_InterlockedExchangeAdd(a1 + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(a1);
      else
        RtlpFreeActivationContext(a1);
    }
  }
}
