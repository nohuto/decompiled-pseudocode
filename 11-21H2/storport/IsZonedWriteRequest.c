/*
 * XREFs of IsZonedWriteRequest @ 0x1C00159A0
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00050F0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000BF68 (RaUnitAsyncError.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C0018A88 (RaidUpdateZoneIoMetadata.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C003E304 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C003E538 (RaidUpdateZoneIoSubmission.c)
 * Callees:
 *     GetZoneIndexFromUnitAndLba @ 0x1C0022E6C (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x1C006890C (PortSrbGetLbaFromCdb.c)
 */

char __fastcall IsZonedWriteRequest(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // bp
  _BYTE *v10; // r9
  char v11; // di
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // r10
  __int64 v16; // r8
  int v17; // ecx
  int v18; // ecx
  _BYTE *v19; // rcx
  char v20; // si
  unsigned __int8 v21; // r8
  unsigned int v22; // r14d
  __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  __int64 v26; // r10
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  __int64 LbaFromCdb; // rax
  __int64 v31; // r11
  unsigned __int64 v32; // rax

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
    if ( *(_DWORD *)(v7 + 20) )
      goto LABEL_32;
    v12 = *(_DWORD *)(v7 + 56);
    v13 = 0LL;
    if ( !v12 )
      goto LABEL_32;
    while ( 1 )
    {
      v14 = *(unsigned int *)(v7 + 4 * v13 + 120);
      if ( (unsigned int)v14 >= 0x80 )
      {
        v15 = *(unsigned int *)(v7 + 16);
        if ( (unsigned int)v14 < (unsigned int)v15 )
        {
          v16 = (unsigned int)v14;
          v17 = *(_DWORD *)(v14 + v7) - 64;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              if ( v18 == 1 && v16 + 40 <= v15 )
              {
                v19 = (_BYTE *)(v16 + v7 + 32);
                if ( !*(_DWORD *)(v16 + v7 + 12) )
                  v19 = v10;
                v10 = v19;
                goto LABEL_32;
              }
            }
            else if ( v16 + 56 <= v15 )
            {
              v11 = 1;
              if ( !*(_BYTE *)(v16 + v7 + 10) )
                goto LABEL_32;
              v10 = (_BYTE *)(v16 + v7 + 24);
            }
          }
          else if ( v16 + 40 <= v15 )
          {
            if ( *(_BYTE *)(v16 + v7 + 10) )
              v10 = (_BYTE *)(v16 + v7 + 24);
LABEL_32:
            v20 = 0;
            v21 = 0;
            if ( *(_DWORD *)(v7 + 20) )
              goto LABEL_49;
            v22 = *(_DWORD *)(v7 + 56);
            v23 = 0LL;
            if ( !v22 )
              goto LABEL_49;
            while ( 1 )
            {
              v24 = *(unsigned int *)(v7 + 4 * v23 + 120);
              if ( (unsigned int)v24 >= 0x80 )
              {
                v25 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v24 < (unsigned int)v25 )
                {
                  v26 = (unsigned int)v24;
                  v27 = *(_DWORD *)(v24 + v7) - 64;
                  if ( v27 )
                  {
                    v28 = v27 - 1;
                    if ( v28 )
                    {
                      if ( v28 == 1 && v26 + 40 <= v25 )
                        goto LABEL_49;
                    }
                    else if ( v26 + 56 <= v25 )
                    {
                      v21 = *(_BYTE *)(v26 + v7 + 10);
                      v20 = 1;
                    }
                  }
                  else if ( v26 + 40 <= v25 )
                  {
                    v21 = *(_BYTE *)(v26 + v7 + 10);
                    goto LABEL_49;
                  }
                  if ( v20 )
                    goto LABEL_49;
                }
              }
              v23 = (unsigned int)(v23 + 1);
              if ( (unsigned int)v23 >= v22 )
                goto LABEL_49;
            }
          }
          if ( v11 )
            goto LABEL_32;
        }
      }
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= v12 )
        goto LABEL_32;
    }
  }
  v21 = *(_BYTE *)(v7 + 10);
  v10 = (_BYTE *)(v7 + 72);
LABEL_49:
  if ( !v10 || ((*v10 - 10) & 0x5F) != 0 || !*(_DWORD *)(a1 + 812) )
    return 0;
  v29 = v8 == 40 ? *(_DWORD *)(v7 + 24) : *(_DWORD *)(v7 + 12);
  if ( (v29 & 0x1000) == 0 || !*(_QWORD *)(a1 + 3304) )
    return 0;
  if ( a4 )
  {
    LbaFromCdb = PortSrbGetLbaFromCdb(v10, v21);
    if ( FeatureServicingSMRCapacityEnabled )
      LODWORD(v32) = GetZoneIndexFromUnitAndLba(v31, LbaFromCdb);
    else
      v32 = LbaFromCdb * (unsigned __int64)*(unsigned int *)(v31 + 812) / *(_QWORD *)(v31 + 3280);
    *a4 = v32;
  }
  return 1;
}
