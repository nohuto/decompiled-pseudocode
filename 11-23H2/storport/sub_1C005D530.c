/*
 * XREFs of sub_1C005D530 @ 0x1C005D530
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0016130 @ 0x1C0016130 (sub_1C0016130.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 *     sub_1C0019C38 @ 0x1C0019C38 (sub_1C0019C38.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1C005D530(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) != 5 )
  {
    *(_DWORD *)(a1 + 48) = 6;
    sub_1C0019C38(a1);
    if ( sub_1C0004890(a1, 9) )
      sub_1C0018524(*(_QWORD *)(a1 + 24) + 336LL);
    sub_1C0016130(a1);
  }
  return 0LL;
}
