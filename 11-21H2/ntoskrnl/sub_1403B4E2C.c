/*
 * XREFs of sub_1403B4E2C @ 0x1403B4E2C
 * Callers:
 *     sub_1403A4DCC @ 0x1403A4DCC (sub_1403A4DCC.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403A3C90 @ 0x1403A3C90 (sub_1403A3C90.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403B4E2C(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  ULONG v6; // ebx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // r14
  __int64 result; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r8
  bool v15; // zf

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v3 = *(_QWORD *)(a1 + 512);
  v4 = *(_QWORD *)(a1 + 536);
  v5 = *(_QWORD *)(a1 + 552);
  v6 = *(_DWORD *)(a1 + 528);
  _m_prefetchw((const void *)(a1 + 32));
  v7 = *(_DWORD *)(a1 + 32);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v7, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 0x20) != 0 )
  {
    v9 = 1;
    _m_prefetchw((const void *)(a1 + 32));
    v11 = *(_DWORD *)(a1 + 32);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v11, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 520);
      v4 = *(_QWORD *)(a1 + 544);
      v5 = *(_QWORD *)(a1 + 560);
      v6 = *(_DWORD *)(a1 + 532);
    }
  }
  else
  {
    v9 = 0;
    KeSetEvent((PRKEVENT)(a1 + 568), 0, 0);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ((unsigned int)result & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= result;
        if ( v15 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  if ( v9 )
    return sub_1403A3C90(v3, 2, v6, v4, v5, 1, 0LL);
  return result;
}
