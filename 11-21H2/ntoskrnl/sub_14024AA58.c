/*
 * XREFs of sub_14024AA58 @ 0x14024AA58
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_1402E57FC @ 0x1402E57FC (sub_1402E57FC.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_140387140 @ 0x140387140 (sub_140387140.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_1406FAD90 @ 0x1406FAD90 (sub_1406FAD90.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

unsigned __int64 __fastcall sub_14024AA58(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v7; // r8
  bool v8; // zf

  result = (unsigned __int64)&StartContext;
  v5 = a2;
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v7 != -1 )
    {
      for ( ; a2 + v7 <= 0x100; result = a2 + (int)result )
      {
        if ( a2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v7 + a2, v7);
        v8 = (_DWORD)v7 == (_DWORD)result;
        v7 = (int)result;
        if ( v8 )
          goto LABEL_6;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)v7 > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v7);
        if ( (_DWORD)v7 == (_DWORD)result )
        {
          result = (unsigned int)(v7 - 192);
          v5 = a2 + (int)result;
        }
      }
    }
  }
  if ( v5 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v5);
LABEL_6:
  if ( (a3 & 1) != 0 )
    return sub_14028CE10(a1, a2);
  return result;
}
