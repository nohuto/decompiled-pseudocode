/*
 * XREFs of sub_1405B6108 @ 0x1405B6108
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1405B6210 @ 0x1405B6210 (sub_1405B6210.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1405BE6F4 @ 0x1405BE6F4 (sub_1405BE6F4.c)
 */

__int64 __fastcall sub_1405B6108(__int64 a1, int a2)
{
  unsigned __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v6; // rdx
  bool v7; // zf
  signed __int32 v8; // eax

  v4 = 1LL;
  if ( a2 && (int)sub_14026A784(a1, 1LL, 0LL, 0) < 0 )
    return 0LL;
  if ( (int)sub_1405BE6F4(a1, 2LL, 1LL, 1LL) < 0 )
  {
    if ( a2 )
    {
      sub_14028CE10(a1, 1LL);
      if ( (ULONG_PTR *)a1 != &StartContext )
        goto LABEL_15;
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = *((int *)CurrentPrcb + 8615);
      if ( (_DWORD)v6 == -1 )
        goto LABEL_15;
      if ( (unsigned __int64)(v6 + 1) <= 0x100 )
      {
        do
        {
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v6 + 1, v6);
          v7 = (_DWORD)v6 == v8;
          LODWORD(v6) = v8;
          if ( v7 )
            return 0LL;
        }
        while ( v8 != -1 && (unsigned __int64)(v8 + 1LL) <= 0x100 );
      }
      if ( (int)v6 > 192
        && (_DWORD)v6 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v6) )
      {
        v4 = (int)v6 - 192 + 1LL;
      }
      if ( v4 )
LABEL_15:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v4);
    }
    return 0LL;
  }
  return 1LL;
}
