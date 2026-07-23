/*
 * XREFs of sub_140216E18 @ 0x140216E18
 * Callers:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_140693A28 @ 0x140693A28 (sub_140693A28.c)
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 *     sub_1407B97B0 @ 0x1407B97B0 (sub_1407B97B0.c)
 *     sub_1407BC750 @ 0x1407BC750 (sub_1407BC750.c)
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 *     sub_1407F336C @ 0x1407F336C (sub_1407F336C.c)
 *     sub_14081C984 @ 0x14081C984 (sub_14081C984.c)
 *     sub_140829B50 @ 0x140829B50 (sub_140829B50.c)
 *     MmReturnChargesToLockPagedPool @ 0x14096CA90 (MmReturnChargesToLockPagedPool.c)
 *     sub_14096FE9C @ 0x14096FE9C (sub_14096FE9C.c)
 *     sub_140977F8C @ 0x140977F8C (sub_140977F8C.c)
 *     sub_140981A04 @ 0x140981A04 (sub_140981A04.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140216E18(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r8
  bool v5; // zf

  result = (unsigned __int64)&StartContext;
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v4 != -1 )
    {
      for ( ; a2 + v4 <= 0x100; result = a2 + (int)result )
      {
        if ( a2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v4 + a2, v4);
        v5 = (_DWORD)v4 == (_DWORD)result;
        v4 = (int)result;
        if ( v5 )
          return result;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)v4 > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v4);
        if ( (_DWORD)v4 == (_DWORD)result )
        {
          result = (unsigned int)(v4 - 192);
          a2 += (int)result;
        }
      }
    }
  }
  if ( a2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), a2);
  return result;
}
