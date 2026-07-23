/*
 * XREFs of RtlGetSystemGlobalData @ 0x1800735F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 */

DWORD __cdecl RtlGetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int32 v4; // ecx
  __int64 v5; // rax
  __int32 v7; // ecx
  __int32 v8; // ecx
  __int32 v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rdx
  int v14; // eax
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  int v19; // ecx
  char v20; // al
  __int64 v21; // [rsp+48h] [rbp+20h]

  if ( DataId > GlobalDataIdNtMajorVersion )
  {
    v15 = DataId - 8;
    if ( !v15 )
    {
      if ( Size != 4 )
        return -1073741306;
      v14 = MEMORY[0x7FFE0270];
      goto LABEL_58;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( Size == 8 )
      {
        v5 = MEMORY[0x7FFE02C8];
        goto LABEL_6;
      }
      return -1073741306;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( Size == 2 )
        {
          v12 = MEMORY[0x7FFE02D6];
          goto LABEL_24;
        }
        return -1073741306;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 )
          return -1073741811;
        if ( Size != 4 )
          return -1073741306;
        v14 = MEMORY[0x7FFE02E4];
LABEL_58:
        *(_DWORD *)Buffer = v14;
        return 0;
      }
      if ( Size != 1 )
        return -1073741306;
      v20 = MEMORY[0x7FFE02EC];
    }
    else
    {
      if ( Size != 1 )
        return -1073741306;
      v20 = MEMORY[0x7FFE02D4];
    }
    *(_BYTE *)Buffer = v20;
    return 0;
  }
  if ( DataId == GlobalDataIdNtMajorVersion )
  {
    if ( Size != 4 )
      return -1073741306;
    v14 = MEMORY[0x7FFE026C];
    goto LABEL_58;
  }
  v4 = DataId - 1;
  if ( !v4 )
  {
    if ( Size == 8 )
    {
      v5 = MEMORY[0x7FFE0250];
LABEL_6:
      *(_QWORD *)Buffer = v5;
      return 0;
    }
    return -1073741306;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( Size != 8 )
      return -1073741306;
    while ( 1 )
    {
      v21 = MEMORY[0x7FFE0008];
      if ( MEMORY[0x7FFE000C] == MEMORY[0x7FFE0010] )
        break;
      _mm_pause();
    }
    goto LABEL_36;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( Size != 8 )
      return -1073741306;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 592;
    else
      v13 = 2147352608LL;
    while ( 1 )
    {
      v21 = *(_QWORD *)v13;
      if ( HIDWORD(*(_QWORD *)v13) == *(_DWORD *)(v13 + 8) )
        break;
      _mm_pause();
    }
LABEL_36:
    *(_QWORD *)Buffer = v21;
    return 0;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        if ( Size == 4 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v11 = (__int64)NtCurrentPeb()->SharedData + 584;
          else
            v11 = 2147353152LL;
          *(_DWORD *)Buffer = *(_DWORD *)v11;
          return 0;
        }
        return -1073741306;
      }
      return -1073741811;
    }
    if ( Size == 2 )
    {
      v12 = MEMORY[0x7FFE002E];
LABEL_24:
      *(_WORD *)Buffer = v12;
      return 0;
    }
  }
  else if ( Size == 2 )
  {
    v12 = MEMORY[0x7FFE002C];
    goto LABEL_24;
  }
  return -1073741306;
}
