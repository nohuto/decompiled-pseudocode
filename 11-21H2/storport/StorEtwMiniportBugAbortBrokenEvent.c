/*
 * XREFs of StorEtwMiniportBugAbortBrokenEvent @ 0x1C005B334
 * Callers:
 *     RaidUnitAbortSrbCompletion @ 0x1C0054540 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     McTemplateK0zquuujqqbr7_EtwWriteTransfer @ 0x1C005A1C8 (McTemplateK0zquuujqqbr7_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugAbortBrokenEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int64 v4; // r14
  __int64 v6; // rsi
  char v7; // r10
  int v8; // r15d
  __int64 v9; // r12
  NTSTATUS result; // eax
  char v11; // di
  unsigned int v12; // ebp
  unsigned int i; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // r11
  __int64 v16; // r10
  int v17; // edx
  int v18; // edx
  __int64 v19; // rdx
  unsigned __int8 v20; // r10
  char v21; // bp
  unsigned int v22; // r14d
  unsigned int v23; // edi
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // r11
  int v27; // edx
  int v28; // edx
  __int64 v29; // rcx

  v2 = *(_QWORD *)(a1 + 168);
  v3 = 0;
  v4 = a2;
  v6 = 0LL;
  v7 = *(_BYTE *)(v2 + 2);
  if ( v7 == 40 )
    v8 = *(_DWORD *)(v2 + 20);
  else
    v8 = *(unsigned __int8 *)(v2 + 2);
  v9 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v9 + 96);
  if ( v8 )
    goto LABEL_39;
  if ( v7 != 40 )
  {
    v6 = v2 + 72;
    goto LABEL_27;
  }
  v11 = 0;
  if ( !*(_DWORD *)(v2 + 20) )
  {
    v12 = *(_DWORD *)(v2 + 56);
    for ( i = 0; i < v12; ++i )
    {
      v14 = *(unsigned int *)(v2 + 4LL * i + 120);
      if ( (unsigned int)v14 >= 0x80 )
      {
        v15 = *(unsigned int *)(v2 + 16);
        if ( (unsigned int)v14 < (unsigned int)v15 )
        {
          v16 = (unsigned int)v14;
          v17 = *(_DWORD *)(v14 + v2) - 64;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              if ( v18 == 1 && v16 + 40 <= v15 )
              {
                v19 = v16 + v2 + 32;
                if ( !*(_DWORD *)(v16 + v2 + 12) )
                  v19 = v6;
                v6 = v19;
                break;
              }
            }
            else if ( v16 + 56 <= v15 )
            {
              v11 = 1;
              if ( !*(_BYTE *)(v16 + v2 + 10) )
                break;
              v6 = v16 + v2 + 24;
            }
          }
          else if ( v16 + 40 <= v15 )
          {
            if ( *(_BYTE *)(v16 + v2 + 10) )
              v6 = v16 + v2 + 24;
            break;
          }
          if ( v11 )
            break;
        }
      }
    }
  }
LABEL_27:
  if ( !v6 )
    goto LABEL_39;
  v20 = 0;
  if ( *(_BYTE *)(v2 + 2) != 40 )
  {
    v20 = *(_BYTE *)(v2 + 10);
    goto LABEL_38;
  }
  v21 = 0;
  if ( *(_DWORD *)(v2 + 20) )
    goto LABEL_38;
  v22 = *(_DWORD *)(v2 + 56);
  v23 = 0;
  if ( !v22 )
    goto LABEL_37;
  while ( 1 )
  {
    v24 = *(unsigned int *)(v2 + 4LL * v23 + 120);
    if ( (unsigned int)v24 >= 0x80 )
    {
      v25 = *(unsigned int *)(v2 + 16);
      if ( (unsigned int)v24 < (unsigned int)v25 )
        break;
    }
LABEL_46:
    if ( ++v23 >= v22 )
      goto LABEL_37;
  }
  v26 = (unsigned int)v24;
  v27 = *(_DWORD *)(v24 + v2) - 64;
  if ( v27 )
  {
    v28 = v27 - 1;
    if ( v28 )
    {
      if ( v28 == 1 && v26 + 40 <= v25 )
        goto LABEL_37;
    }
    else if ( v26 + 56 <= v25 )
    {
      v20 = *(_BYTE *)(v26 + v2 + 10);
      v21 = 1;
    }
    goto LABEL_45;
  }
  if ( v26 + 40 > v25 )
  {
LABEL_45:
    if ( v21 )
      goto LABEL_37;
    goto LABEL_46;
  }
  v20 = *(_BYTE *)(v26 + v2 + 10);
LABEL_37:
  v4 = a2;
LABEL_38:
  v3 = v20;
LABEL_39:
  if ( (byte_1C00799E4 & 0x10) != 0 )
  {
    v29 = v9 + 1976;
    LOBYTE(v29) = BYTE1(result);
    return McTemplateK0zquuujqqbr7_EtwWriteTransfer(
             v29,
             *(_QWORD *)(v9 + 24),
             (const GUID *)(a1 + 728),
             *(const wchar_t **)(v4 + 8),
             *(_DWORD *)(*(_QWORD *)(v9 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v9 + 1976,
             v8,
             v3,
             v6);
  }
  return result;
}
