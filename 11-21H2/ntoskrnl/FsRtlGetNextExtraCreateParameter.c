/*
 * XREFs of FsRtlGetNextExtraCreateParameter @ 0x1406DED90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlGetNextExtraCreateParameter(
        PECP_LIST EcpList,
        PVOID CurrentEcpContext,
        LPGUID NextEcpType,
        PVOID *NextEcpContext,
        ULONG *NextEcpContextSize)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  NTSTATUS v8; // edx

  v5 = (_QWORD *)((char *)EcpList + 8);
  if ( CurrentEcpContext )
    v6 = (_QWORD *)*((_QWORD *)CurrentEcpContext - 8);
  else
    v6 = (_QWORD *)*v5;
  if ( v6 == v5 || (v7 = v6 - 1) == 0LL )
  {
    v8 = -1073741275;
    if ( NextEcpContext )
      *NextEcpContext = 0LL;
    if ( NextEcpContextSize )
      *NextEcpContextSize = 0;
    if ( NextEcpType )
      *NextEcpType = 0LL;
  }
  else
  {
    v8 = 0;
    if ( NextEcpContext )
      *NextEcpContext = v7 + 9;
    if ( NextEcpContextSize )
      *NextEcpContextSize = *((_DWORD *)v7 + 13) - 72;
    if ( NextEcpType )
      *NextEcpType = *(LPGUID)(v7 + 3);
  }
  return v8;
}
