/*
 * XREFs of sub_1405B6318 @ 0x1405B6318
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1405B6210 @ 0x1405B6210 (sub_1405B6210.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1405BF468 @ 0x1405BF468 (sub_1405BF468.c)
 */

__int64 __fastcall sub_1405B6318(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v5; // r8
  bool v6; // zf
  signed __int32 v7; // eax

  if ( !a2 )
    return sub_1405BF468(a1, 2LL, 1LL, 1LL);
  sub_14028CE10(a1, 1LL);
  v3 = 1LL;
  if ( (ULONG_PTR *)a1 != &StartContext )
    goto LABEL_12;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *((int *)CurrentPrcb + 8615);
  if ( (_DWORD)v5 == -1 )
    goto LABEL_12;
  if ( (unsigned __int64)(v5 + 1) > 0x100 )
  {
LABEL_8:
    if ( (int)v5 > 192
      && (_DWORD)v5 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v5) )
    {
      v3 = (int)v5 - 192 + 1LL;
    }
    if ( !v3 )
      return sub_1405BF468(a1, 2LL, 1LL, 1LL);
LABEL_12:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v3);
    return sub_1405BF468(a1, 2LL, 1LL, 1LL);
  }
  while ( 1 )
  {
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v5 + 1, v5);
    v6 = (_DWORD)v5 == v7;
    LODWORD(v5) = v7;
    if ( v6 )
      return sub_1405BF468(a1, 2LL, 1LL, 1LL);
    if ( v7 == -1 || (unsigned __int64)(v7 + 1LL) > 0x100 )
      goto LABEL_8;
  }
}
