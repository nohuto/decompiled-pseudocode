/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x14073E0A0
 * Callers:
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     PspCreateUserProcessEcp @ 0x1406B9360 (PspCreateUserProcessEcp.c)
 *     FsRtlpCleanupEcps @ 0x14073E1D0 (FsRtlpCleanupEcps.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1407CD8CC (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B70 (ExFreeToNPagedLookasideList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14073E120 (FsRtlFreeExtraCreateParameter.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  _LIST_ENTRY *p_EcpList; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v4; // rax

  p_EcpList = &EcpList->EcpList;
  while ( 1 )
  {
    Flink = p_EcpList->Flink;
    if ( p_EcpList->Flink == p_EcpList )
      break;
    if ( Flink->Blink != p_EcpList || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_EcpList->Flink = v4;
    v4->Blink = p_EcpList;
    Flink->Blink = 0LL;
    Flink->Flink = 0LL;
    FsRtlFreeExtraCreateParameter(&Flink[4]);
  }
  if ( (EcpList->Flags & 4) != 0 )
    ExFreeToNPagedLookasideList(&FsRtlEcpListLookaside, EcpList);
  else
    ExFreePoolWithTag(EcpList, 0);
}
