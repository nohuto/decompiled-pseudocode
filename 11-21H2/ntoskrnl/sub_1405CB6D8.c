/*
 * XREFs of sub_1405CB6D8 @ 0x1405CB6D8
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D25CC @ 0x1402D25CC (sub_1402D25CC.c)
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C75AC @ 0x1405C75AC (sub_1405C75AC.c)
 *     sub_1405D4B84 @ 0x1405D4B84 (sub_1405D4B84.c)
 */

__int64 __fastcall sub_1405CB6D8(__int64 a1)
{
  ULONG_PTR v2; // rcx
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // r15
  signed __int32 v6; // r12d
  unsigned __int64 v7; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int i; // ebp
  __int64 v14; // rbx
  unsigned __int64 v15; // r14
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  __int64 v18; // r9
  int v19; // eax

  if ( (unsigned int)sub_1405C75AC() == -1 )
    return (unsigned int)-1073741823;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && (*(_DWORD *)(v4 + 24) & 0x8000000) == 0 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    sub_140355350(v2);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x10) != 0 && *(_QWORD *)(a1 + 56) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
      sub_1402D2864(v5, 0, 0);
      v3 = sub_1405D4B84(*(_QWORD *)(a1 + 56));
      if ( v3 >= 0 )
      {
        v6 = _InterlockedCompareExchange(&dword_140C23CB0, 0, 0);
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
        *(_DWORD *)(a1 + 616) = v6;
        memset((void *)(a1 + 632), 0, 0xC0uLL);
        *(_BYTE *)(a1 + 608) = 0;
        *(_QWORD *)(a1 + 624) = 0LL;
        *(_DWORD *)(a1 + 612) = 5;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFF7EF);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 600));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v10 = *((_QWORD *)CurrentPrcb + 4375);
              v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
              *(_DWORD *)(v10 + 20) &= v11;
              if ( v12 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v7);
        for ( i = 0; i < *(_DWORD *)(a1 + 828); ++i )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * i) + 200LL;
          v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
          *(_DWORD *)(v14 + 16) = v6;
          memset((void *)(v14 + 32), 0, 0xC0uLL);
          *(_DWORD *)(v14 + 12) = -1;
          *(_BYTE *)(v14 + 8) = 0;
          *(_QWORD *)(v14 + 24) = 0LL;
          _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFEFF);
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v14);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v16 = KeGetCurrentIrql();
              if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
              {
                v17 = KeGetCurrentPrcb();
                v18 = *((_QWORD *)v17 + 4375);
                v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
                v12 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
                *(_DWORD *)(v18 + 20) &= v19;
                if ( v12 )
                  sub_140418E4C((__int64)v17);
              }
            }
          }
          __writecr8(v15);
        }
      }
      sub_1402D25CC(v5);
    }
    else
    {
      v3 = -1073741823;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
    if ( !v3 )
      ZwUpdateWnfStateData(&stru_140037758, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v3;
}
