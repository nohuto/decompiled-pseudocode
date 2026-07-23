/*
 * XREFs of RtlGetSystemGlobalData @ 0x18006DDF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 */

DWORD __cdecl RtlGetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int32 v4; // ecx
  __int64 v5; // rax
  __int32 v7; // ecx
  __int32 v8; // ecx
  __int32 v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  __int16 v16; // ax
  __int64 v17; // rdx
  char v18; // al
  __int32 v19; // ecx
  __int32 v20; // ecx
  __int32 v21; // ecx
  __int32 v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // [rsp+48h] [rbp+20h]

  if ( DataId <= GlobalDataIdKdDebuggerEnabled )
  {
    if ( DataId != GlobalDataIdKdDebuggerEnabled )
    {
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
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( !v11 )
              {
                if ( Size == 4 )
                {
                  if ( RtlGetCurrentServiceSessionId() )
                    v12 = (__int64)NtCurrentPeb()->SharedData + 584;
                  else
                    v12 = 2147353152LL;
                  *(_DWORD *)Buffer = *(_DWORD *)v12;
                  return 0;
                }
                return -1073741306;
              }
              v13 = v11 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                  {
                    if ( Size == 8 )
                    {
                      v5 = MEMORY[0x7FFE02C8];
                      goto LABEL_6;
                    }
                    return -1073741306;
                  }
                  return -1073741811;
                }
                if ( Size == 4 )
                {
                  v15 = MEMORY[0x7FFE0270];
LABEL_27:
                  *(_DWORD *)Buffer = v15;
                  return 0;
                }
              }
              else if ( Size == 4 )
              {
                v15 = MEMORY[0x7FFE026C];
                goto LABEL_27;
              }
              return -1073741306;
            }
            if ( Size != 2 )
              return -1073741306;
            v16 = MEMORY[0x7FFE002E];
          }
          else
          {
            if ( Size != 2 )
              return -1073741306;
            v16 = MEMORY[0x7FFE002C];
          }
LABEL_73:
          *(_WORD *)Buffer = v16;
          return 0;
        }
        if ( Size != 8 )
          return -1073741306;
        if ( RtlGetCurrentServiceSessionId() )
          v17 = (__int64)NtCurrentPeb()->SharedData + 592;
        else
          v17 = 2147352608LL;
        while ( 1 )
        {
          v26 = *(_QWORD *)v17;
          if ( HIDWORD(*(_QWORD *)v17) == *(_DWORD *)(v17 + 8) )
            break;
          _mm_pause();
        }
      }
      else
      {
        if ( Size != 8 )
          return -1073741306;
        while ( 1 )
        {
          v26 = MEMORY[0x7FFE0008];
          if ( MEMORY[0x7FFE000C] == MEMORY[0x7FFE0010] )
            break;
          _mm_pause();
        }
      }
      *(_QWORD *)Buffer = v26;
      return 0;
    }
    if ( Size != 1 )
      return -1073741306;
    v18 = MEMORY[0x7FFE02D4];
LABEL_47:
    *(_BYTE *)Buffer = v18;
    return 0;
  }
  v19 = DataId - 11;
  if ( !v19 )
  {
    if ( Size != 2 )
      return -1073741306;
    v16 = MEMORY[0x7FFE02D6];
    goto LABEL_73;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    if ( Size != 1 )
      return -1073741306;
    v18 = MEMORY[0x7FFE02EC];
    goto LABEL_47;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    if ( Size == 4 )
    {
      v15 = MEMORY[0x7FFE02E4];
      goto LABEL_27;
    }
    return -1073741306;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    if ( Size == 4 )
    {
      v15 = MEMORY[0x7FFE02F0];
      goto LABEL_27;
    }
    return -1073741306;
  }
  v23 = v22 - 2;
  if ( !v23 )
  {
    if ( Size != 1 )
      return -1073741306;
    v18 = MEMORY[0x7FFE03C7];
    goto LABEL_47;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    if ( Size != 1 )
      return -1073741306;
    v18 = MEMORY[0x7FFE03C6];
    goto LABEL_47;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    if ( Size != 2 )
      return -1073741306;
    v16 = MEMORY[0x7FFE03C6];
    goto LABEL_73;
  }
  if ( v25 == 1 )
  {
    if ( Size == 8 )
    {
      v5 = MEMORY[0x7FFE03B8];
      goto LABEL_6;
    }
    return -1073741306;
  }
  return -1073741811;
}
