/*
 * XREFs of sub_14045F3D4 @ 0x14045F3D4
 * Callers:
 *     sub_14037BD80 @ 0x14037BD80 (sub_14037BD80.c)
 * Callees:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 */

__int64 __fastcall sub_14045F3D4(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  result = *(unsigned int *)(a1 + 1832);
  if ( !(_DWORD)result )
  {
    result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 1832), 1);
    if ( !(_DWORD)result )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      return KeSetTimer2(a1 + 1664, -3000000000LL, 3000000000LL, (__int64)v2);
    }
  }
  return result;
}
