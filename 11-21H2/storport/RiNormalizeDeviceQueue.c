/*
 * XREFs of RiNormalizeDeviceQueue @ 0x1C000936C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaidNormalizeDeviceQueue @ 0x1C0009308 (RaidNormalizeDeviceQueue.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C0009628 (RiPeekDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x1C000B654 (RiGetEnqueueReason.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00225D4 (RaidGetQosEntryForDeviceEntry.c)
 *     GetZoneIndexFromUnitAndLba @ 0x1C0022E6C (GetZoneIndexFromUnitAndLba.c)
 *     PortSrbGetLbaFromCdb @ 0x1C006890C (PortSrbGetLbaFromCdb.c)
 */

__int64 __fastcall RiNormalizeDeviceQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rdx
  int v9; // r15d
  __int64 v10; // rbp
  char v11; // r11
  unsigned int v12; // esi
  __int64 i; // r10
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  unsigned __int8 v20; // r9
  char v21; // r14
  unsigned int v22; // esi
  __int64 j; // r11
  __int64 v24; // rcx
  unsigned __int64 v25; // r10
  __int64 v26; // r8
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rsi
  __int64 LbaFromCdb; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rcx
  int v34; // eax
  char v35; // al
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rcx

  LOBYTE(a3) = a2;
  v4 = RiPeekDeviceQueue(a1, a2, a3);
  v6 = v4;
  if ( v4 )
  {
    *(_BYTE *)(v4 + 22) ^= (*(_BYTE *)(v4 + 22) ^ (16 * v5)) & 0x10;
    if ( (*(_BYTE *)(v4 + 22) & 0x40) != 0 )
    {
      v7 = *(_QWORD *)(v4 + 64);
      v8 = *(_QWORD *)(v7 + 8);
      if ( *(_BYTE *)(v8 + 2) != 40 )
      {
        v20 = *(_BYTE *)(v8 + 10);
        v10 = v8 + 72;
        goto LABEL_41;
      }
      v9 = *(_DWORD *)(v8 + 20);
      v10 = 0LL;
      v11 = 0;
      if ( !v9 )
      {
        v12 = *(_DWORD *)(v8 + 56);
        for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(i + 1) )
        {
          v14 = *(unsigned int *)(v8 + 4 * i + 120);
          if ( (unsigned int)v14 >= 0x80 )
          {
            v15 = *(unsigned int *)(v8 + 16);
            if ( (unsigned int)v14 < (unsigned int)v15 )
            {
              v16 = (unsigned int)v14;
              v17 = *(_DWORD *)(v14 + v8) - 64;
              if ( v17 )
              {
                v18 = v17 - 1;
                if ( v18 )
                {
                  if ( v18 == 1 && v16 + 40 <= v15 )
                  {
                    v19 = v16 + v8 + 32;
                    if ( !*(_DWORD *)(v16 + v8 + 12) )
                      v19 = v10;
                    v10 = v19;
                    break;
                  }
                }
                else if ( v16 + 56 <= v15 )
                {
                  v11 = 1;
                  if ( !*(_BYTE *)(v16 + v8 + 10) )
                    break;
                  v10 = v16 + v8 + 24;
                }
              }
              else if ( v16 + 40 <= v15 )
              {
                if ( *(_BYTE *)(v16 + v8 + 10) )
                  v10 = v16 + v8 + 24;
                break;
              }
              if ( v11 )
                break;
            }
          }
        }
      }
      v20 = 0;
      v21 = 0;
      if ( !v9 )
      {
        v22 = *(_DWORD *)(v8 + 56);
        for ( j = 0LL; (unsigned int)j < v22; j = (unsigned int)(j + 1) )
        {
          v24 = *(unsigned int *)(v8 + 4 * j + 120);
          if ( (unsigned int)v24 >= 0x80 )
          {
            v25 = *(unsigned int *)(v8 + 16);
            if ( (unsigned int)v24 < (unsigned int)v25 )
            {
              v26 = (unsigned int)v24;
              v27 = *(_DWORD *)(v24 + v8) - 64;
              if ( v27 )
              {
                v28 = v27 - 1;
                if ( v28 )
                {
                  if ( v28 == 1 && v26 + 40 <= v25 )
                    break;
                }
                else if ( v26 + 56 <= v25 )
                {
                  v20 = *(_BYTE *)(v26 + v8 + 10);
                  v21 = 1;
                }
              }
              else if ( v26 + 40 <= v25 )
              {
                v20 = *(_BYTE *)(v26 + v8 + 10);
                break;
              }
              if ( v21 )
                break;
            }
          }
        }
      }
LABEL_41:
      v29 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 64LL);
      LbaFromCdb = PortSrbGetLbaFromCdb(v10, v20);
      if ( FeatureServicingSMRCapacityEnabled )
        LODWORD(v31) = GetZoneIndexFromUnitAndLba(v29, LbaFromCdb);
      else
        v31 = LbaFromCdb * (unsigned __int64)*(unsigned int *)(v29 + 812) / *(_QWORD *)(v29 + 3280);
      if ( (unsigned int)RtlInterlockedSetClearRun(v29 + 3312, (unsigned int)v31, 1LL) == 1 )
        *(_BYTE *)(v6 + 22) &= ~0x40u;
    }
    if ( (unsigned int)RiGetEnqueueReason(a1, v6, 0LL) )
      return 0LL;
    v32 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_62;
    v33 = *(_QWORD **)(v6 + 8);
    if ( *v33 != v6 )
      goto LABEL_62;
    *v33 = v32;
    *(_QWORD *)(v32 + 8) = v33;
    ++*(_DWORD *)(a1 + 76);
    if ( (*(_BYTE *)(v6 + 22) & 6) != 0 )
      --*(_DWORD *)(a1 + 20);
    else
      --*(_DWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v6 + 22) & 8) != 0 )
      --*(_DWORD *)(a1 + 24);
    *(_BYTE *)(v6 + 20) = 0;
    v34 = *(_DWORD *)(a1 + 76);
    if ( v34 > *(_DWORD *)(a1 + 136) )
      *(_DWORD *)(a1 + 136) = v34;
    v35 = *(_BYTE *)(v6 + 22);
    if ( (v35 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 38) = 1;
      v35 = *(_BYTE *)(v6 + 22);
    }
    if ( (v35 & 0x20) != 0 )
    {
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v6);
      v37 = *QosEntryForDeviceEntry;
      if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
      {
        v38 = (_QWORD *)QosEntryForDeviceEntry[1];
        if ( (_QWORD *)*v38 == QosEntryForDeviceEntry )
        {
          *v38 = v37;
          *(_QWORD *)(v37 + 8) = v38;
          return v6;
        }
      }
LABEL_62:
      __fastfail(3u);
    }
  }
  return v6;
}
