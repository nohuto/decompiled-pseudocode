/*
 * XREFs of sub_1402D2864 @ 0x1402D2864
 * Callers:
 *     sub_1402D2848 @ 0x1402D2848 (sub_1402D2848.c)
 *     sub_14038BF3C @ 0x14038BF3C (sub_14038BF3C.c)
 *     sub_14039734C @ 0x14039734C (sub_14039734C.c)
 *     PoFxStartDevicePowerManagement @ 0x1403B9A30 (PoFxStartDevicePowerManagement.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     sub_1405CB6D8 @ 0x1405CB6D8 (sub_1405CB6D8.c)
 *     sub_1405CDDF8 @ 0x1405CDDF8 (sub_1405CDDF8.c)
 *     sub_1405D5704 @ 0x1405D5704 (sub_1405D5704.c)
 *     sub_1405D655C @ 0x1405D655C (sub_1405D655C.c)
 *     sub_1405DE2A0 @ 0x1405DE2A0 (sub_1405DE2A0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     PoFxActivateComponent @ 0x140357D10 (PoFxActivateComponent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

LONG __fastcall sub_1402D2864(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  volatile LONG *v6; // rbp
  KIRQL v7; // al
  int v8; // r8d
  unsigned __int64 v9; // rsi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  ULONG_PTR v12; // rbx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  LONG result; // eax
  unsigned int i; // edi
  __int64 j; // rbp
  ULONG_PTR v18; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v20; // r8
  bool v21; // zf
  struct _KPRCB *v22; // r10
  __int64 v23; // r9

  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (volatile LONG *)(v5 + 88);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  v8 = *(_DWORD *)(v5 + 120);
  v9 = v7;
  _m_prefetchw((const void *)(v5 + 296));
  v10 = *(_DWORD *)(v5 + 296);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 296), v10, v10);
  }
  while ( v11 != v10 );
  if ( (v10 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 824LL) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 88));
    result = dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v21 = (result & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= result;
          if ( v21 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  else
  {
    *(_DWORD *)(v5 + 120) = v8 + 1;
    v12 = 0LL;
    _m_prefetchw((const void *)(v5 + 296));
    v13 = *(_DWORD *)(v5 + 296);
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 296), v13, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 4) != 0 )
    {
      v12 = *(_QWORD *)(v5 + 80);
      sub_140355350(v12);
      for ( i = 0; i < *(_DWORD *)(v12 + 828); ++i )
        PoFxActivateComponent(v12, i);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    result = dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = *((_QWORD *)v22 + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v21 = (result & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= result;
          if ( v21 )
            result = sub_140418E4C(v22);
        }
      }
    }
    __writecr8(v9);
    if ( v12 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v12 + 828); j = (unsigned int)(j + 1) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v12 + 832) + 8 * j);
        if ( (*(_DWORD *)(v18 + 88) & 0x3FFFFFFF) == 0
          || (KeWaitForSingleObject((PVOID)(v18 + 104), Executive, 0, 0, 0LL), *(int *)(v18 + 88) >= 0) )
        {
          sub_1405CAE6C(0x608uLL, v18, v18 + 88, 0LL);
        }
        if ( a2 )
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 1u);
        if ( (*(_DWORD *)(v12 + 824) & 0x80u) != 0 && a3 )
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x800u);
      }
      KeWaitForSingleObject((PVOID)(v12 + 568), Executive, 0, 0, 0LL);
      result = _InterlockedDecrement((volatile signed __int32 *)(v12 + 244));
      if ( !result )
        return KeSetEvent((PRKEVENT)(v12 + 248), 0, 0);
    }
  }
  return result;
}
