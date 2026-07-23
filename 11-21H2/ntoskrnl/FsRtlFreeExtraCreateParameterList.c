/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x14066EEA0
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_14066EE14 @ 0x14066EE14 (sub_14066EE14.c)
 *     sub_14066F248 @ 0x14066F248 (sub_14066F248.c)
 *     sub_1406B9EA8 @ 0x1406B9EA8 (sub_1406B9EA8.c)
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  __int64 v1; // r8
  _QWORD **v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  v3 = (_QWORD **)((char *)EcpList + 8);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    v4[1] = 0LL;
    *v4 = 0LL;
    FsRtlFreeExtraCreateParameter(v4 + 8);
  }
  if ( (*((_DWORD *)EcpList + 1) & 4) != 0 )
    sub_140203D50((__int64)&stru_140CE1CC0, (_SLIST_ENTRY *)EcpList, v1);
  else
    ExFreePoolWithTag(EcpList, 0);
}
