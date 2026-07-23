/*
 * XREFs of sub_1403B1230 @ 0x1403B1230
 * Callers:
 *     sub_1403A3C90 @ 0x1403A3C90 (sub_1403A3C90.c)
 *     sub_1403A4B90 @ 0x1403A4B90 (sub_1403A4B90.c)
 * Callees:
 *     sub_1403B17EC @ 0x1403B17EC (sub_1403B17EC.c)
 */

__int64 __fastcall sub_1403B1230(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
  else
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
  if ( (_DWORD)result == 1 )
  {
    LOBYTE(a3) = a2;
    return sub_1403B17EC(a1, 5LL, a3);
  }
  return result;
}
