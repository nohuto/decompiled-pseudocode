/*
 * XREFs of KiComputeEffectivePriority @ 0x1402B2A20
 * Callers:
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 * Callees:
 *     KiComputeHeteroThreadQos @ 0x1402B1080 (KiComputeHeteroThreadQos.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x140307FD8 (KiAbQueueAutoBoostDpc.c)
 *     KiScheduleNextForegroundBoost @ 0x1403D439C (KiScheduleNextForegroundBoost.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 *     KiSetThreadQosLevelUnsafe @ 0x140462A58 (KiSetThreadQosLevelUnsafe.c)
 */

char __fastcall KiComputeEffectivePriority(__int64 a1, char a2, unsigned __int64 a3, char a4)
{
  int v5; // ebp
  unsigned int v6; // eax
  char v7; // bl
  char v8; // si
  unsigned __int8 v9; // dl
  char v10; // al
  unsigned int v11; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v13; // r8
  char v15; // r10
  int v16; // r11d
  int v17; // ecx
  int v18; // r9d
  char v19; // dl
  unsigned __int8 v20; // dl
  char v21; // r8
  char v22; // cl
  char v23; // dl
  struct _SINGLE_LIST_ENTRY *v24; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8

  v5 = a2;
  if ( *(char *)(a1 + 195) < 16 )
  {
    v6 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
    if ( a3 < *(_QWORD *)(a1 + 32) )
    {
      v7 = 0;
      if ( *(char *)(a1 + 563) < 14 && (v6 < 2 || *(_BYTE *)(a1 + 564)) )
        goto LABEL_18;
    }
    else
    {
      v7 = 4;
      if ( v6 < 2 )
        v7 = 5;
    }
    v7 |= 8u;
    v8 = *(_BYTE *)(a1 + 195);
    if ( v8 < 16 )
    {
      if ( (KiVelocityFlags & 0x8000) != 0
        && *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2
        && (v20 = *(_BYTE *)(a1 + 564), v21 = v20 & 0xF, (v20 & 0xF) != 0 && (*(_DWORD *)(a1 + 120) & 8) == 0) )
      {
        *(_BYTE *)(a1 + 564) = v21;
        v22 = *(_BYTE *)(a1 + 563) + v21;
        v23 = -1 - (v20 >> 4) + v8;
        if ( v23 >= v22 )
          v22 = v23;
        v8 = v22;
      }
      else
      {
        v9 = *(_BYTE *)(a1 + 564);
        v10 = *(_BYTE *)(a1 + 563);
        if ( (char)(-1 - (v9 >> 4) - (v9 & 0xF) + v8) >= v10 )
          v10 = -1 - (v9 >> 4) - (v9 & 0xF) + v8;
        v8 = v10;
        if ( v9 )
        {
          if ( (v9 & 0xF) != 0 )
            *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(a1 + 564) = 0;
        }
      }
    }
    v11 = *(_DWORD *)(a1 + 856);
    if ( v11 )
    {
      _BitScanReverse(&v11, v11);
      if ( v8 < (char)v11 )
        v8 = v11;
    }
    if ( !a4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v8 > *(char *)(a1 + 195) )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v24 = (struct _SINGLE_LIST_ENTRY *)(a1 + 808);
          if ( *(_QWORD *)(a1 + 808) == 1LL )
          {
            p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-35704LL )
            {
              v24->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v24;
              _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            }
          }
        }
      }
      *(_BYTE *)(a1 + 195) = v8;
      if ( (unsigned int)KiComputeHeteroThreadQos(a1, 0LL) != (unsigned __int8)*(_DWORD *)(a1 + 512) )
        KiSetThreadQosLevelUnsafe(a1);
      if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
      {
        LOBYTE(v13) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v13);
      }
    }
LABEL_18:
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2 )
      v7 |= 2u;
    if ( (v7 & 1) == 0 && (*(_DWORD *)(a1 + 120) & 8) == 0 && *(char *)(a1 + 195) > 0 )
    {
      v15 = *(_BYTE *)(a1 + 564);
      if ( !v15 )
      {
        v16 = *(char *)(a1 + 563);
        v17 = v16 + v5;
        v18 = v16 + v5;
        if ( (v7 & 2) == 0 )
        {
LABEL_27:
          if ( v18 >= 16 )
            v18 = 15;
          if ( v18 > *(char *)(a1 + 195) )
          {
            v19 = 0;
            if ( v18 > v17 )
              v19 = v18 - v16 - v5;
            *(_BYTE *)(a1 + 564) = v15 ^ (v19 ^ v15) & 0xF;
            KiUpdateThreadPriority(0, v19, a1, v18, 0);
          }
          return (v7 & 8) != 0;
        }
LABEL_48:
        v18 += (char)PsPrioritySeparation;
        goto LABEL_27;
      }
      if ( (v15 & 0xF0) == 0 && (v7 & 2) != 0 )
      {
        v16 = *(char *)(a1 + 563);
        v17 = v16 + v5;
        v18 = v16 + v5;
        goto LABEL_48;
      }
    }
    if ( (KiVelocityFlags & 0x8000) == 0 && (v7 & 6) == 6 && (*(_DWORD *)(a1 + 120) & 8) == 0 && *(char *)(a1 + 195) > 0 )
      KiScheduleNextForegroundBoost(a1);
    return (v7 & 8) != 0;
  }
  return 1;
}
