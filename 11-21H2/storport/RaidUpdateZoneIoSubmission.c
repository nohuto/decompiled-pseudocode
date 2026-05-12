/*
 * XREFs of RaidUpdateZoneIoSubmission @ 0x1C003E538
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00050F0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C0018A88 (RaidUpdateZoneIoMetadata.c)
 * Callees:
 *     IsZonedWriteRequest @ 0x1C00159A0 (IsZonedWriteRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x1C0022E6C (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x1C006890C (PortSrbGetLbaFromCdb.c)
 */

void __fastcall RaidUpdateZoneIoSubmission(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  int v7; // r12d
  int v8; // r14d
  __int64 v9; // rsi
  char v10; // bl
  unsigned int v11; // edi
  __int64 i; // r10
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  unsigned __int8 v19; // di
  char v20; // bp
  unsigned int v21; // ebx
  __int64 v22; // r10
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // r8
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rbx
  ULONG_PTR LbaFromCdb; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r8
  char v32; // tt
  __int64 v33; // rdx
  signed __int8 v34; // al

  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  if ( !a2 )
    return;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_DWORD *)(v6 + 12);
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v19 = *(_BYTE *)(v6 + 10);
    v9 = v6 + 72;
    goto LABEL_42;
  }
  v8 = *(_DWORD *)(v6 + 20);
  v9 = 0LL;
  v10 = 0;
  if ( !v8 )
  {
    v11 = *(_DWORD *)(v6 + 56);
    for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(i + 1) )
    {
      v13 = *(unsigned int *)(v6 + 4 * i + 120);
      if ( (unsigned int)v13 >= 0x80 )
      {
        v14 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v13 < (unsigned int)v14 )
        {
          v15 = (unsigned int)v13;
          v16 = *(_DWORD *)(v13 + v6) - 64;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 == 1 && v15 + 40 <= v14 )
              {
                v18 = v15 + v6 + 32;
                if ( !*(_DWORD *)(v15 + v6 + 12) )
                  v18 = v9;
                v9 = v18;
                break;
              }
            }
            else if ( v15 + 56 <= v14 )
            {
              v10 = 1;
              if ( !*(_BYTE *)(v15 + v6 + 10) )
                break;
              v9 = v15 + v6 + 24;
            }
          }
          else if ( v15 + 40 <= v14 )
          {
            if ( *(_BYTE *)(v15 + v6 + 10) )
              v9 = v15 + v6 + 24;
            break;
          }
          if ( v10 )
            break;
        }
      }
    }
  }
  v19 = 0;
  v20 = 0;
  if ( v8 )
    goto LABEL_42;
  v21 = *(_DWORD *)(v6 + 56);
  v22 = 0LL;
  if ( !v21 )
    goto LABEL_42;
  while ( 1 )
  {
    v23 = *(unsigned int *)(v6 + 4 * v22 + 120);
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v23 < (unsigned int)v24 )
        break;
    }
LABEL_38:
    v22 = (unsigned int)(v22 + 1);
    if ( (unsigned int)v22 >= v21 )
      goto LABEL_42;
  }
  v25 = (unsigned int)v23;
  v26 = *(_DWORD *)(v23 + v6) - 64;
  if ( v26 )
  {
    v27 = v26 - 1;
    if ( v27 )
    {
      if ( v27 == 1 && v25 + 40 <= v24 )
        goto LABEL_42;
    }
    else if ( v25 + 56 <= v24 )
    {
      v19 = *(_BYTE *)(v25 + v6 + 10);
      v20 = 1;
    }
    goto LABEL_37;
  }
  if ( v25 + 40 > v24 )
  {
LABEL_37:
    if ( v20 )
      goto LABEL_42;
    goto LABEL_38;
  }
  v19 = *(_BYTE *)(v25 + v6 + 10);
LABEL_42:
  v28 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( IsZonedWriteRequest(v28, a2, 0LL, 0LL) )
  {
    LbaFromCdb = PortSrbGetLbaFromCdb(v9, v19);
    if ( FeatureServicingSMRCapacityEnabled )
      LODWORD(v30) = GetZoneIndexFromUnitAndLba(v28, LbaFromCdb);
    else
      v30 = LbaFromCdb * *(unsigned int *)(v28 + 812) / *(_QWORD *)(v28 + 3280);
    if ( (v7 & 0x1000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 128));
    }
    else
    {
      v31 = (unsigned int)v30;
      do
      {
        v33 = *(_QWORD *)(v28 + 3304);
        v34 = *(_BYTE *)(v33 + v31);
        if ( !v34 )
          break;
        v32 = *(_BYTE *)(v33 + v31);
      }
      while ( v32 != _InterlockedCompareExchange8((volatile signed __int8 *)(v31 + v33), v34 - 1, v34) );
    }
  }
}
