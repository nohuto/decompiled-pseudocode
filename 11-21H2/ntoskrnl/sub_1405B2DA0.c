/*
 * XREFs of sub_1405B2DA0 @ 0x1405B2DA0
 * Callers:
 *     sub_140761D88 @ 0x140761D88 (sub_140761D88.c)
 *     sub_1407F1A10 @ 0x1407F1A10 (sub_1407F1A10.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

unsigned __int64 __fastcall sub_1405B2DA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v6; // rdx
  bool v7; // zf

  v2 = a2;
  sub_14028CE10(a1, a2);
  result = (unsigned __int64)&StartContext;
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v6 != -1 )
    {
      for ( ; v2 + v6 <= 0x100; result = v2 + (int)result )
      {
        if ( v2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v6 + v2, v6);
        v7 = (_DWORD)v6 == (_DWORD)result;
        v6 = (int)result;
        if ( v7 )
          return result;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)v6 > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v6);
        if ( (_DWORD)v6 == (_DWORD)result )
        {
          result = (unsigned int)(v6 - 192);
          v2 += (int)result;
        }
      }
    }
  }
  if ( v2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v2);
  return result;
}
