/*
 * XREFs of PsDereferenceKernelStack @ 0x1406EA260
 * Callers:
 *     <none>
 * Callees:
 *     sub_140298A3C @ 0x140298A3C (sub_140298A3C.c)
 */

__int64 __fastcall PsDereferenceKernelStack(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1452), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = sub_140298A3C(a1);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return result;
}
