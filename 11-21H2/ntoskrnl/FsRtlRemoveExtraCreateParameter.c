/*
 * XREFs of FsRtlRemoveExtraCreateParameter @ 0x14072AC10
 * Callers:
 *     sub_1402A22E0 @ 0x1402A22E0 (sub_1402A22E0.c)
 *     sub_1402A4DEC @ 0x1402A4DEC (sub_1402A4DEC.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  __int64 *v5; // rax
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  NTSTATUS result; // eax
  __int64 *v9; // rcx
  __int64 **v10; // rdx
  int v11; // ecx

  *EcpContext = 0LL;
  v5 = (__int64 *)*((_QWORD *)EcpList + 1);
  v6 = -1073741275;
  if ( v5 == (__int64 *)((char *)EcpList + 8) )
    return v6;
  while ( 1 )
  {
    v7 = v5[2] - *(_QWORD *)&EcpType->Data1;
    if ( !v7 )
      v7 = v5[3] - *(_QWORD *)EcpType->Data4;
    if ( !v7 )
      break;
    v5 = (__int64 *)*v5;
    if ( v5 == (__int64 *)((char *)EcpList + 8) )
      return v6;
  }
  *((_DWORD *)v5 + 10) |= 4u;
  v6 = 0;
  v9 = (__int64 *)*v5;
  if ( *(__int64 **)(*v5 + 8) != v5 || (v10 = (__int64 **)v5[1], *v10 != v5) )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = (__int64)v10;
  v5[1] = 0LL;
  *v5 = 0LL;
  *EcpContext = v5 + 8;
  if ( !EcpContextSize )
    return v6;
  v11 = *((_DWORD *)v5 + 11);
  result = 0;
  *EcpContextSize = v11 - 72;
  return result;
}
