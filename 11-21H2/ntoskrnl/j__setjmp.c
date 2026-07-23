/*
 * XREFs of j__setjmp @ 0x14042B930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl j__setjmp(jmp_buf Buf)
{
  return setjmp(Buf);
}
