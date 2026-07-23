/*
 * XREFs of sub_140221620 @ 0x140221620
 * Callers:
 *     sub_140221330 @ 0x140221330 (sub_140221330.c)
 *     sub_140518840 @ 0x140518840 (sub_140518840.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140221620(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  int v7; // ebx
  __int64 v8; // r11
  int v10; // esi
  __int16 v11; // r9
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // r9d
  unsigned int v15; // edi
  int v16; // edx
  int v17; // ebp
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  bool v20; // cc
  unsigned int v21; // edx
  unsigned int v23; // ecx
  int v24; // ebp
  bool v25; // cc
  unsigned int v26; // esi
  bool v27; // cc

  v7 = 0;
  v8 = a4;
  if ( *(_DWORD *)(a1 + 148) == 2 )
  {
    v10 = 1;
  }
  else
  {
    v10 = dword_140C09788;
    if ( *(_BYTE *)(a1 + 437) )
      v10 = 1;
  }
  v11 = a3;
  if ( a2 )
  {
    v12 = 0;
    v13 = *((_DWORD *)a2 + 8) + *((_DWORD *)a2 + 10) + *((_DWORD *)a2 + 11) - a3;
    v14 = v11 & 0xFFF;
    v15 = v13;
    if ( v13 >= (unsigned int)v8 )
    {
LABEL_5:
      if ( v13 + 4096 < v14 + (int)v8 )
        return 3221225507LL;
      v16 = v10 - 1;
      v17 = v8 + v15 + v14 - v13;
      v18 = (unsigned int)(v17 + 4095) >> 12;
      LODWORD(v19) = v18 + v12;
      if ( ((v10 - 1) & v14) != 0 )
      {
        ++v7;
        v20 = v18 <= 1;
      }
      else
      {
        v20 = v18 <= 1;
        if ( v18 == 1 )
        {
          if ( (((_DWORD)v8 + v15 - v13) & v16) == 0 )
            goto LABEL_10;
          goto LABEL_20;
        }
      }
      if ( v20 || (v16 & v17) == 0 )
        goto LABEL_10;
LABEL_20:
      ++v7;
      goto LABEL_10;
    }
    while ( 1 )
    {
      a2 = (__int64 *)*a2;
      if ( !a2 )
        goto LABEL_5;
      v23 = (v14 + v15 + 4095) >> 12;
      v24 = v10 - 1;
      v12 += v23;
      if ( ((v10 - 1) & v14) != 0 )
        break;
      v25 = v23 <= 1;
      if ( v23 != 1 )
        goto LABEL_27;
      if ( (v24 & v15) != 0 )
        goto LABEL_29;
LABEL_25:
      v15 = *((_DWORD *)a2 + 10);
      v13 += v15;
      v14 = *((_DWORD *)a2 + 11);
      if ( v13 >= (unsigned int)v8 )
        goto LABEL_5;
    }
    ++v7;
    v25 = v23 <= 1;
LABEL_27:
    if ( v25 || (v24 & (v14 + v15)) == 0 )
      goto LABEL_25;
LABEL_29:
    ++v7;
    goto LABEL_25;
  }
  v19 = (v8 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12;
  v26 = v10 - 1;
  if ( (v26 & (unsigned int)a3) != 0 )
  {
    v7 = 1;
    v27 = (unsigned int)v19 <= 1;
  }
  else
  {
    v27 = (unsigned int)v19 <= 1;
    if ( (_DWORD)v19 == 1 )
    {
      if ( (v26 & (unsigned int)v8) != 0 )
        v7 = 1;
      goto LABEL_10;
    }
  }
  if ( !v27 && ((v8 + a3) & v26) != 0 )
    goto LABEL_20;
LABEL_10:
  if ( (unsigned int)v19 > *(_DWORD *)(a1 + 224) )
    return 3221225626LL;
  v21 = 24 * v19 + 16;
  if ( *(_BYTE *)(a1 + 432) || !*(_BYTE *)(a1 + 437) )
  {
    v21 = 24 * v19 + 64;
    if ( v21 < 0xA0 )
      v21 = 160;
  }
  *a5 = v21;
  if ( a6 )
    *a6 = v19;
  if ( a7 )
    *a7 = v7;
  return 0LL;
}
