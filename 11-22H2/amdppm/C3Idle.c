/*
 * XREFs of C3Idle @ 0x1C0009B70
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0002990 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x1C0003C2C (ReadGenAddr.c)
 */

void __fastcall C3Idle(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned int GenAddr; // eax
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r8

  v2 = a2;
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
  if ( (_DWORD)v2 )
    __writemsr(0x48u, 0LL);
  ReadGenAddr(a1);
  WriteGenAddr(&dword_1C0012E34, v8, v10);
  if ( (_DWORD)v2 )
    __writemsr(0x48u, v2);
  else
    _mm_lfence();
}
