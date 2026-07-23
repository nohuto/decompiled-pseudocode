/*
 * XREFs of sub_1405BBC9C @ 0x1405BBC9C
 * Callers:
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BA498 @ 0x1405BA498 (sub_1405BA498.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_1405BBB54 @ 0x1405BBB54 (sub_1405BBB54.c)
 * Callees:
 *     sub_1405BF468 @ 0x1405BF468 (sub_1405BF468.c)
 */

__int64 __fastcall sub_1405BBC9C(__int64 a1)
{
  unsigned __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v3; // r8
  bool v4; // zf
  signed __int32 v5; // eax

  v1 = 1LL;
  if ( (ULONG_PTR *)a1 != &StartContext )
    goto LABEL_11;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((int *)CurrentPrcb + 8615);
  if ( (_DWORD)v3 == -1 )
    goto LABEL_11;
  if ( (unsigned __int64)(v3 + 1) > 0x100 )
  {
LABEL_7:
    if ( (int)v3 > 192
      && (_DWORD)v3 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v3) )
    {
      v1 = (int)v3 - 192 + 1LL;
    }
    if ( !v1 )
      return sub_1405BF468(a1, 6LL, 0LL, 1LL);
LABEL_11:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v1);
    return sub_1405BF468(a1, 6LL, 0LL, 1LL);
  }
  while ( 1 )
  {
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v3 + 1, v3);
    v4 = (_DWORD)v3 == v5;
    LODWORD(v3) = v5;
    if ( v4 )
      return sub_1405BF468(a1, 6LL, 0LL, 1LL);
    if ( v5 == -1 || (unsigned __int64)(v5 + 1LL) > 0x100 )
      goto LABEL_7;
  }
}
