/*
 * XREFs of C2Idle @ 0x1C0004C50
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C00029AC (WriteGenAddr.c)
 *     ReadGenAddr @ 0x1C0003C6C (ReadGenAddr.c)
 *     IssueVerw @ 0x1C000C4F0 (IssueVerw.c)
 */

unsigned __int64 __fastcall C2Idle(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int GenAddr; // eax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r8
  unsigned __int64 result; // rax

  v2 = a2;
  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr((__int64)&dword_1C0012E1C);
    WriteGenAddr(&dword_1C0012E1C, GenAddr & 0xFFFFFFFD, v5);
    if ( qword_1C0012E2C )
    {
      v6 = ReadGenAddr((__int64)&dword_1C0012E28);
      WriteGenAddr(&dword_1C0012E28, v6 & 0xFFFFFFFD, v7);
    }
  }
  if ( (_WORD)v2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v2) )
    IssueVerw(HIWORD(v2), a2);
  result = ReadGenAddr(a1);
  if ( (_WORD)v2 )
  {
    result = (unsigned __int16)v2;
    __writemsr(0x48u, (unsigned __int16)v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
