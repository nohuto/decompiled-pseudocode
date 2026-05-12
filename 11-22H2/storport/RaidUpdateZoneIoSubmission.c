/*
 * XREFs of RaidUpdateZoneIoSubmission @ 0x1C0040C6C
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009EC0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C0043214 (RaidUpdateZoneIoMetadata.c)
 * Callees:
 *     IsZonedWriteRequest @ 0x1C000F7D0 (IsZonedWriteRequest.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x1C0022320 (GetZoneIndexFromUnitAndLba.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C0040214 (RaidGetIoStartingLbaAndLength.c)
 *     PortSrbGetLbaFromCdb @ 0x1C007813C (PortSrbGetLbaFromCdb.c)
 */

void __fastcall RaidUpdateZoneIoSubmission(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  int v7; // r12d
  char *v8; // rsi
  char v9; // r14
  unsigned int v10; // ebp
  __int64 i; // r9
  __int64 v12; // rcx
  char *v13; // r10
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  char v18; // r14
  unsigned __int8 v19; // bp
  unsigned int v20; // r10d
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // r14
  ULONG_PTR LbaFromCdb; // rax
  __int64 ZoneIndexFromUnitAndLba; // rbp
  __int64 j; // rdx
  char v31; // tt
  signed __int8 v32; // al
  _QWORD *v33; // r11
  __int64 v34; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+98h] [rbp+20h] BYREF

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
    v8 = (char *)(v6 + 72);
    goto LABEL_42;
  }
  v8 = 0LL;
  v9 = 0;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v10 = *(_DWORD *)(v6 + 56);
    for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
    {
      v12 = *(unsigned int *)(v6 + 4 * i + 120);
      v13 = v8;
      if ( (unsigned int)v12 >= 0x80 )
      {
        v14 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v12 < (unsigned int)v14 )
        {
          v15 = (unsigned int)v12;
          v16 = *(_DWORD *)(v12 + v6) - 64;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 == 1 && v15 + 40 <= v14 )
              {
                v8 = (char *)(v15 + v6 + 32);
                if ( !*(_DWORD *)(v15 + v6 + 12) )
                  v8 = v13;
                break;
              }
            }
            else if ( v15 + 56 <= v14 )
            {
              v9 = 1;
              if ( !*(_BYTE *)(v15 + v6 + 10) )
                break;
              v8 = (char *)(v15 + v6 + 24);
            }
          }
          else if ( v15 + 40 <= v14 )
          {
            if ( *(_BYTE *)(v15 + v6 + 10) )
              v8 = (char *)(v15 + v6 + 24);
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
  if ( *(_DWORD *)(v6 + 20) )
    goto LABEL_42;
  v20 = *(_DWORD *)(v6 + 56);
  v21 = 0LL;
  if ( !v20 )
    goto LABEL_42;
  while ( 1 )
  {
    v22 = *(unsigned int *)(v6 + 4 * v21 + 120);
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_38:
    v21 = (unsigned int)(v21 + 1);
    if ( (unsigned int)v21 >= v20 )
      goto LABEL_42;
  }
  v24 = (unsigned int)v22;
  v25 = *(_DWORD *)(v22 + v6) - 64;
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( v26 )
    {
      if ( v26 == 1 && v24 + 40 <= v23 )
        goto LABEL_42;
    }
    else if ( v24 + 56 <= v23 )
    {
      v19 = *(_BYTE *)(v24 + v6 + 10);
      v18 = 1;
    }
    goto LABEL_37;
  }
  if ( v24 + 40 > v23 )
  {
LABEL_37:
    if ( v18 )
      goto LABEL_42;
    goto LABEL_38;
  }
  v19 = *(_BYTE *)(v24 + v6 + 10);
LABEL_42:
  v27 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( IsZonedWriteRequest(v27, a2, 0LL, 0LL) )
  {
    LbaFromCdb = PortSrbGetLbaFromCdb(v8, v19);
    ZoneIndexFromUnitAndLba = (unsigned int)GetZoneIndexFromUnitAndLba(v27, LbaFromCdb);
    if ( (v7 & 0x1000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 176));
    }
    else
    {
      for ( j = *(_QWORD *)(v27 + 3352); ; j = *(_QWORD *)(v27 + 3352) )
      {
        v32 = *(_BYTE *)(j + ZoneIndexFromUnitAndLba);
        if ( !v32 )
          break;
        v31 = *(_BYTE *)(j + ZoneIndexFromUnitAndLba);
        if ( v31 == _InterlockedCompareExchange8((volatile signed __int8 *)(j + ZoneIndexFromUnitAndLba), v32 - 1, v32) )
          break;
      }
    }
    if ( (qword_1C0092468 & 0x1000) != 0 )
    {
      v34 = 0LL;
      v35 = 0;
      RaidGetIoStartingLbaAndLength(v8, (__int64)&v34, (__int64)&v35);
      DbgLogRequest(*(_QWORD *)(v27 + 24), 46, v34, v35, *(unsigned __int8 *)(*v33 + ZoneIndexFromUnitAndLba), v6, 0LL);
    }
  }
}
