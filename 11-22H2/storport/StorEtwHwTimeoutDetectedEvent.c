/*
 * XREFs of StorEtwHwTimeoutDetectedEvent @ 0x1C00677D4
 * Callers:
 *     StorTickEventQueue @ 0x1C000EAE0 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0zqjuuujssstqqbr12qt_EtwWriteTransfer @ 0x1C0066F2C (McTemplateK0zqjuuujssstqqbr12qt_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwHwTimeoutDetectedEvent(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v3; // ebp
  __int64 v4; // r15
  __int64 v5; // r14
  char v6; // r11
  int v7; // r12d
  __int64 v8; // r13
  NTSTATUS result; // eax
  __int64 v10; // rcx
  char v11; // si
  unsigned int v12; // r15d
  unsigned int i; // ebx
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16; // r10
  __int64 v17; // r9
  int v18; // edx
  int v19; // edx
  unsigned __int8 v20; // r10
  char v21; // di
  unsigned int v22; // esi
  unsigned int j; // ebx
  __int64 v24; // rdx
  unsigned __int64 v25; // r11
  __int64 v26; // r9
  int v27; // edx
  int v28; // edx
  char v31; // [rsp+100h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 168);
  v3 = 0;
  v4 = a1;
  v5 = 0LL;
  v6 = *(_BYTE *)(v2 + 2);
  if ( v6 == 40 )
    v7 = *(_DWORD *)(v2 + 20);
  else
    v7 = *(unsigned __int8 *)(v2 + 2);
  v8 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v8 + 96);
  if ( v6 == 40 )
    LODWORD(v10) = *(_DWORD *)(v2 + 40);
  else
    LODWORD(v10) = *(_DWORD *)(v2 + 20);
  v31 = v10;
  if ( !v7 )
  {
    if ( v6 == 40 )
    {
      v11 = 0;
      if ( !*(_DWORD *)(v2 + 20) )
      {
        v12 = *(_DWORD *)(v2 + 56);
        for ( i = 0; i < v12; ++i )
        {
          v14 = v5;
          v15 = *(unsigned int *)(v2 + 4LL * i + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v2 + 16);
            if ( (unsigned int)v15 < (unsigned int)v16 )
            {
              v17 = (unsigned int)v15;
              v18 = *(_DWORD *)(v15 + v2) - 64;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 == 1 && v17 + 40 <= v16 )
                  {
                    v5 = v17 + v2 + 32;
                    if ( !*(_DWORD *)(v17 + v2 + 12) )
                      v5 = v14;
                    break;
                  }
                }
                else if ( v17 + 56 <= v16 )
                {
                  v11 = 1;
                  if ( !*(_BYTE *)(v17 + v2 + 10) )
                    break;
                  v5 = v17 + v2 + 24;
                }
              }
              else if ( v17 + 40 <= v16 )
              {
                v4 = a1;
                if ( *(_BYTE *)(v17 + v2 + 10) )
                  v5 = v17 + v2 + 24;
                goto LABEL_30;
              }
              if ( v11 )
                break;
            }
          }
        }
        v4 = a1;
      }
    }
    else
    {
      v5 = v2 + 72;
    }
LABEL_30:
    if ( v5 )
    {
      v20 = 0;
      if ( v6 == 40 )
      {
        v21 = 0;
        if ( !*(_DWORD *)(v2 + 20) )
        {
          v22 = *(_DWORD *)(v2 + 56);
          for ( j = 0; j < v22; ++j )
          {
            v24 = *(unsigned int *)(v2 + 4LL * j + 120);
            if ( (unsigned int)v24 >= 0x80 )
            {
              v25 = *(unsigned int *)(v2 + 16);
              if ( (unsigned int)v24 < (unsigned int)v25 )
              {
                v26 = (unsigned int)v24;
                v27 = *(_DWORD *)(v24 + v2) - 64;
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
                    v20 = *(_BYTE *)(v26 + v2 + 10);
                    v21 = 1;
                  }
                }
                else if ( v26 + 40 <= v25 )
                {
                  v20 = *(_BYTE *)(v26 + v2 + 10);
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
        v20 = *(_BYTE *)(v2 + 10);
      }
      v3 = v20;
    }
  }
  if ( (byte_1C0092A04 & 1) != 0 )
  {
    v10 = (unsigned int)v10;
    LOBYTE(v10) = BYTE1(result);
    return McTemplateK0zqjuuujssstqqbr12qt_EtwWriteTransfer(
             v10,
             v8 + 186,
             (const GUID *)(v4 + 728),
             *(const wchar_t **)(*(_QWORD *)(v8 + 24) + 4656LL),
             *(_DWORD *)(*(_QWORD *)(v8 + 24) + 56LL),
             *(_QWORD *)(v8 + 24) + 5000LL,
             result,
             SBYTE1(result),
             SBYTE2(result),
             v8 + 2024,
             (const char *)(v8 + 160),
             (const char *)(v8 + 169),
             (const char *)(v8 + 186),
             *(_BYTE *)(v8 + 450) & 1,
             v7,
             v3,
             v5,
             v31,
             a2);
  }
  return result;
}
