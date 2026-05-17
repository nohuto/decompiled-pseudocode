/*
 * XREFs of RtlGetSystemGlobalData @ 0x18006DDF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall RtlGetSystemGlobalData(int a1, _QWORD *a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  __int16 v16; // ax
  __int64 v17; // rdx
  char v18; // al
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // [rsp+48h] [rbp+20h]

  if ( a1 <= 10 )
  {
    if ( a1 != 10 )
    {
      v4 = a1 - 1;
      if ( !v4 )
      {
        if ( a3 == 8 )
        {
          v5 = MEMORY[0x7FFE0250];
LABEL_6:
          *a2 = v5;
          return 0LL;
        }
        return 3221225990LL;
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
                if ( a3 == 4 )
                {
                  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                    v12 = (__int64)NtCurrentPeb()->SharedData + 584;
                  else
                    v12 = 2147353152LL;
                  *(_DWORD *)a2 = *(_DWORD *)v12;
                  return 0LL;
                }
                return 3221225990LL;
              }
              v13 = v11 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                  {
                    if ( a3 == 8 )
                    {
                      v5 = MEMORY[0x7FFE02C8];
                      goto LABEL_6;
                    }
                    return 3221225990LL;
                  }
                  return 3221225485LL;
                }
                if ( a3 == 4 )
                {
                  v15 = MEMORY[0x7FFE0270];
LABEL_27:
                  *(_DWORD *)a2 = v15;
                  return 0LL;
                }
              }
              else if ( a3 == 4 )
              {
                v15 = MEMORY[0x7FFE026C];
                goto LABEL_27;
              }
              return 3221225990LL;
            }
            if ( a3 != 2 )
              return 3221225990LL;
            v16 = MEMORY[0x7FFE002E];
          }
          else
          {
            if ( a3 != 2 )
              return 3221225990LL;
            v16 = MEMORY[0x7FFE002C];
          }
LABEL_73:
          *(_WORD *)a2 = v16;
          return 0LL;
        }
        if ( a3 != 8 )
          return 3221225990LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
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
        if ( a3 != 8 )
          return 3221225990LL;
        while ( 1 )
        {
          v26 = MEMORY[0x7FFE0008];
          if ( MEMORY[0x7FFE000C] == MEMORY[0x7FFE0010] )
            break;
          _mm_pause();
        }
      }
      *a2 = v26;
      return 0LL;
    }
    if ( a3 != 1 )
      return 3221225990LL;
    v18 = MEMORY[0x7FFE02D4];
LABEL_47:
    *(_BYTE *)a2 = v18;
    return 0LL;
  }
  v19 = a1 - 11;
  if ( !v19 )
  {
    if ( a3 != 2 )
      return 3221225990LL;
    v16 = MEMORY[0x7FFE02D6];
    goto LABEL_73;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    if ( a3 != 1 )
      return 3221225990LL;
    v18 = MEMORY[0x7FFE02EC];
    goto LABEL_47;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    if ( a3 == 4 )
    {
      v15 = MEMORY[0x7FFE02E4];
      goto LABEL_27;
    }
    return 3221225990LL;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    if ( a3 == 4 )
    {
      v15 = MEMORY[0x7FFE02F0];
      goto LABEL_27;
    }
    return 3221225990LL;
  }
  v23 = v22 - 2;
  if ( !v23 )
  {
    if ( a3 != 1 )
      return 3221225990LL;
    v18 = MEMORY[0x7FFE03C7];
    goto LABEL_47;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    if ( a3 != 1 )
      return 3221225990LL;
    v18 = MEMORY[0x7FFE03C6];
    goto LABEL_47;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    if ( a3 != 2 )
      return 3221225990LL;
    v16 = MEMORY[0x7FFE03C6];
    goto LABEL_73;
  }
  if ( v25 == 1 )
  {
    if ( a3 == 8 )
    {
      v5 = MEMORY[0x7FFE03B8];
      goto LABEL_6;
    }
    return 3221225990LL;
  }
  return 3221225485LL;
}
