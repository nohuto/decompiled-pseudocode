/*
 * XREFs of ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1404193F0
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpGetSearchKeyInfo_V7 @ 0x1404182F4 (ApiSetpGetSearchKeyInfo_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14041847C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x140418C9C (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x140418E7C (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140418F70 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 */

__int64 __fastcall ApiSetCompose_V7_ProcessV6Extension_Phase1(__int64 a1, __int64 a2)
{
  int inserted; // ebx
  unsigned int v5; // r13d
  __int64 v6; // rcx
  __int64 v7; // r12
  void *v8; // rsi
  int v9; // edi
  unsigned int v10; // esi
  unsigned __int8 *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r11
  unsigned int v15; // r10d
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned int v21; // eax
  int v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+40h] [rbp-48h]
  unsigned int v25; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int16 v26; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v27; // [rsp+A8h] [rbp+20h] BYREF

  inserted = 0;
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 12) )
    return (unsigned int)inserted;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a2 + 32);
    v7 = a1 + *(unsigned int *)(a1 + 16);
    v8 = (void *)(a1 + *(unsigned int *)(v7 + 24LL * v5 + 4));
    v9 = *(_DWORD *)(v7 + 24LL * v5 + 8) >> 1;
    if ( (*(_DWORD *)(v7 + 24LL * v5) & 4) != 0 )
    {
      if ( (unsigned int)ApiSetpSearchForSectionIndex_V7(v6, (unsigned int *)(v6 + 64), (unsigned __int8 *)v8, v9, 0) == -1 )
      {
        inserted = ApiSetSchemaExpander_InsertExtensionNameEntry(a2, v8, v9);
        if ( inserted < 0 )
          return (unsigned int)inserted;
      }
      goto LABEL_18;
    }
    v27 = ApiSetpSearchForSectionIndex_V7(v6, (unsigned int *)(v6 + 76), (unsigned __int8 *)v8, v9, 1);
    if ( v27 == -1 )
    {
      inserted = ApiSetSchemaExpander_InsertHostEntry(a2, v8, v9, &v27);
      if ( inserted < 0 )
        return (unsigned int)inserted;
    }
    v10 = 0;
    if ( *(_DWORD *)(v7 + 24LL * v5 + 20) )
      break;
LABEL_18:
    if ( ++v5 >= *(_DWORD *)(a1 + 12) )
      return (unsigned int)inserted;
  }
  while ( 1 )
  {
    v26 = 0;
    v24 = a1 + *(unsigned int *)(v7 + 24LL * v5 + 16);
    v11 = (unsigned __int8 *)(a1 + *(unsigned int *)(v24 + 20LL * v10 + 12));
    v23 = *(_DWORD *)(v24 + 20LL * v10 + 16) >> 1;
    if ( !ApiSetpGetSearchKeyInfo_V7((__int64)v11, v23, 1, &v26, &v25) )
      break;
    v12 = ApiSetpSearchForSectionIndex_V7(
            *(_QWORD *)(a2 + 32),
            (unsigned int *)(*(_QWORD *)(a2 + 32) + 52LL),
            v11,
            v26,
            1);
    v25 = v12;
    if ( v12 == -1 )
    {
      inserted = ApiSetSchemaExpander_InsertSemverContractEntry(a2, v11, v26, v23, 1, &v25);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v12 = v25;
    }
    v13 = *(_QWORD *)(a2 + 32);
    v14 = v13
        + *(unsigned int *)(v13 + 52)
        + v12 * (unsigned __int64)*(unsigned __int8 *)(v13 + 62)
        - *(unsigned __int16 *)(v13 + 6);
    if ( (*(_BYTE *)(v14 + 19) & 1) == 0 )
    {
      if ( *(_DWORD *)(v24 + 20LL * v10 + 4) )
      {
        v15 = *(_DWORD *)(a2 + 140);
        v16 = v15 + 16;
        v15 >>= 4;
        *(_DWORD *)(a2 + 140) = v16;
        v17 = *(unsigned __int16 *)(v13 + 6);
        v18 = v13 + *(unsigned int *)(v13 + 88) + v15 * (unsigned __int64)*(unsigned __int16 *)(v13 + 98) - v17;
        v19 = *(unsigned int *)(v13 + 76)
            + *(unsigned int *)(v14 + 8) * (unsigned __int64)*(unsigned __int8 *)(v13 + 86)
            - v17;
        *(_DWORD *)(v18 + 8) = *(_DWORD *)(v19 + v13);
        *(_WORD *)(v18 + 14) = *(_WORD *)(v19 + v13 + 4);
        v20 = *(_QWORD *)(a2 + 32)
            + v27 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 86LL)
            - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 6LL)
            + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 76LL);
        *(_DWORD *)(v18 + 4) = *(_DWORD *)v20;
        *(_WORD *)(v18 + 12) = *(_WORD *)(v20 + 4);
        *(_DWORD *)v18 = *(_DWORD *)(v14 + 12);
        ++*(_WORD *)(v14 + 16);
        *(_DWORD *)(v14 + 12) = v15;
      }
      v21 = v27;
      *(_BYTE *)(v14 + 19) |= 2u;
      *(_DWORD *)(v14 + 8) = v21;
    }
    if ( ++v10 >= *(_DWORD *)(v7 + 24LL * v5 + 20) )
      goto LABEL_18;
  }
  return (unsigned int)-1073741823;
}
