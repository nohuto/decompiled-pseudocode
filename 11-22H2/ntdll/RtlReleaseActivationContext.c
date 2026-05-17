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
