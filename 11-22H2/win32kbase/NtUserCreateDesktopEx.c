/*
 * XREFs of NtUserCreateDesktopEx @ 0x1C00C0220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCreateDesktopEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v6; // rbx

  v6 = 0LL;
  if ( qword_1C0295280 && (int)qword_1C0295280() >= 0 && qword_1C0295288 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, int))qword_1C0295288)(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6);
  return v6;
}
