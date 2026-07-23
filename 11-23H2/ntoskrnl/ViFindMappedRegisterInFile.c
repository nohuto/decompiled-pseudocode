/*
 * XREFs of ViFindMappedRegisterInFile @ 0x140AC88BC
 * Callers:
 *     ViFlushDoubleBuffer @ 0x140AC88F4 (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegistersToFile @ 0x140AC8C80 (ViFreeMapRegistersToFile.c)
 *     ViSwap @ 0x140ACA124 (ViSwap.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ViFindMappedRegisterInFile(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r10d
  _QWORD *result; // rax
  int v5; // r9d

  v3 = *(_DWORD *)(a1 + 28);
  result = (_QWORD *)(a1 + 88);
  v5 = 0;
  if ( !v3 )
    return 0LL;
  while ( a2 != *result )
  {
    result += 4;
    if ( ++v5 >= v3 )
      return 0LL;
  }
  if ( a3 )
    *a3 = v5;
  return result;
}
