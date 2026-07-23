/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x14066EF20
 * Callers:
 *     sub_140203B8C @ 0x140203B8C (sub_140203B8C.c)
 *     sub_1402A22E0 @ 0x1402A22E0 (sub_1402A22E0.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     sub_14066EE14 @ 0x14066EE14 (sub_14066EE14.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14066EEA0 (FsRtlFreeExtraCreateParameterList.c)
 *     sub_14066F248 @ 0x14066F248 (sub_14066F248.c)
 *     sub_1406B9A14 @ 0x1406B9A14 (sub_1406B9A14.c)
 *     sub_1406B9EA8 @ 0x1406B9EA8 (sub_1406B9EA8.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  __int64 v1; // r8
  __int64 v2; // rdi
  __int64 v4; // rcx
  _SLIST_ENTRY *v5; // rdx
  __int64 v6; // rdx

  v2 = 0LL;
  if ( *((_QWORD *)EcpContext - 4) )
    sub_14042A5E0(EcpContext, (char *)EcpContext - 48);
  if ( (*((_DWORD *)EcpContext - 6) & 0x20) != 0 && qword_140D00A28 )
  {
    v2 = *((_QWORD *)EcpContext - 1);
    sub_14042A5E0(v2, EcpContext);
  }
  v4 = *((_QWORD *)EcpContext - 2);
  if ( v4 )
  {
    v5 = (_SLIST_ENTRY *)((char *)EcpContext - 72);
    if ( (*((_DWORD *)EcpContext - 6) & 0x40) != 0 )
      sub_140203D88(v4, v5, v1);
    else
      sub_140203D50(v4, v5, v1);
  }
  else
  {
    ExFreePoolWithTag((char *)EcpContext - 72, 0);
  }
  if ( v2 )
    sub_14042A5E0(v2, v6);
}
