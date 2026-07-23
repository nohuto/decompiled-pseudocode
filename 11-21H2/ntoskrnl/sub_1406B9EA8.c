/*
 * XREFs of sub_1406B9EA8 @ 0x1406B9EA8
 * Callers:
 *     sub_1406B9A14 @ 0x1406B9A14 (sub_1406B9A14.c)
 *     sub_1406B9CBC @ 0x1406B9CBC (sub_1406B9CBC.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 * Callees:
 *     IoClearIrpExtraCreateParameter @ 0x140557450 (IoClearIrpExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14066EEA0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x14066F340 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14066F3B0 (FsRtlAllocateExtraCreateParameterList.c)
 *     IoGetIrpExtraCreateParameter @ 0x14069B6E0 (IoGetIrpExtraCreateParameter.c)
 *     IoSetIrpExtraCreateParameter @ 0x1406BA6F0 (IoSetIrpExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14071E5C0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 */

__int64 __fastcall sub_1406B9EA8(PIRP Irp, PVOID *EcpContext, unsigned __int16 a3)
{
  int v4; // ebx
  char v6; // r14
  NTSTATUS ParameterFromLookasideList; // edi
  struct _ECP_LIST *v8; // rbx
  PECP_LIST EcpList; // [rsp+58h] [rbp+10h] BYREF

  *EcpContext = 0LL;
  EcpList = 0LL;
  v4 = a3;
  v6 = 0;
  IoGetIrpExtraCreateParameter(Irp, &EcpList);
  ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterFromLookasideList(
                                 &EcpType,
                                 v4 + 32,
                                 0,
                                 (PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK)CleanupCallback,
                                 &unk_140CE2900,
                                 EcpContext);
  if ( ParameterFromLookasideList >= 0 )
  {
    v8 = EcpList;
    if ( EcpList )
      goto LABEL_5;
    ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterList(0, &EcpList);
    if ( ParameterFromLookasideList >= 0 )
    {
      v8 = EcpList;
      IoSetIrpExtraCreateParameter(Irp, EcpList);
      v6 = 1;
LABEL_5:
      ParameterFromLookasideList = FsRtlInsertExtraCreateParameter(v8, *EcpContext);
      if ( ParameterFromLookasideList >= 0 )
        return (unsigned int)ParameterFromLookasideList;
      goto LABEL_8;
    }
  }
  v8 = EcpList;
LABEL_8:
  if ( *EcpContext )
  {
    *((_QWORD *)*EcpContext + 1) = 0LL;
    FsRtlFreeExtraCreateParameter(*EcpContext);
    *EcpContext = 0LL;
  }
  if ( v6 )
  {
    FsRtlFreeExtraCreateParameterList(v8);
    IoClearIrpExtraCreateParameter(Irp);
  }
  return (unsigned int)ParameterFromLookasideList;
}
