/*
 * XREFs of RaidUpdateZoneIoReceiveWithStatus @ 0x1C003E304
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 * Callees:
 *     IsZonedWriteRequest @ 0x1C00159A0 (IsZonedWriteRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x1C0022E6C (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x1C006890C (PortSrbGetLbaFromCdb.c)
 */

char __fastcall RaidUpdateZoneIoReceiveWithStatus(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v5; // r13
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // r14
  char v9; // r10
  unsigned int v10; // r11d
  unsigned int i; // r9d
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  unsigned __int8 v18; // bp
  char v19; // r11
  unsigned int v20; // r10d
  unsigned int j; // r9d
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rsi
  ULONG_PTR LbaFromCdb; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  signed __int8 v31; // al
  char v32; // tt
  __int64 v33; // rdx
  signed __int8 v34; // al

  v2 = 0;
  if ( !a2 )
    return 0;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v7 = *(_DWORD *)(v6 + 20);
    v8 = 0LL;
    v9 = 0;
    if ( !v7 )
    {
      v10 = *(_DWORD *)(v6 + 56);
      for ( i = 0; i < v10; ++i )
      {
        v12 = *(unsigned int *)(v6 + 4LL * i + 120);
        if ( (unsigned int)v12 >= 0x80 )
        {
          v13 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v12 < (unsigned int)v13 )
          {
            v14 = (unsigned int)v12;
            v15 = *(_DWORD *)(v12 + v6) - 64;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 == 1 && v14 + 40 <= v13 )
                {
                  v17 = v14 + v6 + 32;
                  if ( !*(_DWORD *)(v14 + v6 + 12) )
                    v17 = v8;
                  v8 = v17;
                  break;
                }
              }
              else if ( v14 + 56 <= v13 )
              {
                v9 = 1;
                if ( !*(_BYTE *)(v14 + v6 + 10) )
                  break;
                v8 = v14 + v6 + 24;
              }
            }
            else if ( v14 + 40 <= v13 )
            {
              if ( *(_BYTE *)(v14 + v6 + 10) )
                v8 = v14 + v6 + 24;
              break;
            }
            if ( v9 )
              break;
          }
        }
      }
    }
    v18 = 0;
    v19 = 0;
    if ( !v7 )
    {
      v20 = *(_DWORD *)(v6 + 56);
      for ( j = 0; j < v20; ++j )
      {
        v22 = *(unsigned int *)(v6 + 4LL * j + 120);
        if ( (unsigned int)v22 >= 0x80 )
        {
          v23 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v22 < (unsigned int)v23 )
          {
            v24 = (unsigned int)v22;
            v25 = *(_DWORD *)(v22 + v6) - 64;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                if ( v26 == 1 && v24 + 40 <= v23 )
                  break;
              }
              else if ( v24 + 56 <= v23 )
              {
                v18 = *(_BYTE *)(v24 + v6 + 10);
                v19 = 1;
              }
            }
            else if ( v24 + 40 <= v23 )
            {
              v18 = *(_BYTE *)(v24 + v6 + 10);
              break;
            }
            if ( v19 )
              break;
          }
        }
      }
    }
  }
  else
  {
    v18 = *(_BYTE *)(v6 + 10);
    v8 = v6 + 72;
  }
  v27 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( !IsZonedWriteRequest(v27, a2, 0LL, 0LL) )
    return 0;
  LbaFromCdb = PortSrbGetLbaFromCdb(v8, v18);
  if ( FeatureServicingSMRCapacityEnabled )
    LODWORD(v29) = GetZoneIndexFromUnitAndLba(v27, LbaFromCdb);
  else
    v29 = LbaFromCdb * *(unsigned int *)(v27 + 812) / *(_QWORD *)(v27 + 3280);
  v30 = (unsigned int)v29;
  do
  {
    v33 = *(_QWORD *)(v27 + 3304);
    v34 = *(_BYTE *)(v33 + v30);
    if ( v34 == -1 )
    {
      *(_DWORD *)(v6 + 12) |= 0x1000000u;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
      ++*(_DWORD *)(*(_QWORD *)(v27 + 24) + 5520LL);
      ++*(_DWORD *)(v27 + 2160);
      return 1;
    }
    v32 = *(_BYTE *)(v33 + v30);
    v31 = _InterlockedCompareExchange8((volatile signed __int8 *)(v30 + v33), v34 + 1, v34);
  }
  while ( v32 != v31 );
  if ( v31 )
    return 1;
  return v2;
}
