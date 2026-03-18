/*
 * XREFs of ?W32kGenerateMoveDataApiExt@@YAHXZ @ 0x1C0176AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kGenerateMoveDataApiExt(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C029AFB0 && (int)qword_1C029AFB0() >= 0 && qword_1C029AFB8 )
    return (unsigned int)qword_1C029AFB8();
  return v0;
}
