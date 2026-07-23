/*
 * XREFs of sub_1405AD9AC @ 0x1405AD9AC
 * Callers:
 *     sub_1405AF3BC @ 0x1405AF3BC (sub_1405AF3BC.c)
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     sub_1405BF718 @ 0x1405BF718 (sub_1405BF718.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall sub_1405AD9AC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v11; // rdx
  bool v12; // zf

  v5 = 24512LL * *((unsigned int *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2);
  v6 = v5 + *(_QWORD *)(a2 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 22848));
  --*(_QWORD *)(v6 + 22904);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 22848));
  v7 = v5 + *(_QWORD *)(a3 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 22848));
  v8 = 1LL;
  ++*(_QWORD *)(v7 + 22904);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 22848));
  sub_14026A784(a3, 1LL, 0LL, 1u);
  sub_14028CE10(a2, 1LL);
  result = (__int64)&StartContext;
  if ( (ULONG_PTR *)a2 != &StartContext )
    goto LABEL_11;
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = *((int *)CurrentPrcb + 8615);
  if ( (_DWORD)v11 == -1 )
    goto LABEL_11;
  if ( (unsigned __int64)(v11 + 1) > 0x100 )
  {
LABEL_7:
    if ( (int)v11 > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v11);
      if ( (_DWORD)v11 == (_DWORD)result )
      {
        result = (unsigned int)(v11 - 192);
        v8 = (int)result + 1LL;
      }
    }
    if ( !v8 )
      return result;
LABEL_11:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16960), v8);
    return result;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v11 + 1, v11);
    v12 = (_DWORD)v11 == (_DWORD)result;
    v11 = (int)result;
    if ( v12 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = (int)result + 1LL;
      if ( (unsigned __int64)(v11 + 1) <= 0x100 )
        continue;
    }
    goto LABEL_7;
  }
}
