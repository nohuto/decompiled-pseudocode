/*
 * XREFs of C3Idle @ 0x1C000B110
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00013E0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C000205C (WriteGenAddr.c)
 */

void __fastcall C3Idle(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned int GenAddr; // eax
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi

  v2 = a2;
  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((unsigned __int8 *)&dword_1C001E87C);
  WriteGenAddr(&dword_1C001E87C, GenAddr | 2LL);
  if ( qword_1C001E88C )
  {
    v5 = ReadGenAddr((unsigned __int8 *)&dword_1C001E888);
    WriteGenAddr(&dword_1C001E888, v5 | 2LL);
  }
  v6 = (unsigned int)ReadGenAddr((unsigned __int8 *)&dword_1C001E894);
  WriteGenAddr(&dword_1C001E894, v6 | 1);
  if ( (_DWORD)v2 )
    __writemsr(0x48u, 0LL);
  ReadGenAddr(a1);
  WriteGenAddr(&dword_1C001E894, v6);
  if ( (_DWORD)v2 )
    __writemsr(0x48u, v2);
  else
    _mm_lfence();
}
