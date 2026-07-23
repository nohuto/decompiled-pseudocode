/*
 * XREFs of FsRtlFindExtraCreateParameter @ 0x14072AB80
 * Callers:
 *     sub_14024013C @ 0x14024013C (sub_14024013C.c)
 *     sub_1402A22E0 @ 0x1402A22E0 (sub_1402A22E0.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     sub_1406EACD8 @ 0x1406EACD8 (sub_1406EACD8.c)
 *     sub_14071C4C0 @ 0x14071C4C0 (sub_14071C4C0.c)
 *     sub_1409369D0 @ 0x1409369D0 (sub_1409369D0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlFindExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  __int64 *v5; // rax
  __int64 v6; // rdx

  if ( EcpContext )
    *EcpContext = 0LL;
  if ( EcpContextSize )
    *EcpContextSize = 0;
  v5 = (__int64 *)*((_QWORD *)EcpList + 1);
  if ( v5 == (__int64 *)((char *)EcpList + 8) )
    return -1073741275;
  while ( 1 )
  {
    v6 = v5[2] - *(_QWORD *)&EcpType->Data1;
    if ( !v6 )
      v6 = v5[3] - *(_QWORD *)EcpType->Data4;
    if ( !v6 )
      break;
    v5 = (__int64 *)*v5;
    if ( v5 == (__int64 *)((char *)EcpList + 8) )
      return -1073741275;
  }
  *((_DWORD *)v5 + 10) |= 4u;
  if ( EcpContext )
    *EcpContext = v5 + 8;
  if ( EcpContextSize )
    *EcpContextSize = *((_DWORD *)v5 + 11) - 72;
  return 0;
}
