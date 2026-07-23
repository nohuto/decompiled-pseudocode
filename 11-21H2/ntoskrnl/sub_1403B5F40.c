/*
 * XREFs of sub_1403B5F40 @ 0x1403B5F40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140354FB4 @ 0x140354FB4 (sub_140354FB4.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_1403B6570 @ 0x1403B6570 (sub_1403B6570.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_1403B5F40(__int64 a1, ULONG_PTR a2)
{
  KSPIN_LOCK *v2; // rbp
  unsigned __int64 v4; // rsi
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  bool v11; // zf

  v2 = (KSPIN_LOCK *)(a2 + 360);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 360));
  _m_prefetchw((const void *)(a2 + 32));
  v5 = *(_DWORD *)(a2 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a2 + 32), 0xFFFFFFFB);
    if ( *(_DWORD *)(a2 + 40) != 2 )
      sub_1405CAE6C(0x613uLL, a2, 0LL, 0LL);
    sub_140354FB4(*(_QWORD *)(a2 + 48), 0, 0);
    sub_14042A5E0(*(_QWORD *)(a2 + 192), v7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x40u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 40), 0xFFFFFFFF) != 1 )
      sub_140355058(*(_QWORD *)(a2 + 48), 0, 17, 0LL);
  }
  else
  {
    sub_1403B6570(a2);
  }
  KeReleaseSpinLockFromDpcLevel(v2);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
