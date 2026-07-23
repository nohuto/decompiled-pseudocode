/*
 * XREFs of ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x1404191FC
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpGetSearchKeyInfo_V7 @ 0x1404182F4 (ApiSetpGetSearchKeyInfo_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14041847C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetSchemaExpander_AddSpaceForSemverSearchKey @ 0x140418724 (ApiSetSchemaExpander_AddSpaceForSemverSearchKey.c)
 */

__int64 __fastcall ApiSetCompose_V7_ProcessV6Extension_Phase0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // r15d
  int v6; // r10d
  __int64 v7; // r14
  unsigned int v8; // eax
  int v9; // r12d
  int v10; // eax
  unsigned int v11; // r12d
  int v12; // r13d
  unsigned int v13; // eax
  __int64 v15; // [rsp+38h] [rbp-40h]
  char v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int16 v17; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int8 *v18; // [rsp+98h] [rbp+20h]

  v2 = 0;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v6 = 1;
    while ( 1 )
    {
      v7 = a1 + *(unsigned int *)(a1 + 16);
      if ( (*(_DWORD *)(v7 + 24LL * v5) & 4) == 0 )
        break;
      v8 = *(_DWORD *)(v7 + 24LL * v5 + 8);
      *(_DWORD *)(a2 + 184) += v6;
      *(_DWORD *)(a2 + 188) += 16;
      *(_DWORD *)(a2 + 208) += (v8 >> 1) + 1;
LABEL_16:
      v5 += v6;
      if ( v5 >= *(_DWORD *)(a1 + 12) )
        return v2;
    }
    v9 = *(_DWORD *)(v7 + 24LL * v5 + 8) >> 1;
    v10 = ApiSetpSearchForSectionIndex_V7(
            *(_QWORD *)(a2 + 8),
            (unsigned int *)(*(_QWORD *)(a2 + 8) + 76LL),
            (unsigned __int8 *)(a1 + *(unsigned int *)(v7 + 24LL * v5 + 4)),
            v9,
            v6);
    v6 = 1;
    if ( v10 == -1 )
    {
      ++*(_DWORD *)(a2 + 172);
      *(_DWORD *)(a2 + 176) += 20;
      *(_DWORD *)(a2 + 204) += 2 * (unsigned __int16)v9;
    }
    v11 = 0;
    if ( !*(_DWORD *)(v7 + 24LL * v5 + 20) )
      goto LABEL_16;
    while ( 1 )
    {
      v15 = a1 + *(unsigned int *)(v7 + 24LL * v5 + 16);
      v17 = 0;
      v12 = *(_DWORD *)(v15 + 20LL * v11 + 16) >> 1;
      v18 = (unsigned __int8 *)(a1 + *(unsigned int *)(v15 + 20LL * v11 + 12));
      if ( !ApiSetpGetSearchKeyInfo_V7((__int64)v18, v12, v6, &v17, &v16) )
        return (unsigned int)-1073741823;
      v13 = ApiSetpSearchForSectionIndex_V7(
              *(_QWORD *)(a2 + 8),
              (unsigned int *)(*(_QWORD *)(a2 + 8) + 52LL),
              v18,
              v17,
              1);
      v6 = 1;
      if ( v13 == -1 )
        break;
      if ( (*(_BYTE *)(*(unsigned int *)(*(_QWORD *)(a2 + 8) + 52LL)
                     + *(_QWORD *)(a2 + 8)
                     + v13 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + 62LL)
                     - *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 6LL)
                     + 19) & 1) == 0 )
        goto LABEL_13;
LABEL_15:
      v11 += v6;
      if ( v11 >= *(_DWORD *)(v7 + 24LL * v5 + 20) )
        goto LABEL_16;
    }
    ++*(_DWORD *)(a2 + 160);
    *(_DWORD *)(a2 + 164) += 28;
    ApiSetSchemaExpander_AddSpaceForSemverSearchKey(a2, (unsigned __int16)v12);
LABEL_13:
    if ( *(_DWORD *)(v15 + 20LL * v11 + 4) )
    {
      *(_WORD *)(a2 + 196) += v6;
      *(_DWORD *)(a2 + 200) += 16;
    }
    goto LABEL_15;
  }
  return v2;
}
