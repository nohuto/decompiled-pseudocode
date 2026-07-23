/*
 * XREFs of FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14071E5C0
 * Callers:
 *     sub_1406B9EA8 @ 0x1406B9EA8 (sub_1406B9EA8.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x140797F80 (FsRtlAllocateExtraCreateParameter.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterFromLookasideList(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        PVOID LookasideList,
        PVOID *EcpContext)
{
  ULONG v6; // esi
  int v8; // edi
  __int64 v10; // rax
  GUID v11; // xmm0

  v6 = SizeOfContext + 72;
  v8 = 66;
  if ( (Flags & 2) == 0 )
    v8 = 2;
  if ( v6 > *((_DWORD *)LookasideList + 11) )
    return FsRtlAllocateExtraCreateParameter(
             EcpType,
             SizeOfContext,
             (unsigned __int8)Flags,
             CleanupCallback,
             *((_DWORD *)LookasideList + 10),
             EcpContext);
  if ( (Flags & 2) != 0 )
  {
    v10 = (__int64)sub_140202234((__int64)LookasideList);
  }
  else
  {
    ++*((_DWORD *)LookasideList + 5);
    v10 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)LookasideList);
    if ( v10 )
    {
LABEL_6:
      *(_QWORD *)v10 = 1215324997LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_QWORD *)(v10 + 8) = 0LL;
      v11 = *EcpType;
      *(_QWORD *)(v10 + 64) = 0LL;
      *(_QWORD *)(v10 + 40) = CleanupCallback;
      *(GUID *)(v10 + 24) = v11;
      *(_DWORD *)(v10 + 48) = v8;
      *(_DWORD *)(v10 + 52) = v6;
      *(_QWORD *)(v10 + 56) = LookasideList;
      *EcpContext = (PVOID)(v10 + 72);
      return 0;
    }
    ++*((_DWORD *)LookasideList + 6);
    v10 = sub_14042A5E0(*((unsigned int *)LookasideList + 9), *((unsigned int *)LookasideList + 11));
  }
  if ( v10 )
    goto LABEL_6;
  *EcpContext = 0LL;
  return -1073741670;
}
