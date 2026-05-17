/*
 * XREFs of RtlReleaseActivationContext @ 0x180033D90
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18001CFF8 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180033284 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueueWorkItem @ 0x18004CA10 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x18004CE10 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18004F940 (RtlpTpWorkUnposted.c)
 *     LdrpFindDllActivationContext @ 0x180071BB0 (LdrpFindDllActivationContext.c)
 *     LdrRemoveLoadAsDataTable @ 0x180071FE0 (LdrRemoveLoadAsDataTable.c)
 *     RtlFreeActivationContextStack @ 0x180073F80 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180074060 (RtlDeactivateActivationContext.c)
 *     RtlDispatchAPC @ 0x18007FD40 (RtlDispatchAPC.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18007A3C0 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x180086014 (RtlpFreeActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800EB32C (RtlpMoveActCtxToFreeList.c)
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
