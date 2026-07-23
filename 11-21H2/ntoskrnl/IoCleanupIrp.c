/*
 * XREFs of IoCleanupIrp @ 0x14039D770
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020B888 @ 0x14020B888 (sub_14020B888.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 (__fastcall *__fastcall IoCleanupIrp(ULONG_PTR BugCheckParameter1))()
{
  __int64 (__fastcall *result)(); // rax
  bool v2; // zf

  result = 0LL;
  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x29CEuLL, 0LL, 0LL);
  v2 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v2 )
    return sub_14020B888(BugCheckParameter1, -1, 1);
  return result;
}
