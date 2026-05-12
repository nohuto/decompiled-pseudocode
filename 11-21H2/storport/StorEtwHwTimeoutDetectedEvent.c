/*
 * XREFs of StorEtwHwTimeoutDetectedEvent @ 0x1C005A81C
 * Callers:
 *     StorTickEventQueue @ 0x1C0013B30 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0zqjuuujssstqqbr12qt_EtwWriteTransfer @ 0x1C0059F94 (McTemplateK0zqjuuujssstqqbr12qt_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall StorEtwHwTimeoutDetectedEvent(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v3; // ebp
  char v4; // si
  __int64 v6; // r14
  char v7; // r9
  int v8; // r12d
  __int64 v9; // r15
  NTSTATUS result; // eax
  __int64 v11; // rcx
  char v12; // bl
  unsigned int v13; // edi
  unsigned int i; // r11d
  __int64 v15; // rdx
  unsigned __int64 v16; // r10
  __int64 v17; // r9
  int v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  unsigned __int8 v21; // r10
  char v22; // di
  unsigned int v23; // esi
  unsigned int v24; // ebx
  __int64 v25; // rdx
  unsigned __int64 v26; // r11
  __int64 v27; // r9
  int v28; // edx
  int v29; // edx
  char v30; // [rsp+E0h] [rbp+8h]

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
  if ( v7 == 40 )
    LODWORD(v11) = *(_DWORD *)(v2 + 40);
  else
    LODWORD(v11) = *(_DWORD *)(v2 + 20);
  v30 = v11;
  if ( v8 )
    goto LABEL_42;
  if ( v7 != 40 )
  {
    v6 = v2 + 72;
    goto LABEL_30;
  }
  v12 = 0;
  if ( !*(_DWORD *)(v2 + 20) )
  {
    v13 = *(_DWORD *)(v2 + 56);
    for ( i = 0; i < v13; ++i )
    {
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
                v20 = v17 + v2 + 32;
                if ( !*(_DWORD *)(v17 + v2 + 12) )
                  v20 = v6;
                v6 = v20;
                break;
              }
            }
            else if ( v17 + 56 <= v16 )
            {
              v12 = 1;
              if ( !*(_BYTE *)(v17 + v2 + 10) )
                break;
              v6 = v17 + v2 + 24;
            }
          }
          else if ( v17 + 40 <= v16 )
          {
            if ( *(_BYTE *)(v17 + v2 + 10) )
              v6 = v17 + v2 + 24;
            break;
          }
          if ( v12 )
            break;
        }
      }
    }
  }
LABEL_30:
  if ( !v6 )
    goto LABEL_42;
  v21 = 0;
  if ( *(_BYTE *)(v2 + 2) != 40 )
  {
    v21 = *(_BYTE *)(v2 + 10);
    goto LABEL_41;
  }
  v22 = 0;
  if ( *(_DWORD *)(v2 + 20) )
    goto LABEL_41;
  v23 = *(_DWORD *)(v2 + 56);
  v24 = 0;
  if ( !v23 )
    goto LABEL_40;
  while ( 1 )
  {
    v25 = *(unsigned int *)(v2 + 4LL * v24 + 120);
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v2 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_49:
    if ( ++v24 >= v23 )
      goto LABEL_40;
  }
  v27 = (unsigned int)v25;
  v28 = *(_DWORD *)(v25 + v2) - 64;
  if ( v28 )
  {
    v29 = v28 - 1;
    if ( v29 )
    {
      if ( v29 == 1 && v27 + 40 <= v26 )
        goto LABEL_40;
    }
    else if ( v27 + 56 <= v26 )
    {
      v21 = *(_BYTE *)(v27 + v2 + 10);
      v22 = 1;
    }
    goto LABEL_48;
  }
  if ( v27 + 40 > v26 )
  {
LABEL_48:
    if ( v22 )
      goto LABEL_40;
    goto LABEL_49;
  }
  v21 = *(_BYTE *)(v27 + v2 + 10);
LABEL_40:
  v4 = a2;
LABEL_41:
  v3 = v21;
LABEL_42:
  if ( byte_1C00799E3 < 0 )
  {
    v11 = (unsigned int)v11;
    LOBYTE(v11) = BYTE1(result);
    return McTemplateK0zqjuuujssstqqbr12qt_EtwWriteTransfer(
             v11,
             v9 + 186,
             (const GUID *)(a1 + 728),
             *(const wchar_t **)(*(_QWORD *)(v9 + 24) + 4592LL),
             *(_DWORD *)(*(_QWORD *)(v9 + 24) + 56LL),
             *(_QWORD *)(v9 + 24) + 4936LL,
             result,
             SBYTE1(result),
             SBYTE2(result),
             v9 + 1976,
             (const char *)(v9 + 160),
             (const char *)(v9 + 169),
             (const char *)(v9 + 186),
             *(_BYTE *)(v9 + 450) & 1,
             v8,
             v3,
             v6,
             v30,
             v4);
  }
  return result;
}
