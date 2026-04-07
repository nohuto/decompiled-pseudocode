/*
 * XREFs of ?GetWeakReference@?$weak_source@$00$00@impl@winrt@@UEAAHPEAPEAUIWeakReference@23@@Z @ 0x1800EDB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::weak_source<1,1>::GetWeakReference(__int64 a1, __int64 *a2)
{
  *a2 = (a1 - 8) & -(__int64)(a1 != 0);
  _InterlockedExchangeAdd((volatile signed __int32 *)(((a1 - 8) & -(__int64)(a1 != 0)) + 28), 1u);
  return 0LL;
}
