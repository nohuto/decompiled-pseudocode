/*
 * XREFs of sub_1C006905C @ 0x1C006905C
 * Callers:
 *     sub_1C000F470 @ 0x1C000F470 (sub_1C000F470.c)
 * Callees:
 *     sub_1C0067550 @ 0x1C0067550 (sub_1C0067550.c)
 */

NTSTATUS __fastcall sub_1C006905C(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // edi
  __int64 v5; // r15
  __int64 v6; // rsi
  char v7; // r11
  int v8; // r12d
  __int64 v9; // r13
  NTSTATUS result; // eax
  char v11; // r14
  unsigned int v12; // r15d
  unsigned int i; // ebx
  __int64 v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 v16; // r10
  __int64 v17; // r8
  int v18; // edx
  int v19; // edx
  unsigned __int8 v20; // r10
  char v21; // bp
  unsigned int v22; // r14d
  unsigned int j; // ebx
  __int64 v24; // rdx
  unsigned __int64 v25; // r11
  __int64 v26; // r8
  int v27; // edx
  int v28; // edx
  __int64 v29; // rcx

  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  v5 = a1;
  v6 = 0LL;
  v7 = *(_BYTE *)(v3 + 2);
  if ( v7 == 40 )
    v8 = *(_DWORD *)(v3 + 20);
  else
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v9 + 96);
  if ( !v8 )
  {
    if ( v7 == 40 )
    {
      v11 = 0;
      if ( !*(_DWORD *)(v3 + 20) )
      {
        v12 = *(_DWORD *)(v3 + 56);
        for ( i = 0; i < v12; ++i )
        {
          v14 = v6;
          v15 = *(unsigned int *)(v3 + 4LL * i + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v3 + 16);
            if ( (unsigned int)v15 < (unsigned int)v16 )
            {
              v17 = (unsigned int)v15;
              v18 = *(_DWORD *)(v15 + v3) - 64;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 == 1 && v17 + 40 <= v16 )
                  {
                    v6 = v17 + v3 + 32;
                    if ( !*(_DWORD *)(v17 + v3 + 12) )
                      v6 = v14;
                    break;
                  }
                }
                else if ( v17 + 56 <= v16 )
                {
                  v11 = 1;
                  if ( !*(_BYTE *)(v17 + v3 + 10) )
                    break;
                  v6 = v17 + v3 + 24;
                }
              }
              else if ( v17 + 40 <= v16 )
              {
                v5 = a1;
                if ( *(_BYTE *)(v17 + v3 + 10) )
                  v6 = v17 + v3 + 24;
                goto LABEL_27;
              }
              if ( v11 )
                break;
            }
          }
        }
        v5 = a1;
      }
    }
    else
    {
      v6 = v3 + 72;
    }
LABEL_27:
    if ( v6 )
    {
      v20 = 0;
      if ( v7 == 40 )
      {
        v21 = 0;
        if ( !*(_DWORD *)(v3 + 20) )
        {
          v22 = *(_DWORD *)(v3 + 56);
          for ( j = 0; j < v22; ++j )
          {
            v24 = *(unsigned int *)(v3 + 4LL * j + 120);
            if ( (unsigned int)v24 >= 0x80 )
            {
              v25 = *(unsigned int *)(v3 + 16);
              if ( (unsigned int)v24 < (unsigned int)v25 )
              {
                v26 = (unsigned int)v24;
                v27 = *(_DWORD *)(v24 + v3) - 64;
                if ( v27 )
                {
                  v28 = v27 - 1;
                  if ( v28 )
                  {
                    if ( v28 == 1 && v26 + 40 <= v25 )
                      break;
                  }
                  else if ( v26 + 56 <= v25 )
                  {
                    v20 = *(_BYTE *)(v26 + v3 + 10);
                    v21 = 1;
                  }
                }
                else if ( v26 + 40 <= v25 )
                {
                  v20 = *(_BYTE *)(v26 + v3 + 10);
                  break;
                }
                if ( v21 )
                  break;
              }
            }
          }
        }
      }
      else
      {
        v20 = *(_BYTE *)(v3 + 10);
      }
      v4 = v20;
    }
  }
  if ( (byte_1C0093A04 & 0x20) != 0 )
  {
    v29 = v9 + 186;
    LOBYTE(v29) = BYTE1(result);
    return sub_1C0067550(
             v29,
             v9 + 169,
             (const GUID *)(v5 + 728),
             *(const wchar_t **)(a3 + 8),
             *(_DWORD *)(*(_QWORD *)(v9 + 24) + 56LL),
             *(_QWORD *)(v9 + 24) + 5000LL,
             result,
             SBYTE1(result),
             SBYTE2(result),
             v9 + 2024,
             (const char *)(v9 + 160),
             (const char *)(v9 + 169),
             (const char *)(v9 + 186),
             v8,
             v4,
             v6,
             a2);
  }
  return result;
}
