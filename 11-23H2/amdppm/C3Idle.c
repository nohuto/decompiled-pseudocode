/*
 * XREFs of C3Idle @ 0x1C0004D30
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C00029AC (WriteGenAddr.c)
 *     ReadGenAddr @ 0x1C0003C6C (ReadGenAddr.c)
 *     IssueVerw @ 0x1C000C4F0 (IssueVerw.c)
 */

void __fastcall C3Idle(__int64 a1, int a2)
{
  unsigned int GenAddr; // eax
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8

  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((__int64)&dword_1C0012E1C);
  WriteGenAddr(&dword_1C0012E1C, GenAddr | 2LL, v5);
  if ( qword_1C0012E2C )
  {
    v6 = ReadGenAddr((__int64)&dword_1C0012E28);
    WriteGenAddr(&dword_1C0012E28, v6 | 2LL, v7);
  }
  v8 = (unsigned int)ReadGenAddr((__int64)&dword_1C0012E34);
  WriteGenAddr(&dword_1C0012E34, v8 | 1, v9);
  if ( (_WORD)a2 )
  {
    v10 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(a2) )
    IssueVerw(HIWORD(a2), v10);
  ReadGenAddr(a1);
  WriteGenAddr(&dword_1C0012E34, v8, v11);
  if ( (_WORD)a2 )
    __writemsr(0x48u, (unsigned __int16)a2);
  else
    _mm_lfence();
}
