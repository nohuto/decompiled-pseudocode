/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x140739F00
 * Callers:
 *     PspCreateUserProcessEcp @ 0x1406B9390 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1407CDB9C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6DC0 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterList(FSRTL_ALLOCATE_ECPLIST_FLAGS Flags, PECP_LIST *EcpList)
{
  struct _ECP_LIST *Pool2; // rax
  int v4; // edx

  *EcpList = 0LL;
  if ( (Flags & 1) != 0 )
  {
    Pool2 = (struct _ECP_LIST *)ExAllocatePool2(259LL, 24LL, 1818579782LL);
    v4 = 2;
  }
  else
  {
    Pool2 = (struct _ECP_LIST *)ExAllocateFromNPagedLookasideList(&FsRtlEcpListLookaside);
    v4 = 6;
  }
  if ( !Pool2 )
    return -1073741670;
  Pool2->Flags = v4;
  Pool2->Signature = 1282433861;
  Pool2->EcpList.Blink = &Pool2->EcpList;
  Pool2->EcpList.Flink = &Pool2->EcpList;
  *EcpList = Pool2;
  return 0;
}
