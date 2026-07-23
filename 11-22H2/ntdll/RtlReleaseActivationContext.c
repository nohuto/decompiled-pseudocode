/*
 * XREFs of RtlReleaseActivationContext @ 0x180033EF0
 * Callers:
 *     LdrRemoveLoadAsDataTable @ 0x180008560 (LdrRemoveLoadAsDataTable.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001D1D8 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     TppCleanupGroupMemberDestroy @ 0x180033198 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x1800333E4 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueueWorkItem @ 0x18004CB70 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x18004CF70 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18004FAA0 (RtlpTpWorkUnposted.c)
 *     LdrpFindDllActivationContext @ 0x180071890 (LdrpFindDllActivationContext.c)
 *     RtlFreeActivationContextStack @ 0x180073910 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x1800739F0 (RtlDeactivateActivationContext.c)
 *     RtlDispatchAPC @ 0x18007F6D0 (RtlDispatchAPC.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180079D50 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x180085814 (RtlpFreeActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800E9FFC (RtlpMoveActCtxToFreeList.c)
 */

void __cdecl RtlReleaseActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG i; // eax
  int v3; // edi

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && (unsigned int)(ActivationContext->RefCount - 1) <= 0x7FFFFFFD )
  {
    for ( i = ActivationContext->RefCount; i != 0x7FFFFFFF; i = ActivationContext->RefCount )
    {
      v3 = i - 1;
      if ( i == _InterlockedCompareExchange(&ActivationContext->RefCount, i - 1, i) )
        goto LABEL_7;
    }
    v3 = 0x7FFFFFFF;
LABEL_7:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        &ActivationContext[1].NotificationContext
      + 4
      * (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&ActivationContext[1].NotificationRoutine,
                             1u)
        + 1) & 3),
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(ActivationContext);
      else
        RtlpFreeActivationContext(ActivationContext);
    }
  }
}
