/*
 * XREFs of sub_18000C8C8 @ 0x18000C8C8
 * Callers:
 *     sub_18002D5E4 @ 0x18002D5E4 (sub_18002D5E4.c)
 *     sub_18004E738 @ 0x18004E738 (sub_18004E738.c)
 *     sub_1800592D0 @ 0x1800592D0 (sub_1800592D0.c)
 *     sub_180059310 @ 0x180059310 (sub_180059310.c)
 *     sub_1800596EC @ 0x1800596EC (sub_1800596EC.c)
 *     sub_18005F884 @ 0x18005F884 (sub_18005F884.c)
 *     sub_180063EF4 @ 0x180063EF4 (sub_180063EF4.c)
 *     sub_18006F004 @ 0x18006F004 (sub_18006F004.c)
 *     sub_1800707C4 @ 0x1800707C4 (sub_1800707C4.c)
 *     sub_180071E2C @ 0x180071E2C (sub_180071E2C.c)
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 *     sub_180080CB0 @ 0x180080CB0 (sub_180080CB0.c)
 *     sub_1800866AC @ 0x1800866AC (sub_1800866AC.c)
 *     sub_18009DBD0 @ 0x18009DBD0 (sub_18009DBD0.c)
 *     sub_18009DF74 @ 0x18009DF74 (sub_18009DF74.c)
 *     sub_18009E320 @ 0x18009E320 (sub_18009E320.c)
 *     sub_18009E648 @ 0x18009E648 (sub_18009E648.c)
 *     sub_18009EE9C @ 0x18009EE9C (sub_18009EE9C.c)
 *     sub_1800A0A84 @ 0x1800A0A84 (sub_1800A0A84.c)
 *     sub_1800A47E4 @ 0x1800A47E4 (sub_1800A47E4.c)
 *     sub_1800D1660 @ 0x1800D1660 (sub_1800D1660.c)
 *     sub_1800D8BE4 @ 0x1800D8BE4 (sub_1800D8BE4.c)
 * Callees:
 *     sub_18000B52C @ 0x18000B52C (sub_18000B52C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_18000C8C8(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 i; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; i != a3; ++i )
  {
    result = (_UNKNOWN **)_guard_xfg_dispatch_icall_fptr();
    a1 += a2;
  }
  return result;
}
