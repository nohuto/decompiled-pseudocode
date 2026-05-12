/*
 * XREFs of StorEtwMiniportBugResetBrokenEvent @ 0x1C005B7D4
 * Callers:
 *     StorTickEventQueue @ 0x1C0013B30 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer @ 0x1C0059D9C (McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugResetBrokenEvent(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // edi
  __int64 v5; // r14
  __int64 v7; // rsi
  char v8; // r10
  int v9; // r12d
  __int64 v10; // r15
  NTSTATUS result; // eax
  char v12; // bl
  unsigned int v13; // ebp
  unsigned int i; // r11d
  __int64 v15; // rdx
  unsigned __int64 v16; // r10
  __int64 v17; // r8
  int v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  unsigned __int8 v21; // r8
  char v22; // bp
  unsigned int v23; // r14d
  unsigned int v24; // ebx
  __int64 v25; // rdx
  unsigned __int64 v26; // r11
  __int64 v27; // r10
  int v28; // edx
  int v29; // edx
  __int64 v30; // rcx

  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  v5 = a3;
  v7 = 0LL;
  v8 = *(_BYTE *)(v3 + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(v3 + 20);
  else
    v9 = *(unsigned __int8 *)(v3 + 2);
  v10 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v10 + 96);
  if ( v9 )
    goto LABEL_39;
  if ( v8 != 40 )
  {
    v7 = v3 + 72;
    goto LABEL_27;
  }
  v12 = 0;
  if ( !*(_DWORD *)(v3 + 20) )
  {
    v13 = *(_DWORD *)(v3 + 56);
    for ( i = 0; i < v13; ++i )
    {
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
                v20 = v17 + v3 + 32;
                if ( !*(_DWORD *)(v17 + v3 + 12) )
                  v20 = v7;
                v7 = v20;
                break;
              }
            }
            else if ( v17 + 56 <= v16 )
            {
              v12 = 1;
              if ( !*(_BYTE *)(v17 + v3 + 10) )
                break;
              v7 = v17 + v3 + 24;
            }
          }
          else if ( v17 + 40 <= v16 )
          {
            if ( *(_BYTE *)(v17 + v3 + 10) )
              v7 = v17 + v3 + 24;
            break;
          }
          if ( v12 )
            break;
        }
      }
    }
  }
LABEL_27:
  if ( !v7 )
    goto LABEL_39;
  v21 = 0;
  if ( *(_BYTE *)(v3 + 2) != 40 )
  {
    v21 = *(_BYTE *)(v3 + 10);
    goto LABEL_38;
  }
  v22 = 0;
  if ( *(_DWORD *)(v3 + 20) )
    goto LABEL_38;
  v23 = *(_DWORD *)(v3 + 56);
  v24 = 0;
  if ( !v23 )
    goto LABEL_37;
  while ( 1 )
  {
    v25 = *(unsigned int *)(v3 + 4LL * v24 + 120);
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v3 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_46:
    if ( ++v24 >= v23 )
      goto LABEL_37;
  }
  v27 = (unsigned int)v25;
  v28 = *(_DWORD *)(v25 + v3) - 64;
  if ( v28 )
  {
    v29 = v28 - 1;
    if ( v29 )
    {
      if ( v29 == 1 && v27 + 40 <= v26 )
        goto LABEL_37;
    }
    else if ( v27 + 56 <= v26 )
    {
      v21 = *(_BYTE *)(v27 + v3 + 10);
      v22 = 1;
    }
    goto LABEL_45;
  }
  if ( v27 + 40 > v26 )
  {
LABEL_45:
    if ( v22 )
      goto LABEL_37;
    goto LABEL_46;
  }
  v21 = *(_BYTE *)(v27 + v3 + 10);
LABEL_37:
  v5 = a3;
LABEL_38:
  v4 = v21;
LABEL_39:
  if ( (byte_1C00799E4 & 0x10) != 0 )
  {
    v30 = v10 + 186;
    LOBYTE(v30) = BYTE1(result);
    return McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer(
             v30,
             v10 + 169,
             (const GUID *)(a1 + 728),
             *(const wchar_t **)(v5 + 8),
             *(_DWORD *)(*(_QWORD *)(v10 + 24) + 56LL),
             *(_QWORD *)(v10 + 24) + 4936LL,
             result,
             SBYTE1(result),
             SBYTE2(result),
             v10 + 1976,
             (const char *)(v10 + 160),
             (const char *)(v10 + 169),
             (const char *)(v10 + 186),
             v9,
             v4,
             v7,
             a2);
  }
  return result;
}
