/*
 * XREFs of sub_14021ACBC @ 0x14021ACBC
 * Callers:
 *     sub_140229BD8 @ 0x140229BD8 (sub_140229BD8.c)
 * Callees:
 *     sub_140229B04 @ 0x140229B04 (sub_140229B04.c)
 */

__int64 __fastcall sub_14021ACBC(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1444));
  }
  else
  {
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 1444));
    if ( (_DWORD)result == 1 )
      return sub_140229B04(a1, 0LL);
  }
  return result;
}
