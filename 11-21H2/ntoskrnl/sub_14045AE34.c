/*
 * XREFs of sub_14045AE34 @ 0x14045AE34
 * Callers:
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_14045AD66 @ 0x14045AD66 (sub_14045AD66.c)
 *     sub_140574018 @ 0x140574018 (sub_140574018.c)
 * Callees:
 *     sub_1402F8020 @ 0x1402F8020 (sub_1402F8020.c)
 */

__int64 __fastcall sub_14045AE34(__int64 a1, __int64 a2, BOOL *a3)
{
  unsigned int v3; // edx
  BOOL v5; // r11d
  __int64 result; // rax
  __int64 v7; // rax
  int v8; // r10d
  char v9; // dl
  int v10; // ecx
  unsigned int v11; // r10d
  __int64 v12; // r8
  int v13; // edx

  v3 = *(_DWORD *)(a1 + 80);
  if ( v3 <= *(_DWORD *)(a1 + 84) )
    v3 = *(_DWORD *)(a1 + 84);
  v5 = v3 >= dword_140D05308;
  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    result = (unsigned __int8)*(_DWORD *)(a1 + 512);
    goto LABEL_37;
  }
  v7 = *(_QWORD *)(a1 + 1552);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 512);
    v9 = 0;
    v10 = *(_DWORD *)(v7 + 512);
    if ( (unsigned __int8)v10 != (unsigned __int8)v8
      && ((unsigned __int8)v10 == 3
       || (unsigned __int8)v8 == 3
       || (unsigned __int8)v10 < (unsigned int)(unsigned __int8)v8) )
    {
      v9 = 1;
    }
    if ( !v9 )
      LOBYTE(v10) = v8;
    result = (unsigned __int8)v10;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(a1 + 124) == 1 )
  {
    result = 3LL;
    goto LABEL_37;
  }
  v11 = 2;
  if ( *(_BYTE *)(a1 + 124) == 2 )
  {
    result = 4LL;
    goto LABEL_37;
  }
  result = (unsigned int)dword_140D05460[(*(_DWORD *)(a1 + 956) >> 8) & 7];
  if ( (_DWORD)result == 6 )
  {
    v12 = (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 632LL) >> 7) & 0xF;
    if ( (dword_140D05058 & 4) != 0 )
    {
      if ( (_DWORD)v12 == 3 )
        goto LABEL_27;
      if ( (_DWORD)v12 != 8 )
      {
        if ( v3 < dword_140D05308 && dword_140D06A24 && (dword_140D05058 & 8) != 0 )
        {
LABEL_36:
          result = v11;
          goto LABEL_37;
        }
LABEL_27:
        if ( (dword_140D05058 & 1) != 0 && sub_1402F8020(a1) )
          goto LABEL_29;
      }
    }
    else if ( (_DWORD)v12 != 8 )
    {
      goto LABEL_27;
    }
    result = (unsigned int)dword_140D05478[v12];
    if ( (_DWORD)result != 6 )
      goto LABEL_37;
    v13 = *(char *)(a1 + 195);
    if ( *(char *)(a1 + 195) < 15
      && (((unsigned __int8)dword_140D05058 & (unsigned __int8)v11) == 0
       || v13 < dword_140D050F8 && ((*(_DWORD *)(a1 + 116) & 0x400) == 0 || (char)v13 < 8)) )
    {
      goto LABEL_36;
    }
LABEL_29:
    result = 0LL;
  }
LABEL_37:
  if ( a3 )
    *a3 = v5;
  return result;
}
