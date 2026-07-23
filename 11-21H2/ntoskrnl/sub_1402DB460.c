/*
 * XREFs of sub_1402DB460 @ 0x1402DB460
 * Callers:
 *     sub_1402DB190 @ 0x1402DB190 (sub_1402DB190.c)
 *     sub_1402DB248 @ 0x1402DB248 (sub_1402DB248.c)
 *     sub_1403C378C @ 0x1403C378C (sub_1403C378C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402DB460(int a1, __int64 a2, __int64 a3, unsigned int *a4, int a5, char a6, __int64 a7)
{
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdi
  int v20; // edx
  int v21; // edi
  __int64 result; // rax
  __int64 v23; // rcx
  unsigned int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // al

  *(_QWORD *)a7 = 0LL;
  *(_DWORD *)(a7 + 8) = 0;
  *(_WORD *)(a7 + 12) = 0;
  if ( (*a4 & 0x1000) != 0 )
    v10 = 0x9090909090909090uLL;
  else
    v10 = 0xCCCCCCCCCCCCCCCCuLL;
  *(_QWORD *)(a7 + 2) = v10;
  *(_DWORD *)(a7 + 10) = v10;
  if ( a5 )
  {
    if ( (a6 & 1) == 0 )
      goto LABEL_10;
    v11 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v12 = *(_QWORD *)(a2 + 16);
      if ( v12 )
      {
        v13 = *(int *)(v12 + 4 * ((unsigned __int64)(unsigned int)v11 >> 13));
      }
      else
      {
        v23 = *(_QWORD *)(a2 + 24);
        if ( !v23 )
          goto LABEL_20;
        v27 = *(_QWORD *)(v23 + 8 * (v11 >> 13));
        v13 = v27 - *(_QWORD *)(a2 + 32);
        if ( *(_QWORD *)(a2 + 40) )
        {
          if ( !(unsigned int)sub_14042A5E0(v27, v11) )
            goto LABEL_20;
        }
      }
      if ( v13 && v13 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 <= 0xFFFFFFFF )
      {
LABEL_10:
        *(_DWORD *)a7 = -1957953529;
        *(_BYTE *)(a7 + 4) = 21;
        v14 = *a4;
        v15 = *a4;
        if ( (v14 & 0xFFFFE000) != 0xFFFFE000 )
        {
          v16 = *(unsigned int *)(a2 + 8);
          if ( (_DWORD)v16 )
          {
            v17 = v16 + 8 * (v14 >> 13) - (unsigned int)(a1 + 7);
            *(_WORD *)(a7 + 5) = v17;
            *(_BYTE *)(a7 + 7) = BYTE2(v17);
            *(_WORD *)a7 = 127;
            *(_BYTE *)(a7 + 8) = BYTE3(v17);
            v15 = *a4;
          }
        }
        if ( (v15 & 0xFFFFE000) != 0xFFFFE000 )
        {
          v18 = *(_QWORD *)(a2 + 16);
          if ( v18 )
          {
            v19 = *(int *)(v18 + 4 * ((unsigned __int64)v15 >> 13));
            goto LABEL_16;
          }
          v28 = *(_QWORD *)(a2 + 24);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 8 * ((unsigned __int64)v15 >> 13));
            v19 = v29 - *(_QWORD *)(a2 + 32);
            if ( !*(_QWORD *)(a2 + 40) || (unsigned int)sub_14042A5E0(v29, v28) )
            {
LABEL_16:
              if ( v19 )
              {
                v20 = a1 + 12;
                if ( v19 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 <= 0xFFFFFFFF )
                  goto LABEL_18;
              }
            }
          }
        }
        v20 = a1 + 12;
        LODWORD(v19) = *(_DWORD *)a2 + *(_DWORD *)(a3 + 76);
LABEL_18:
        v21 = v19 - v20;
        *(_BYTE *)(a7 + 9) = ((*a4 & 0x1000) == 0) | 0xE8;
        *(_BYTE *)(a7 + 11) = BYTE1(v21);
        *(_BYTE *)(a7 + 12) = BYTE2(v21);
        result = 3968LL;
        *(_BYTE *)(a7 + 10) = v21;
        *(_WORD *)a7 |= 0xF80u;
        *(_BYTE *)(a7 + 13) = HIBYTE(v21);
        return result;
      }
    }
  }
LABEL_20:
  if ( (a6 & 2) != 0 )
  {
    *(_WORD *)(a7 + 2) = -29876;
    v30 = -46;
    *(_BYTE *)(a7 + 4) = 21;
    *(_WORD *)(a7 + 9) = -179;
    if ( (*a4 & 0x1000) == 0 )
      v30 = -30;
    *(_BYTE *)(a7 + 11) = v30;
  }
  else
  {
    *(_WORD *)(a7 + 2) = -184;
    if ( (*a4 & 0x1000) != 0 )
    {
      *(_BYTE *)(a7 + 4) = 21;
      *(_DWORD *)(a7 + 9) = 4464399;
      *(_BYTE *)(a7 + 13) = 0;
    }
    else
    {
      *(_BYTE *)(a7 + 4) = 37;
    }
  }
  *(_WORD *)a7 = 3975;
  v24 = *a4;
  result = *a4 & 0xFFFFE000;
  if ( (_DWORD)result != -8192 )
  {
    v25 = *(unsigned int *)(a2 + 8);
    if ( (_DWORD)v25 )
    {
      v26 = v25 + 8 * ((unsigned __int64)v24 >> 13) - (unsigned int)(a1 + 7);
      *(_WORD *)(a7 + 5) = v26;
      *(_BYTE *)(a7 + 7) = BYTE2(v26);
      result = 4095LL;
      *(_WORD *)a7 = 4095;
      *(_BYTE *)(a7 + 8) = ((unsigned int)v25 + 8 * (v24 >> 13) - (a1 + 7)) >> 24;
    }
  }
  return result;
}
