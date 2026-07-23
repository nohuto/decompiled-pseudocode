/*
 * XREFs of ApiSetCompose_ProcessV7Extension_Phase0 @ 0x140417BDC
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpGetSearchKeyInfo_V7 @ 0x1404182F4 (ApiSetpGetSearchKeyInfo_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14041847C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetSchemaExpander_AddSpaceForSemverSearchKey @ 0x140418724 (ApiSetSchemaExpander_AddSpaceForSemverSearchKey.c)
 */

__int64 __fastcall ApiSetCompose_ProcessV7Extension_Phase0(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  unsigned int v5; // r15d
  __int64 v6; // r13
  unsigned int v7; // r14d
  __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // rcx
  _WORD *v14; // rbp
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // eax
  int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+20h] [rbp-48h]
  unsigned __int16 v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int16 v22; // [rsp+80h] [rbp+18h] BYREF
  int v23; // [rsp+88h] [rbp+20h]

  v3 = 0;
  if ( *(_WORD *)(a1 + 16) )
  {
    ++*(_DWORD *)(a2 + 184);
    *(_DWORD *)(a2 + 188) += 16;
    *(_DWORD *)(a2 + 208) += *(unsigned __int16 *)(a1 + 16) + 1;
  }
  v5 = 0;
  v23 = 0;
  if ( *(_WORD *)(a1 + 18) )
  {
    do
    {
      v6 = a1 + *(unsigned int *)(a1 + 12);
      LOBYTE(v21) = 0;
      v22 = 0;
      v7 = *(unsigned __int16 *)(v6 + 20LL * v5 + 8);
      v8 = a1 + *(unsigned int *)(v6 + 20LL * v5);
      if ( !(unsigned __int8)ApiSetpGetSearchKeyInfo_V7(
                               (int)a1 + *(_DWORD *)(v6 + 20LL * v5),
                               (unsigned __int16)v7,
                               0,
                               (unsigned int)&v22,
                               (__int64)&v21) )
        return (unsigned int)-1073741823;
      v9 = *(_QWORD *)(a2 + 8);
      LOBYTE(v19) = 0;
      if ( (_BYTE)v21 )
      {
        v10 = ApiSetpSearchForSectionIndex_V7(v9, v9 + 40, v8, v22, v19);
        if ( v10 == -1 )
        {
          *(_DWORD *)(a2 + 152) += 32;
          ++*(_DWORD *)(a2 + 148);
          *(_DWORD *)(a2 + 208) += v7 + 1;
          goto LABEL_13;
        }
        if ( (*(_BYTE *)(*(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL)
                       + *(_QWORD *)(a2 + 8)
                       + v10 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + 50LL)
                       - *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 6LL)
                       + 22) & 1) == 0 )
          goto LABEL_13;
      }
      else
      {
        v11 = ApiSetpSearchForSectionIndex_V7(v9, v9 + 52, v8, v22, v19);
        if ( v11 == -1 )
        {
          ++*(_DWORD *)(a2 + 160);
          *(_DWORD *)(a2 + 164) += 28;
          ApiSetSchemaExpander_AddSpaceForSemverSearchKey(a2, v7);
LABEL_13:
          v12 = 0;
          if ( *(_WORD *)(v6 + 20LL * v5 + 10) )
          {
            do
            {
              v13 = *(_QWORD *)(a2 + 8);
              LOBYTE(v20) = 1;
              v14 = (_WORD *)(a1 + 16LL * v12 + *(unsigned int *)(v6 + 20LL * v5 + 4));
              v15 = a1 + *(unsigned int *)v14;
              v21 = v14[4];
              if ( (unsigned int)ApiSetpSearchForSectionIndex_V7(v13, v13 + 76, v15, v21, v20) == -1 && !v14[6] )
              {
                v16 = v21;
                ++*(_DWORD *)(a2 + 172);
                *(_DWORD *)(a2 + 204) += 2 * v16;
                *(_DWORD *)(a2 + 176) += 20;
                v14[6] |= 1u;
              }
              if ( v14[5] )
              {
                ++*(_WORD *)(a2 + 196);
                *(_DWORD *)(a2 + 200) += 16;
              }
              ++v12;
            }
            while ( v12 < *(unsigned __int16 *)(v6 + 20LL * v5 + 10) );
            v5 = v23;
          }
          goto LABEL_21;
        }
        if ( (*(_BYTE *)(*(unsigned int *)(*(_QWORD *)(a2 + 8) + 52LL)
                       + *(_QWORD *)(a2 + 8)
                       + v11 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + 62LL)
                       - *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 6LL)
                       + 19) & 1) == 0 )
          goto LABEL_13;
      }
LABEL_21:
      v17 = *(unsigned __int16 *)(a1 + 18);
      v23 = ++v5;
    }
    while ( v5 < v17 );
  }
  return v3;
}
