/*
 * XREFs of RtlGetSystemGlobalData @ 0x140341780
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 */

DWORD __cdecl RtlGetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int32 v4; // ecx
  __int64 v5; // rax
  char v7; // al
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _DWORD *v18; // rcx
  __int16 v19; // ax
  __int64 CurrentServerSilo; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int32 v23; // ecx
  __int32 v24; // ecx
  __int32 v25; // ecx
  __int32 v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // [rsp+48h] [rbp+20h]

  if ( DataId == GlobalDataIdKdDebuggerEnabled )
  {
    if ( Size != 1 )
      return -1073741306;
    v7 = MEMORY[0xFFFFF780000002D4];
    goto LABEL_10;
  }
  if ( DataId > GlobalDataIdKdDebuggerEnabled )
  {
    v23 = DataId - 11;
    if ( !v23 )
    {
      if ( Size != 2 )
        return -1073741306;
      v19 = MEMORY[0xFFFFF780000002D6];
      goto LABEL_77;
    }
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( !v25 )
      {
        if ( Size == 4 )
        {
          v15 = MEMORY[0xFFFFF780000002E4];
          goto LABEL_26;
        }
        return -1073741306;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        if ( Size == 4 )
        {
          v15 = MEMORY[0xFFFFF780000002F0];
          goto LABEL_26;
        }
        return -1073741306;
      }
      v27 = v26 - 2;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 != 1 )
              return -1073741811;
            if ( Size == 8 )
            {
              v5 = MEMORY[0xFFFFF780000003B8];
              goto LABEL_6;
            }
            return -1073741306;
          }
          if ( Size != 2 )
            return -1073741306;
          v19 = MEMORY[0xFFFFF780000003C6];
LABEL_77:
          *(_WORD *)Buffer = v19;
          return 0;
        }
        if ( Size != 1 )
          return -1073741306;
        v7 = MEMORY[0xFFFFF780000003C6];
      }
      else
      {
        if ( Size != 1 )
          return -1073741306;
        v7 = MEMORY[0xFFFFF780000003C7];
      }
    }
    else
    {
      if ( Size != 1 )
        return -1073741306;
      v7 = MEMORY[0xFFFFF780000002EC];
    }
LABEL_10:
    *(_BYTE *)Buffer = v7;
    return 0;
  }
  v4 = DataId - 1;
  if ( !v4 )
  {
    if ( Size == 8 )
    {
      v5 = MEMORY[0xFFFFF78000000250];
LABEL_6:
      *(_QWORD *)Buffer = v5;
      return 0;
    }
    return -1073741306;
  }
  v8 = v4 - 1;
  if ( !v8 )
  {
    if ( Size != 8 )
      return -1073741306;
    while ( 1 )
    {
      v30 = MEMORY[0xFFFFF78000000008];
      if ( MEMORY[0xFFFFF7800000000C] == MEMORY[0xFFFFF78000000010] )
        break;
      _mm_pause();
    }
    goto LABEL_51;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( Size != 8 )
      return -1073741306;
    if ( PsIsCurrentThreadInServerSilo() )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      if ( CurrentServerSilo )
        v21 = *(_QWORD **)(CurrentServerSilo + 1488);
      else
        v21 = &PspHostSiloGlobals;
      v22 = v21[165] + 592LL;
    }
    else
    {
      v22 = 0xFFFFF78000000020uLL;
    }
    while ( 1 )
    {
      v30 = *(_QWORD *)v22;
      if ( HIDWORD(*(_QWORD *)v22) == *(_DWORD *)(v22 + 8) )
        break;
      _mm_pause();
    }
LABEL_51:
    *(_QWORD *)Buffer = v30;
    return 0;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( Size != 2 )
      return -1073741306;
    v19 = MEMORY[0xFFFFF7800000002C];
    goto LABEL_77;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( Size != 2 )
      return -1073741306;
    v19 = MEMORY[0xFFFFF7800000002E];
    goto LABEL_77;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( Size == 4 )
    {
      if ( PsIsCurrentThreadInServerSilo() )
      {
        v16 = PsGetCurrentServerSilo();
        if ( v16 )
          v17 = *(_QWORD **)(v16 + 1488);
        else
          v17 = &PspHostSiloGlobals;
        v18 = (_DWORD *)(v17[165] + 584LL);
      }
      else
      {
        v18 = (_DWORD *)0xFFFFF78000000240LL;
      }
      *(_DWORD *)Buffer = *v18;
      return 0;
    }
    return -1073741306;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( Size == 4 )
    {
      v15 = MEMORY[0xFFFFF7800000026C];
      goto LABEL_26;
    }
    return -1073741306;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( Size == 4 )
    {
      v15 = MEMORY[0xFFFFF78000000270];
LABEL_26:
      *(_DWORD *)Buffer = v15;
      return 0;
    }
    return -1073741306;
  }
  if ( v14 == 1 )
  {
    if ( Size == 8 )
    {
      v5 = MEMORY[0xFFFFF780000002C8];
      goto LABEL_6;
    }
    return -1073741306;
  }
  return -1073741811;
}
