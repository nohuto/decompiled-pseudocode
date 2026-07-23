/*
 * XREFs of FsRtlInsertExtraCreateParameter @ 0x14066F340
 * Callers:
 *     sub_14066F248 @ 0x14066F248 (sub_14066F248.c)
 *     sub_1406B9EA8 @ 0x1406B9EA8 (sub_1406B9EA8.c)
 *     sub_1406EACD8 @ 0x1406EACD8 (sub_1406EACD8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlInsertExtraCreateParameter(PECP_LIST EcpList, PVOID EcpContext)
{
  char *v2; // r8
  char *v3; // rax
  char *v4; // rcx
  char **v5; // rdx
  __int64 v7; // r9

  v2 = (char *)*((_QWORD *)EcpList + 1);
  v3 = (char *)EcpList + 8;
  if ( v2 == (char *)EcpList + 8 )
  {
LABEL_2:
    v4 = (char *)EcpContext - 64;
    v5 = (char **)*((_QWORD *)v3 + 1);
    if ( *v5 != v3 )
      __fastfail(3u);
    *(_QWORD *)v4 = v3;
    *((_QWORD *)v4 + 1) = v5;
    *v5 = v4;
    *((_QWORD *)v3 + 1) = v4;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)v2 + 2) - *((_QWORD *)EcpContext - 6);
      if ( !v7 )
        v7 = *((_QWORD *)v2 + 3) - *((_QWORD *)EcpContext - 5);
      if ( !v7 )
        break;
      v2 = *(char **)v2;
      if ( v2 == v3 )
        goto LABEL_2;
    }
    *((_DWORD *)v2 + 10) |= 4u;
    return -1073741811;
  }
}
