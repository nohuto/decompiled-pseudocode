/*
 * XREFs of C3Idle @ 0x1C0009820
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0002000 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00025EC (WriteGenAddr.c)
 *     IssueVerw @ 0x1C0004230 (IssueVerw.c)
 */

void __fastcall C3Idle(unsigned __int8 *a1, int a2)
{
  unsigned int GenAddr; // eax
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi

  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((unsigned __int8 *)&dword_1C001F9DC);
  WriteGenAddr(&dword_1C001F9DC, GenAddr | 2LL);
  if ( qword_1C001F9EC )
  {
    v5 = ReadGenAddr((unsigned __int8 *)&dword_1C001F9E8);
    WriteGenAddr(&dword_1C001F9E8, v5 | 2LL);
  }
  v6 = (unsigned int)ReadGenAddr((unsigned __int8 *)&dword_1C001F9F4);
  WriteGenAddr(&dword_1C001F9F4, v6 | 1);
  if ( (_WORD)a2 )
    __writemsr(0x48u, 0LL);
  if ( HIWORD(a2) )
    IssueVerw(SHIWORD(a2));
  ReadGenAddr(a1);
  WriteGenAddr(&dword_1C001F9F4, v6);
  if ( (_WORD)a2 )
    __writemsr(0x48u, (unsigned __int16)a2);
  else
    _mm_lfence();
}
