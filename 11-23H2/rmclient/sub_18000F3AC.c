/*
 * XREFs of sub_18000F3AC @ 0x18000F3AC
 * Callers:
 *     sub_18000FFC4 @ 0x18000FFC4 (sub_18000FFC4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F3AC(int a1)
{
  __int64 result; // rax

  if ( a1 >= 0 )
    return 0LL;
  if ( a1 == -1073741801 )
    return 2147942414LL;
  if ( !qword_180032958 )
    return a1 | 0x10000000u;
  result = qword_180032958();
  if ( !(_DWORD)result || (_DWORD)result == 317 )
    return a1 | 0x10000000u;
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
