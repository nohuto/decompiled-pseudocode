/*
 * XREFs of C2Idle @ 0x1C000B050
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00013E0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C000205C (WriteGenAddr.c)
 */

unsigned __int64 __fastcall C2Idle(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  int GenAddr; // eax
  int v5; // eax
  unsigned __int64 result; // rax
  unsigned int v7; // r10d

  v2 = a2;
  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr((unsigned __int8 *)&dword_1C001E87C);
    WriteGenAddr(&dword_1C001E87C, GenAddr & 0xFFFFFFFD);
    if ( qword_1C001E88C )
    {
      v5 = ReadGenAddr((unsigned __int8 *)&dword_1C001E888);
      WriteGenAddr(&dword_1C001E888, v5 & 0xFFFFFFFD);
    }
  }
  if ( (_DWORD)v2 )
    __writemsr(0x48u, 0LL);
  result = ReadGenAddr(a1);
  if ( (_DWORD)v2 )
  {
    result = v2;
    __writemsr(v7, v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
