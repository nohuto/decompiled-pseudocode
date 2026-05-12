/*
 * XREFs of StorEtwMiniportBugAbortBrokenEvent @ 0x1C0068390
 * Callers:
 *     RaidUnitAbortSrbCompletion @ 0x1C0060F10 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     McTemplateK0zquuujqqbr7_EtwWriteTransfer @ 0x1C0067168 (McTemplateK0zquuujqqbr7_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugAbortBrokenEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int64 v5; // rbx
  char v6; // di
  int v7; // r12d
  __int64 v8; // r15
  NTSTATUS result; // eax
  char v10; // r14
  unsigned int v11; // r15d
  unsigned int i; // esi
  __int64 v13; // rbp
  __int64 v14; // rdx
  unsigned __int64 v15; // r11
  __int64 v16; // r10
  int v17; // edx
  int v18; // edx
  unsigned __int8 v19; // r11
  char v20; // bp
  unsigned int v21; // r14d
  unsigned int j; // esi
  __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  __int64 v25; // r10
  int v26; // edx
  int v27; // edx
  __int64 v28; // rcx
  __int64 v30; // [rsp+B0h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 168);
  v3 = 0;
  v5 = 0LL;
  v6 = *(_BYTE *)(v2 + 2);
  if ( v6 == 40 )
    v7 = *(_DWORD *)(v2 + 20);
  else
    v7 = *(unsigned __int8 *)(v2 + 2);
  v8 = *(_QWORD *)(a1 + 224);
  v30 = v8;
  result = *(_DWORD *)(v8 + 96);
  if ( !v7 )
  {
    if ( v6 == 40 )
    {
      v10 = 0;
      if ( !*(_DWORD *)(v2 + 20) )
      {
        v11 = *(_DWORD *)(v2 + 56);
        for ( i = 0; i < v11; ++i )
        {
          v13 = v5;
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
                    v5 = v16 + v2 + 32;
                    if ( !*(_DWORD *)(v16 + v2 + 12) )
                      v5 = v13;
                    break;
                  }
                }
                else if ( v16 + 56 <= v15 )
                {
                  v10 = 1;
                  if ( !*(_BYTE *)(v16 + v2 + 10) )
                    break;
                  v5 = v16 + v2 + 24;
                }
              }
              else if ( v16 + 40 <= v15 )
              {
                v8 = v30;
                if ( *(_BYTE *)(v16 + v2 + 10) )
                  v5 = v16 + v2 + 24;
                goto LABEL_27;
              }
              if ( v10 )
                break;
            }
          }
        }
        v8 = v30;
      }
    }
    else
    {
      v5 = v2 + 72;
    }
LABEL_27:
    if ( v5 )
    {
      v19 = 0;
      if ( v6 == 40 )
      {
        v20 = 0;
        if ( !*(_DWORD *)(v2 + 20) )
        {
          v21 = *(_DWORD *)(v2 + 56);
          for ( j = 0; j < v21; ++j )
          {
            v23 = *(unsigned int *)(v2 + 4LL * j + 120);
            if ( (unsigned int)v23 >= 0x80 )
            {
              v24 = *(unsigned int *)(v2 + 16);
              if ( (unsigned int)v23 < (unsigned int)v24 )
              {
                v25 = (unsigned int)v23;
                v26 = *(_DWORD *)(v23 + v2) - 64;
                if ( v26 )
                {
                  v27 = v26 - 1;
                  if ( v27 )
                  {
                    if ( v27 == 1 && v25 + 40 <= v24 )
                      break;
                  }
                  else if ( v25 + 56 <= v24 )
                  {
                    v19 = *(_BYTE *)(v25 + v2 + 10);
                    v20 = 1;
                  }
                }
                else if ( v25 + 40 <= v24 )
                {
                  v19 = *(_BYTE *)(v25 + v2 + 10);
                  break;
                }
                if ( v20 )
                  break;
              }
            }
          }
        }
      }
      else
      {
        v19 = *(_BYTE *)(v2 + 10);
      }
      v3 = v19;
    }
  }
  if ( (byte_1C0092A04 & 0x20) != 0 )
  {
    v28 = v8 + 2024;
    LOBYTE(v28) = BYTE1(result);
    return McTemplateK0zquuujqqbr7_EtwWriteTransfer(
             v28,
             *(_QWORD *)(v8 + 24),
             (const GUID *)(a1 + 728),
             *(const wchar_t **)(a2 + 8),
             *(_DWORD *)(*(_QWORD *)(v8 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v8 + 2024,
             v7,
             v3,
             v5);
  }
  return result;
}
