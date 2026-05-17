/*
 * XREFs of RtlGetSystemGlobalData @ 0x1800735F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall RtlGetSystemGlobalData(int a1, _DWORD *a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  char v20; // al
  __int64 v21; // [rsp+48h] [rbp+20h]

  if ( a1 > 7 )
  {
    v15 = a1 - 8;
    if ( !v15 )
    {
      if ( a3 != 4 )
        return 3221225990LL;
      v14 = MEMORY[0x7FFE0270];
      goto LABEL_58;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( a3 == 8 )
      {
        v5 = MEMORY[0x7FFE02C8];
        goto LABEL_6;
      }
      return 3221225990LL;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( a3 == 2 )
        {
          v12 = MEMORY[0x7FFE02D6];
          goto LABEL_24;
        }
        return 3221225990LL;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 )
          return 3221225485LL;
        if ( a3 != 4 )
          return 3221225990LL;
        v14 = MEMORY[0x7FFE02E4];
LABEL_58:
        *a2 = v14;
        return 0LL;
      }
      if ( a3 != 1 )
        return 3221225990LL;
      v20 = MEMORY[0x7FFE02EC];
    }
    else
    {
      if ( a3 != 1 )
        return 3221225990LL;
      v20 = MEMORY[0x7FFE02D4];
    }
    *(_BYTE *)a2 = v20;
    return 0LL;
  }
  if ( a1 == 7 )
  {
    if ( a3 != 4 )
      return 3221225990LL;
    v14 = MEMORY[0x7FFE026C];
    goto LABEL_58;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    if ( a3 == 8 )
    {
      v5 = MEMORY[0x7FFE0250];
LABEL_6:
      *(_QWORD *)a2 = v5;
      return 0LL;
    }
    return 3221225990LL;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( a3 != 8 )
      return 3221225990LL;
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
    if ( a3 != 8 )
      return 3221225990LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
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
    *(_QWORD *)a2 = v21;
    return 0LL;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        if ( a3 == 4 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v11 = (__int64)NtCurrentPeb()->SharedData + 584;
          else
            v11 = 2147353152LL;
          *a2 = *(_DWORD *)v11;
          return 0LL;
        }
        return 3221225990LL;
      }
      return 3221225485LL;
    }
    if ( a3 == 2 )
    {
      v12 = MEMORY[0x7FFE002E];
LABEL_24:
      *(_WORD *)a2 = v12;
      return 0LL;
    }
  }
  else if ( a3 == 2 )
  {
    v12 = MEMORY[0x7FFE002C];
    goto LABEL_24;
  }
  return 3221225990LL;
}
