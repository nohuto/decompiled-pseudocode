/*
 * XREFs of RtlSetSystemGlobalData @ 0x14025D830
 * Callers:
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

DWORD __cdecl RtlSetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int32 v4; // ecx
  __int32 v6; // ecx
  __int32 v7; // ecx
  __int64 ThreadServerSilo; // rax
  _QWORD *v9; // rcx

  v4 = DataId - 1;
  if ( v4 )
  {
    v6 = v4 - 3;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return -1073741811;
        if ( Size == 4 )
        {
          if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
          {
            ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
            v9 = &unk_140D32580;
            if ( ThreadServerSilo )
              v9 = *(_QWORD **)(ThreadServerSilo + 1464);
            *(_DWORD *)(v9[165] + 584LL) = *(_DWORD *)Buffer;
          }
          else
          {
            MEMORY[0xFFFFF78000000240] = *(_DWORD *)Buffer;
          }
          return 0;
        }
      }
      else if ( Size == 2 )
      {
        MEMORY[0xFFFFF7800000002E] = *(_WORD *)Buffer;
        return 0;
      }
    }
    else if ( Size == 2 )
    {
      MEMORY[0xFFFFF7800000002C] = *(_WORD *)Buffer;
      return 0;
    }
  }
  else if ( Size == 8 )
  {
    MEMORY[0xFFFFF78000000250] = *(_QWORD *)Buffer;
    return 0;
  }
  return -1073741306;
}
