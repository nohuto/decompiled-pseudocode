/*
 * XREFs of ExpUnicodeStringToNonpagedWStr @ 0x14068755C
 * Callers:
 *     ExGetFirmwareEnvironmentVariable @ 0x1406874D0 (ExGetFirmwareEnvironmentVariable.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1409FBC30 (ExSetFirmwareEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

_WORD *__fastcall ExpUnicodeStringToNonpagedWStr(const void **a1)
{
  unsigned __int64 v1; // rdi
  _WORD *Pool2; // rax
  _WORD *v4; // rbx

  v1 = *(unsigned __int16 *)a1;
  Pool2 = (_WORD *)ExAllocatePool2(64LL, v1 + 2, 1920364101LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
