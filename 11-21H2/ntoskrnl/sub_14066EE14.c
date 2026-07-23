/*
 * XREFs of sub_14066EE14 @ 0x14066EE14
 * Callers:
 *     sub_14066E950 @ 0x14066E950 (sub_14066E950.c)
 *     sub_14066EBE0 @ 0x14066EBE0 (sub_14066EBE0.c)
 *     sub_1407F97EC @ 0x1407F97EC (sub_1407F97EC.c)
 *     sub_140936A54 @ 0x140936A54 (sub_140936A54.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x14066EEA0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 */

char __fastcall sub_14066EE14(__int64 a1)
{
  int v1; // eax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( (v1 & 0x3F0) != 0 )
  {
    *(_DWORD *)(a1 + 4) = v1 - 16;
    return 1;
  }
  if ( (v1 & 1) == 0 )
  {
    FsRtlFreeExtraCreateParameterList((PECP_LIST)a1);
    return 1;
  }
  v3 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 8);
  while ( v4 != v3 )
  {
    v5 = v4;
    v6 = v4;
    v4 = (_QWORD *)*v4;
    if ( (v5[5] & 1) == 0 )
    {
      if ( (_QWORD *)v4[1] != v5 || (v7 = (_QWORD *)v6[1], (_QWORD *)*v7 != v6) )
        __fastfail(3u);
      *v7 = v4;
      v4[1] = v7;
      *v6 = 0LL;
      v5[1] = 0LL;
      FsRtlFreeExtraCreateParameter(v5 + 8);
    }
  }
  return 0;
}
