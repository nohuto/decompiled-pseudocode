/*
 * XREFs of C2Idle @ 0x1C0009740
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0002000 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00025EC (WriteGenAddr.c)
 *     IssueVerw @ 0x1C0004230 (IssueVerw.c)
 */

unsigned __int64 __fastcall C2Idle(unsigned __int8 *a1, int a2)
{
  int GenAddr; // eax
  int v5; // eax
  unsigned __int64 result; // rax

  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr((unsigned __int8 *)&dword_1C001F9DC);
    WriteGenAddr(&dword_1C001F9DC, GenAddr & 0xFFFFFFFD);
    if ( qword_1C001F9EC )
    {
      v5 = ReadGenAddr((unsigned __int8 *)&dword_1C001F9E8);
      WriteGenAddr(&dword_1C001F9E8, v5 & 0xFFFFFFFD);
    }
  }
  if ( (_WORD)a2 )
    __writemsr(0x48u, 0LL);
  if ( HIWORD(a2) )
    IssueVerw(SHIWORD(a2));
  result = ReadGenAddr(a1);
  if ( (_WORD)a2 )
  {
    result = (unsigned __int16)a2;
    __writemsr(0x48u, (unsigned __int16)a2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
