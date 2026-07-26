/*
 * XREFs of ndisSleepStudyGetNameFromReasonCode @ 0x1C0054FD0
 * Callers:
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C011EFE4 (ndisPublishSleepStudyNapsCustomData.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall ndisSleepStudyGetNameFromReasonCode(unsigned int a1, _OWORD *a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  const wchar_t *result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int128 v19; // [rsp+0h] [rbp-10h]

  if ( a1 > 0x21 )
  {
    if ( a1 > 0x32 )
    {
      v15 = a1 - 51;
      if ( !v15 )
      {
        result = L"Cancel Direct OID";
        DWORD2(v19) = 18;
        goto LABEL_59;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          result = L"Cancel Data Send";
          goto LABEL_18;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          result = L"Receive Complete";
          goto LABEL_18;
        }
        if ( v18 != 11 )
          goto LABEL_53;
        result = L"Wait Wake";
      }
      else
      {
        result = L"Data Send";
      }
    }
    else
    {
      if ( a1 == 50 )
      {
        result = L"Direct OID Processing";
        DWORD2(v19) = 22;
        goto LABEL_59;
      }
      v11 = a1 - 34;
      if ( !v11 )
      {
        result = L"Pause Handler";
        goto LABEL_31;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        result = L"Restart Handler";
        goto LABEL_15;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        result = L"Reset Handler";
        goto LABEL_31;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 12 )
          goto LABEL_53;
        result = L"Hang Handler";
        goto LABEL_21;
      }
      result = L"PnP Event";
    }
    DWORD2(v19) = 10;
    goto LABEL_59;
  }
  if ( a1 == 33 )
  {
    result = L"OID Processing";
    goto LABEL_13;
  }
  if ( a1 > 6 )
  {
    v7 = a1 - 7;
    if ( !v7 )
    {
      result = L"AoAc Nic Quiet";
      goto LABEL_13;
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 3;
      if ( !v9 )
      {
        result = L"Apply Interface Change";
        DWORD2(v19) = 23;
        goto LABEL_59;
      }
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          goto LABEL_53;
        result = L"Bind Changes";
      }
      else
      {
        result = L"Magic Packet";
      }
LABEL_21:
      DWORD2(v19) = 13;
      goto LABEL_59;
    }
    result = L"PnP Operation";
LABEL_31:
    DWORD2(v19) = 14;
    goto LABEL_59;
  }
  if ( a1 == 6 )
  {
    result = L"System Power";
    goto LABEL_21;
  }
  if ( !a1 )
  {
    result = L"Unspecified";
    DWORD2(v19) = 12;
    goto LABEL_59;
  }
  v2 = a1 - 1;
  if ( !v2 )
  {
    result = L"Query PnP Remove";
LABEL_18:
    DWORD2(v19) = 17;
    goto LABEL_59;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    result = L"PnP Remove";
    DWORD2(v19) = 11;
    goto LABEL_59;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    result = L"Surprise Remove";
LABEL_15:
    DWORD2(v19) = 16;
    goto LABEL_59;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    result = L"Query PnP Stop";
LABEL_13:
    DWORD2(v19) = 15;
    goto LABEL_59;
  }
  if ( v5 != 1 )
  {
LABEL_53:
    result = L"Unknown";
    DWORD2(v19) = 8;
    goto LABEL_59;
  }
  result = L"PnP Stop";
  DWORD2(v19) = 9;
LABEL_59:
  *(_QWORD *)&v19 = result;
  *a2 = v19;
  return result;
}
