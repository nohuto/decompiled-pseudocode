/*
 * XREFs of RtlGetSystemGlobalData @ 0x140236E00
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

DWORD __cdecl RtlGetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int32 v4; // ecx
  __int64 v5; // rax
  __int32 v7; // ecx
  __int32 v8; // ecx
  __int32 v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _DWORD *v13; // rcx
  __int16 v14; // ax
  __int64 ThreadServerSilo; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int32 v19; // ecx
  __int32 v20; // ecx
  __int32 v21; // ecx
  __int32 v22; // ecx
  int v23; // ecx
  char v24; // al
  __int64 v25; // [rsp+48h] [rbp+20h]

  if ( DataId > GlobalDataIdNtMajorVersion )
  {
    v19 = DataId - 8;
    if ( !v19 )
    {
      if ( Size != 4 )
        return -1073741306;
      v18 = MEMORY[0xFFFFF78000000270];
      goto LABEL_62;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      if ( Size == 8 )
      {
        v5 = MEMORY[0xFFFFF780000002C8];
        goto LABEL_6;
      }
      return -1073741306;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
      {
        if ( Size == 2 )
        {
          v14 = MEMORY[0xFFFFF780000002D6];
          goto LABEL_26;
        }
        return -1073741306;
      }
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
          return -1073741811;
        if ( Size != 4 )
          return -1073741306;
        v18 = MEMORY[0xFFFFF780000002E4];
LABEL_62:
        *(_DWORD *)Buffer = v18;
        return 0;
      }
      if ( Size != 1 )
        return -1073741306;
      v24 = MEMORY[0xFFFFF780000002EC];
    }
    else
    {
      if ( Size != 1 )
        return -1073741306;
      v24 = MEMORY[0xFFFFF780000002D4];
    }
    *(_BYTE *)Buffer = v24;
    return 0;
  }
  if ( DataId == GlobalDataIdNtMajorVersion )
  {
    if ( Size != 4 )
      return -1073741306;
    v18 = MEMORY[0xFFFFF7800000026C];
    goto LABEL_62;
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
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( Size != 8 )
      return -1073741306;
    while ( 1 )
    {
      v25 = MEMORY[0xFFFFF78000000008];
      if ( MEMORY[0xFFFFF7800000000C] == MEMORY[0xFFFFF78000000010] )
        break;
      _mm_pause();
    }
    goto LABEL_39;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( Size != 8 )
      return -1073741306;
    if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
    {
      ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
      if ( ThreadServerSilo )
        v16 = *(_QWORD **)(ThreadServerSilo + 1464);
      else
        v16 = &unk_140D32580;
      v17 = v16[165] + 592LL;
    }
    else
    {
      v17 = 0xFFFFF78000000020uLL;
    }
    while ( 1 )
    {
      v25 = *(_QWORD *)v17;
      if ( HIDWORD(*(_QWORD *)v17) == *(_DWORD *)(v17 + 8) )
        break;
      _mm_pause();
    }
LABEL_39:
    *(_QWORD *)Buffer = v25;
    return 0;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( Size == 2 )
    {
      v14 = MEMORY[0xFFFFF7800000002C];
      goto LABEL_26;
    }
    return -1073741306;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( Size == 2 )
    {
      v14 = MEMORY[0xFFFFF7800000002E];
LABEL_26:
      *(_WORD *)Buffer = v14;
      return 0;
    }
    return -1073741306;
  }
  if ( v10 == 1 )
  {
    if ( Size == 4 )
    {
      if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
      {
        v11 = PsGetThreadServerSilo(KeGetCurrentThread());
        if ( v11 )
          v12 = *(_QWORD **)(v11 + 1464);
        else
          v12 = &unk_140D32580;
        v13 = (_DWORD *)(v12[165] + 584LL);
      }
      else
      {
        v13 = (_DWORD *)0xFFFFF78000000240LL;
      }
      *(_DWORD *)Buffer = *v13;
      return 0;
    }
    return -1073741306;
  }
  return -1073741811;
}
