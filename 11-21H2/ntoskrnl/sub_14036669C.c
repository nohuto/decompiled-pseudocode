/*
 * XREFs of sub_14036669C @ 0x14036669C
 * Callers:
 *     sub_140244E70 @ 0x140244E70 (sub_140244E70.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140366094 @ 0x140366094 (sub_140366094.c)
 *     sub_140366620 @ 0x140366620 (sub_140366620.c)
 *     sub_1406B5FC4 @ 0x1406B5FC4 (sub_1406B5FC4.c)
 *     sub_1406D8B90 @ 0x1406D8B90 (sub_1406D8B90.c)
 *     sub_1407E5390 @ 0x1407E5390 (sub_1407E5390.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14035FCE0 @ 0x14035FCE0 (sub_14035FCE0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14036669C(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebp
  _QWORD *v10; // r15
  unsigned __int64 v11; // r14
  _QWORD *v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax

  if ( (signed __int32)(a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), a2)) > *(_DWORD *)(a1 + 340) )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 400), 3, 0) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 368), DelayedWorkQueue);
    return (unsigned int)-1073741431;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 96);
    v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    v8 = 0;
    while ( v7 > 0 )
    {
      if ( v7 <= *(_DWORD *)(v6 + 20) )
      {
        *a3 = v6 + 16LL * (int)(v7 - a2) + 24;
        return v8;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), -a2);
      v10 = sub_14035FCE0();
      if ( !v10 )
      {
        v8 = -1073741670;
        goto LABEL_33;
      }
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
      if ( *(_QWORD *)(a1 + 96) == v6 )
      {
        v12 = *(_QWORD **)(a1 + 112);
        if ( *v12 != a1 + 104 )
          __fastfail(3u);
        v10[1] = v12;
        *v10 = a1 + 104;
        *v12 = v10;
        *(_QWORD *)(a1 + 112) = v10;
        ++*(_DWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 96) = v10;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 128));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v20 = *((_QWORD *)CurrentPrcb + 4375);
              v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v17 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
              *(_DWORD *)(v20 + 20) &= v21;
              if ( v17 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
      else
      {
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 128));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v13 = KeGetCurrentIrql();
            if ( v13 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v13 >= 2u )
            {
              v14 = KeGetCurrentPrcb();
              v15 = *((_QWORD *)v14 + 4375);
              v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
              *(_DWORD *)(v15 + 20) &= v16;
              if ( v17 )
                sub_140418E4C(v14);
            }
          }
        }
        __writecr8(v11);
        ExFreePoolWithTag(v10, 0);
      }
      v6 = *(_QWORD *)(a1 + 96);
      v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    }
    v8 = -1073741675;
LABEL_33:
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
  }
  return v8;
}
