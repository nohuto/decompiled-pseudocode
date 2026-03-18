/*
 * XREFs of FreeTimer @ 0x1C0232FC0
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B1DA0 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*FreeTimer())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295058;
  if ( qword_1C0295058 )
    return (__int64 (*)(void))qword_1C0295058();
  return result;
}
