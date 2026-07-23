/*
 * XREFs of sub_1405BAFB0 @ 0x1405BAFB0
 * Callers:
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_1405BBB54 @ 0x1405BBB54 (sub_1405BBB54.c)
 * Callees:
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_1405BE6F4 @ 0x1405BE6F4 (sub_1405BE6F4.c)
 */

__int64 __fastcall sub_1405BAFB0(__int64 a1)
{
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v4; // rdx
  bool v5; // zf
  signed __int32 v6; // eax

  v2 = 1LL;
  if ( !(unsigned int)sub_1402821F4((ULONG_PTR *)a1, 1uLL, 0LL) )
    return 0LL;
  if ( (int)sub_1405BE6F4(a1, 6LL, 0LL, 1LL) < 0 )
  {
    if ( (ULONG_PTR *)a1 != &StartContext )
      goto LABEL_13;
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v4 == -1 )
      goto LABEL_13;
    if ( (unsigned __int64)(v4 + 1) <= 0x100 )
    {
      do
      {
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v4 + 1, v4);
        v5 = (_DWORD)v4 == v6;
        LODWORD(v4) = v6;
        if ( v5 )
          return 0LL;
      }
      while ( v6 != -1 && (unsigned __int64)(v6 + 1LL) <= 0x100 );
    }
    if ( (int)v4 > 192
      && (_DWORD)v4 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v4) )
    {
      v2 = (int)v4 - 192 + 1LL;
    }
    if ( v2 )
LABEL_13:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v2);
    return 0LL;
  }
  return 1LL;
}
