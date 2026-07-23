/*
 * XREFs of ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140417E2C
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpGetSearchKeyInfo_V7 @ 0x1404182F4 (ApiSetpGetSearchKeyInfo_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14041847C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x140418C9C (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertGroupContractEntry @ 0x140418D84 (ApiSetSchemaExpander_InsertGroupContractEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x140418E7C (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140418F70 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 */

__int64 __fastcall ApiSetCompose_ProcessV7Extension_Phase1(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int inserted; // esi
  __int64 v6; // r14
  bool v7; // cf
  unsigned int v8; // ecx
  __int64 v9; // r13
  __int64 v10; // r12
  unsigned __int16 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // r9d
  char v16; // r15
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  char v19; // r15
  int v20; // eax
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned int v23; // r15d
  __int64 v24; // rcx
  unsigned int *v25; // r14
  __int64 v26; // rax
  unsigned int v27; // r10d
  unsigned __int64 v28; // rdx
  unsigned int v29; // r11d
  char v30; // r14
  unsigned int v31; // eax
  unsigned int v32; // r11d
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v42; // [rsp+20h] [rbp-30h]
  int v43; // [rsp+20h] [rbp-30h]
  unsigned int v44; // [rsp+30h] [rbp-20h]
  int v45; // [rsp+34h] [rbp-1Ch]
  unsigned int v46; // [rsp+38h] [rbp-18h]
  __int64 v47; // [rsp+40h] [rbp-10h]
  __int64 v48; // [rsp+48h] [rbp-8h]
  char v49; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int16 v50; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v51; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 16);
  inserted = 0;
  if ( !(_WORD)v2
    || (v6 = a1 + *(unsigned int *)(a1 + 8),
        (unsigned int)ApiSetpSearchForSectionIndex_V7(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL, v6, v2, 0) != -1)
    || (inserted = ApiSetSchemaExpander_InsertExtensionNameEntry(a2, v6, *(unsigned __int16 *)(a1 + 16)), inserted >= 0) )
  {
    v7 = *(_WORD *)(a1 + 18) != 0;
    v8 = 0;
    while ( 1 )
    {
      v46 = v8;
      if ( !v7 )
        return (unsigned int)inserted;
      v9 = a1 + *(unsigned int *)(a1 + 12);
      v49 = 0;
      v50 = 0;
      v10 = 5LL * v8;
      v11 = *(_WORD *)(v9 + 20LL * v8 + 8);
      v12 = a1 + *(unsigned int *)(v9 + 20LL * v8);
      if ( !(unsigned __int8)ApiSetpGetSearchKeyInfo_V7(
                               (int)a1 + *(_DWORD *)(v9 + 20LL * v8),
                               v11,
                               0,
                               (unsigned int)&v50,
                               (__int64)&v49) )
        return (unsigned int)-1073741823;
      v13 = *(_QWORD *)(a2 + 32);
      LOBYTE(v42) = 0;
      v44 = -1;
      v45 = -1;
      if ( !v49 )
        break;
      v14 = ApiSetpSearchForSectionIndex_V7(v13, v13 + 40, v12, v50, v42);
      v15 = v14;
      v51 = v14;
      if ( v14 != -1 )
      {
        v17 = *(_QWORD *)(a2 + 32);
        v18 = v17
            + v14 * (unsigned __int64)*(unsigned __int8 *)(v17 + 50)
            - *(unsigned __int16 *)(v17 + 6)
            + *(unsigned int *)(v17 + 40);
        v19 = *(_BYTE *)(v18 + 22);
        v44 = *(_DWORD *)(v18 + 12);
        v20 = *(_DWORD *)(v18 + 16);
LABEL_22:
        v45 = v20;
        v16 = v19 & 1;
        goto LABEL_23;
      }
      v16 = 0;
      inserted = ApiSetSchemaExpander_InsertGroupContractEntry(a2, v12, v50, &v51);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v17 = *(_QWORD *)(a2 + 32);
      v15 = v51;
LABEL_23:
      if ( v16 )
        goto LABEL_35;
      if ( v49 )
      {
        *(_DWORD *)(*(unsigned int *)(v17 + 40)
                  + v17
                  + v15 * (unsigned __int64)*(unsigned __int8 *)(v17 + 50)
                  - *(unsigned __int16 *)(v17 + 6)
                  + 8) = *(_DWORD *)(v9 + 4 * v10 + 12);
        goto LABEL_16;
      }
LABEL_14:
      v22 = v17
          + v15 * (unsigned __int64)*(unsigned __int8 *)(v17 + 62)
          - *(unsigned __int16 *)(v17 + 6)
          + *(unsigned int *)(v17 + 52);
      *(_BYTE *)(v22 + 18) = *(_BYTE *)(v9 + 4 * v10 + 16);
      if ( (*(_BYTE *)(v9 + 4 * v10 + 17) & 4) != 0 )
        *(_BYTE *)(v22 + 19) |= 4u;
LABEL_16:
      v23 = 0;
      if ( *(_WORD *)(v9 + 4 * v10 + 10) )
      {
        v47 = v15;
        do
        {
          v24 = *(_QWORD *)(a2 + 32);
          LOBYTE(v43) = 1;
          v25 = (unsigned int *)(a1 + 16LL * v23 + *(unsigned int *)(v9 + 4 * v10 + 4));
          v26 = a1 + *v25;
          v50 = *((_WORD *)v25 + 4);
          v48 = v26;
          v51 = ApiSetpSearchForSectionIndex_V7(v24, v24 + 76, v26, v50, v43);
          v27 = v51;
          if ( v51 == -1 )
          {
            inserted = ApiSetSchemaExpander_InsertHostEntry(a2, v48, v50, &v51);
            if ( inserted < 0 )
              return (unsigned int)inserted;
            v27 = v51;
          }
          if ( *((_WORD *)v25 + 5) )
          {
            v29 = *(_DWORD *)(a2 + 140);
            v30 = 1;
            v31 = v29 + 16;
            v32 = v29 >> 4;
            *(_DWORD *)(a2 + 140) = v31;
            v33 = *(_QWORD *)(a2 + 32);
            v34 = *(unsigned __int16 *)(v33 + 6);
            v35 = v33 + *(unsigned int *)(v33 + 88) + v32 * (unsigned __int64)*(unsigned __int16 *)(v33 + 98) - v34;
            v36 = *(unsigned int *)(v33 + 76) + v44 * (unsigned __int64)*(unsigned __int8 *)(v33 + 86) - v34;
            *(_DWORD *)(v35 + 8) = *(_DWORD *)(v36 + v33);
            *(_WORD *)(v35 + 14) = *(_WORD *)(v36 + v33 + 4);
            v37 = *(_QWORD *)(a2 + 32)
                + v27 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 86LL)
                - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 6LL)
                + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 76LL);
            *(_DWORD *)(v35 + 4) = *(_DWORD *)v37;
            *(_WORD *)(v35 + 12) = *(_WORD *)(v37 + 4);
            *(_DWORD *)v35 = v45;
          }
          else
          {
            v30 = 0;
            v32 = -1;
          }
          v38 = *(_QWORD *)(a2 + 32);
          if ( v49 )
          {
            v39 = v38
                + *(unsigned int *)(v38 + 40)
                + v47 * *(unsigned __int8 *)(v38 + 50)
                - *(unsigned __int16 *)(v38 + 6);
            *(_BYTE *)(v39 + 22) |= 2u;
            *(_DWORD *)(v39 + 12) = v27;
            if ( v30 )
            {
              *(_DWORD *)(v39 + 16) = v32;
              ++*(_WORD *)(v39 + 20);
            }
          }
          else
          {
            v40 = v38
                + *(unsigned int *)(v38 + 52)
                + v47 * *(unsigned __int8 *)(v38 + 62)
                - *(unsigned __int16 *)(v38 + 6);
            *(_BYTE *)(v40 + 19) |= 2u;
            *(_DWORD *)(v40 + 8) = v27;
            if ( v30 )
            {
              *(_DWORD *)(v40 + 12) = v32;
              ++*(_WORD *)(v40 + 16);
            }
          }
          ++v23;
        }
        while ( v23 < *(unsigned __int16 *)(v9 + 4 * v10 + 10) );
      }
LABEL_35:
      v8 = v46 + 1;
      v7 = v46 + 1 < *(unsigned __int16 *)(a1 + 18);
    }
    v21 = ApiSetpSearchForSectionIndex_V7(v13, v13 + 52, v12, v50, v42);
    v15 = v21;
    v51 = v21;
    if ( v21 == -1 )
    {
      inserted = ApiSetSchemaExpander_InsertSemverContractEntry(a2, v12, v50, v11, 0, (__int64)&v51);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v17 = *(_QWORD *)(a2 + 32);
      v15 = v51;
      goto LABEL_14;
    }
    v17 = *(_QWORD *)(a2 + 32);
    v28 = v17
        + v21 * (unsigned __int64)*(unsigned __int8 *)(v17 + 62)
        - *(unsigned __int16 *)(v17 + 6)
        + *(unsigned int *)(v17 + 52);
    v19 = *(_BYTE *)(v28 + 19);
    v44 = *(_DWORD *)(v28 + 8);
    v20 = *(_DWORD *)(v28 + 12);
    goto LABEL_22;
  }
  return (unsigned int)inserted;
}
