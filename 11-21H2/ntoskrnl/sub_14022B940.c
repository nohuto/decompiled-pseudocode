/*
 * XREFs of sub_14022B940 @ 0x14022B940
 * Callers:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 * Callees:
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 */

__int64 __fastcall sub_14022B940(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)-(int)a2;
  _InterlockedDecrement((volatile signed __int32 *)(((_DWORD)a2 != 0 ? 4 : 0) + a1 + 860));
  if ( (_DWORD)a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1444));
  }
  else
  {
    LODWORD(a2) = 1;
    return sub_1402ACD80(a1, a2, 0LL, 0LL);
  }
  return result;
}
