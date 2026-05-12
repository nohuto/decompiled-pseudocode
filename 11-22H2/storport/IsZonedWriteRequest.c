/*
 * XREFs of IsZonedWriteRequest @ 0x1C000F7D0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009EC0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaUnitAsyncError @ 0x1C0016C64 (RaUnitAsyncError.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C00409D8 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C0040C6C (RaidUpdateZoneIoSubmission.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C0043214 (RaidUpdateZoneIoMetadata.c)
 * Callees:
 *     IsWriteRequest @ 0x1C0015118 (IsWriteRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x1C0022320 (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x1C007813C (PortSrbGetLbaFromCdb.c)
 */

char __fastcall IsZonedWriteRequest(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // r9
  __int64 v7; // r9
  char v8; // r14
  _BYTE *v10; // r10
  char v11; // si
  unsigned int v12; // ebp
  __int64 i; // r11
  __int64 v14; // rcx
  _BYTE *v15; // rbx
  unsigned __int64 v16; // r8
  int v17; // ecx
  int v18; // ecx
  char v19; // si
  unsigned int v20; // ebp
  __int64 j; // rbx
  __int64 v22; // rcx
  unsigned __int64 v23; // r11
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r10
  unsigned int v30; // r11d
  int v31; // eax
  __int64 LbaFromCdb; // rax

  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  if ( !a2 )
    return 0;
  if ( !a1 )
    return 0;
  if ( (*(_BYTE *)(a1 + 128) & 2) == 0 )
    return 0;
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 != 15 )
    return 0;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_BYTE *)(v7 + 2);
  if ( v8 == 40 ? *(_DWORD *)(v7 + 20) : *(unsigned __int8 *)(v7 + 2) )
    return 0;
  if ( v8 == 40 )
  {
    v10 = 0LL;
    v11 = 0;
    if ( !*(_DWORD *)(v7 + 20) )
    {
      v12 = *(_DWORD *)(v7 + 56);
      for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(i + 1) )
      {
        v14 = *(unsigned int *)(v7 + 4 * i + 120);
        v15 = v10;
        if ( (unsigned int)v14 >= 0x80 )
        {
          v16 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v14 < (unsigned int)v16 )
          {
            a2 = (unsigned int)v14;
            v17 = *(_DWORD *)(v14 + v7) - 64;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                if ( v18 == 1 && a2 + 40 <= v16 )
                {
                  v10 = (_BYTE *)(a2 + v7 + 32);
                  if ( !*(_DWORD *)(a2 + v7 + 12) )
                    v10 = v15;
                  break;
                }
              }
              else if ( a2 + 56 <= v16 )
              {
                v11 = 1;
                if ( !*(_BYTE *)(a2 + v7 + 10) )
                  break;
                v10 = (_BYTE *)(a2 + v7 + 24);
              }
            }
            else if ( a2 + 40 <= v16 )
            {
              if ( *(_BYTE *)(a2 + v7 + 10) )
                v10 = (_BYTE *)(a2 + v7 + 24);
              break;
            }
            if ( v11 )
              break;
          }
        }
      }
    }
    v19 = 0;
    if ( !*(_DWORD *)(v7 + 20) )
    {
      v20 = *(_DWORD *)(v7 + 56);
      for ( j = 0LL; (unsigned int)j < v20; j = (unsigned int)(j + 1) )
      {
        v22 = *(unsigned int *)(v7 + 4 * j + 120);
        if ( (unsigned int)v22 >= 0x80 )
        {
          v23 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v22 < (unsigned int)v23 )
          {
            v24 = (unsigned int)v22;
            v25 = *(_DWORD *)(v22 + v7) - 64;
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
                v19 = 1;
              }
            }
            else if ( v24 + 40 <= v23 )
            {
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
    v10 = (_BYTE *)(v7 + 72);
  }
  if ( !v10 )
    return 0;
  LOBYTE(a2) = *v10;
  if ( !(unsigned int)IsWriteRequest(0LL, a2) || *(_DWORD *)(a1 + 868) == (_DWORD)v27 )
    return 0;
  v31 = v8 == 40 ? *(_DWORD *)(v28 + 24) : *(_DWORD *)(v28 + 12);
  if ( (v31 & 0x1000) == 0 || *(_QWORD *)(a1 + 3352) == v27 )
    return 0;
  if ( a4 )
  {
    LbaFromCdb = PortSrbGetLbaFromCdb(v29, v30);
    *a4 = GetZoneIndexFromUnitAndLba(a1, LbaFromCdb);
  }
  return 1;
}
