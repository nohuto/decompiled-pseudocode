/*
 * XREFs of StorEtwMiniportBugAbortTimeoutEvent @ 0x1C005B58C
 * Callers:
 *     StorTickEventQueue @ 0x1C0013B30 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0quuujqqqbr7_EtwWriteTransfer @ 0x1C0059A30 (McTemplateK0quuujqqqbr7_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugAbortTimeoutEvent(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r9d
  __int64 v4; // rsi
  int v5; // ecx
  __int64 *v6; // r8
  __int64 v7; // r8
  char v8; // r11
  int v9; // r15d
  __int64 v10; // r12
  NTSTATUS result; // eax
  char v12; // bp
  unsigned int v13; // r14d
  unsigned int i; // edi
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // r10
  int v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  unsigned __int8 v21; // r10
  char v22; // bp
  unsigned int v23; // r14d
  unsigned int j; // edi
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // r11
  int v28; // edx
  int v29; // edx
  __int64 v30; // rcx
  char v31; // [rsp+A0h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v4 = 0LL;
  if ( *(_BYTE *)(v1 + 2) == 40 )
  {
    v5 = *(_DWORD *)(v1 + 40);
    v6 = *(__int64 **)(v1 + 64);
  }
  else
  {
    v5 = *(_DWORD *)(v1 + 20);
    v6 = *(__int64 **)(v1 + 24);
  }
  v7 = *v6;
  v31 = v5;
  v8 = *(_BYTE *)(v7 + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(v7 + 20);
  else
    v9 = *(unsigned __int8 *)(v7 + 2);
  v10 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v10 + 96);
  if ( !v9 )
  {
    if ( v8 == 40 )
    {
      v12 = 0;
      if ( !*(_DWORD *)(v7 + 20) )
      {
        v13 = *(_DWORD *)(v7 + 56);
        for ( i = 0; i < v13; ++i )
        {
          v15 = *(unsigned int *)(v7 + 4LL * i + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v7 + 16);
            if ( (unsigned int)v15 < (unsigned int)v16 )
            {
              v17 = (unsigned int)v15;
              v18 = *(_DWORD *)(v15 + v7) - 64;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 == 1 && v17 + 40 <= v16 )
                  {
                    v20 = v17 + v7 + 32;
                    if ( !*(_DWORD *)(v17 + v7 + 12) )
                      v20 = v4;
                    v4 = v20;
                    break;
                  }
                }
                else if ( v17 + 56 <= v16 )
                {
                  v12 = 1;
                  if ( !*(_BYTE *)(v17 + v7 + 10) )
                    break;
                  v4 = v17 + v7 + 24;
                }
              }
              else if ( v17 + 40 <= v16 )
              {
                if ( *(_BYTE *)(v17 + v7 + 10) )
                  v4 = v17 + v7 + 24;
                break;
              }
              if ( v12 )
                break;
            }
          }
        }
      }
    }
    else
    {
      v4 = v7 + 72;
    }
    if ( v4 )
    {
      v21 = 0;
      if ( v8 == 40 )
      {
        v22 = 0;
        if ( !*(_DWORD *)(v7 + 20) )
        {
          v23 = *(_DWORD *)(v7 + 56);
          for ( j = 0; j < v23; ++j )
          {
            v25 = *(unsigned int *)(v7 + 4LL * j + 120);
            if ( (unsigned int)v25 >= 0x80 )
            {
              v26 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v25 < (unsigned int)v26 )
              {
                v27 = (unsigned int)v25;
                v28 = *(_DWORD *)(v25 + v7) - 64;
                if ( v28 )
                {
                  v29 = v28 - 1;
                  if ( v29 )
                  {
                    if ( v29 == 1 && v27 + 40 <= v26 )
                      break;
                  }
                  else if ( v27 + 56 <= v26 )
                  {
                    v21 = *(_BYTE *)(v27 + v7 + 10);
                    v22 = 1;
                  }
                }
                else if ( v27 + 40 <= v26 )
                {
                  v21 = *(_BYTE *)(v27 + v7 + 10);
                  break;
                }
                if ( v22 )
                  break;
              }
            }
          }
        }
      }
      else
      {
        v21 = *(_BYTE *)(v7 + 10);
      }
      v2 = v21;
    }
  }
  if ( (byte_1C00799E4 & 0x20) != 0 )
  {
    v30 = v10 + 1976;
    LOBYTE(v30) = BYTE1(result);
    return McTemplateK0quuujqqqbr7_EtwWriteTransfer(
             v30,
             *(_QWORD *)(v10 + 24),
             (const GUID *)(a1 + 728),
             *(_DWORD *)(*(_QWORD *)(v10 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v10 + 1976,
             v31,
             v9,
             v2,
             v4);
  }
  return result;
}
