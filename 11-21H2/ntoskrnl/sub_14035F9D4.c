/*
 * XREFs of sub_14035F9D4 @ 0x14035F9D4
 * Callers:
 *     sub_14035F854 @ 0x14035F854 (sub_14035F854.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_14035F9D4(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rbx
  unsigned int v3; // edx
  signed __int64 v4; // r8
  bool v5; // zf
  signed __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v12; // r9
  int v13; // edx

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 1536), 0LL);
  v2 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
  v3 = v1 & 0xF;
  if ( v3 )
  {
    _m_prefetchw((const void *)(v2 + 360));
    v4 = *(_QWORD *)(v2 + 360);
    if ( (v4 & 1) != 0 )
    {
LABEL_7:
      v9 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9, -(__int64)v3) == v3
        && !_interlockedbittestandreset((volatile signed __int32 *)(v9 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v9 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 360), v4 - 2 * v3, v4);
        v5 = v4 == v6;
        v4 = v6;
        if ( v5 )
          break;
        if ( (v6 & 1) != 0 )
          goto LABEL_7;
      }
    }
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C54690);
  KeReleaseSpinLockFromDpcLevel(&qword_140C54690);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v5 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v5 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v2;
}
