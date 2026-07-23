/*
 * XREFs of sub_140AB6DC0 @ 0x140AB6DC0
 * Callers:
 *     sub_140423B80 @ 0x140423B80 (sub_140423B80.c)
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 * Callees:
 *     <none>
 */

void sub_140AB6DC0()
{
  int ExceptionList; // esp
  unsigned __int64 v1; // rbp
  char v2; // sp
  char v3; // sp

  ExceptionList = (int)KeGetPcr()[109].NtTib.ExceptionList;
  if ( (ExceptionList & 2) == 0 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 68) + 904LL);
    if ( (v1 & 1) != 0 )
    {
      if ( (v2 & 1) != 0 )
        __writegsdword(0xA018u, (__int64)KeGetPcr()[109].NtTib.ExceptionList & 0xFFFFFFFE);
      else
        v1 |= 0x8000000000000000uLL;
    }
    __writecr3(v1);
  }
  if ( (v3 & 2) == 0 )
    __asm { verw    word ptr gs:0A02Ah }
  __asm
  {
    swapgs
    sysret
  }
}
