/*
 * XREFs of sub_1403C6CDC @ 0x1403C6CDC
 * Callers:
 *     sub_1403C6B00 @ 0x1403C6B00 (sub_1403C6B00.c)
 *     sub_1405B2670 @ 0x1405B2670 (sub_1405B2670.c)
 * Callees:
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 */

__int64 __fastcall sub_1403C6CDC(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 232);
  if ( v1 )
  {
    result = *(unsigned int *)(v1 + 128);
    if ( (_DWORD)result )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 128), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return sub_14024B0B4((_DWORD *)v1, 1);
    }
  }
  return result;
}
