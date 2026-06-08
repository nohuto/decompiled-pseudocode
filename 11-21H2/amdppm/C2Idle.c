/*
 * XREFs of C2Idle @ 0x1C0009260
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0001BF8 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x1C0003958 (ReadGenAddr.c)
 */

unsigned __int64 __fastcall C2Idle(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  int GenAddr; // eax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r8
  unsigned __int64 result; // rax
  unsigned int v9; // r11d

  v2 = a2;
  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr((__int64)&dword_1C0011D6C);
    WriteGenAddr(&dword_1C0011D6C, GenAddr & 0xFFFFFFFD, v5);
    if ( qword_1C0011D7C )
    {
      v6 = ReadGenAddr((__int64)&dword_1C0011D78);
      WriteGenAddr(&dword_1C0011D78, v6 & 0xFFFFFFFD, v7);
    }
  }
  if ( (_DWORD)v2 )
    __writemsr(0x48u, 0LL);
  result = ReadGenAddr(a1);
  if ( (_DWORD)v2 )
  {
    result = v2;
    __writemsr(v9, v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
