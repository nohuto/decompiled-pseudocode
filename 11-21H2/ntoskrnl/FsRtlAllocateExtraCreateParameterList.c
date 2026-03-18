/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x14066F3B0
 * Callers:
 *     PspCreateUserProcessEcp @ 0x14066F248 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406B9EA8 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
    ++FsRtlEcpListLookaside.L.TotalAllocates;
    Pool2 = (struct _ECP_LIST *)RtlpInterlockedPopEntrySList(&FsRtlEcpListLookaside.L.ListHead);
    if ( !Pool2 )
    {
      ++FsRtlEcpListLookaside.L.AllocateMisses;
      Pool2 = (struct _ECP_LIST *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))FsRtlEcpListLookaside.L.AllocateEx)(
                                    (unsigned int)FsRtlEcpListLookaside.L.Type,
                                    FsRtlEcpListLookaside.L.Size,
                                    FsRtlEcpListLookaside.L.Tag);
    }
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
