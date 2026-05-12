/*
 * XREFs of StorEtwMiniportBugAbortTimeoutEvent @ 0x1C00685D4
 * Callers:
 *     StorTickEventQueue @ 0x1C000EAE0 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0quuujqqqbr7_EtwWriteTransfer @ 0x1C00669B4 (McTemplateK0quuujqqqbr7_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwMiniportBugAbortTimeoutEvent(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r9d
  __int64 v4; // rdi
  int v5; // ecx
  __int64 *v6; // r8
  __int64 v7; // r8
  char v8; // bl
  int v9; // r12d
  __int64 v10; // r15
  NTSTATUS result; // eax
  char v12; // r14
  unsigned int v13; // r15d
  unsigned int i; // esi
  __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // r11
  __int64 v18; // r10
  int v19; // edx
  int v20; // edx
  unsigned __int8 v21; // r11
  char v22; // r14
  unsigned int v23; // ebp
  unsigned int j; // esi
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // r10
  int v28; // edx
  int v29; // edx
  __int64 v30; // rcx
  char v31; // [rsp+A0h] [rbp+8h]
  __int64 v32; // [rsp+B0h] [rbp+18h]

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
  v32 = v10;
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
          v15 = v4;
          v16 = *(unsigned int *)(v7 + 4LL * i + 120);
          if ( (unsigned int)v16 >= 0x80 )
          {
            v17 = *(unsigned int *)(v7 + 16);
            if ( (unsigned int)v16 < (unsigned int)v17 )
            {
              v18 = (unsigned int)v16;
              v19 = *(_DWORD *)(v16 + v7) - 64;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  if ( v20 == 1 && v18 + 40 <= v17 )
                  {
                    v4 = v18 + v7 + 32;
                    if ( !*(_DWORD *)(v18 + v7 + 12) )
                      v4 = v15;
                    break;
                  }
                }
                else if ( v18 + 56 <= v17 )
                {
                  v12 = 1;
                  if ( !*(_BYTE *)(v18 + v7 + 10) )
                    break;
                  v4 = v18 + v7 + 24;
                }
              }
              else if ( v18 + 40 <= v17 )
              {
                v10 = v32;
                if ( *(_BYTE *)(v18 + v7 + 10) )
                  v4 = v18 + v7 + 24;
                goto LABEL_30;
              }
              if ( v12 )
                break;
            }
          }
        }
        v10 = v32;
      }
    }
    else
    {
      v4 = v7 + 72;
    }
LABEL_30:
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
  if ( (byte_1C0092A04 & 0x40) != 0 )
  {
    v30 = v10 + 2024;
    LOBYTE(v30) = BYTE1(result);
    return McTemplateK0quuujqqqbr7_EtwWriteTransfer(
             v30,
             *(_QWORD *)(v10 + 24),
             (const GUID *)(a1 + 728),
             *(_DWORD *)(*(_QWORD *)(v10 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v10 + 2024,
             v31,
             v9,
             v2,
             v4);
  }
  return result;
}
