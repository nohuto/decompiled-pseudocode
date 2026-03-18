/*
 * XREFs of _GetAsyncKeyState @ 0x1C0040550
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C003CD30 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int16 __fastcall GetAsyncKeyState(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rcx
  unsigned int v6; // r9d
  __int16 v7; // r11
  int v8; // eax
  __int16 result; // ax

  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL, a2, a3, a4);
    return 0;
  }
  else
  {
    v4 = (unsigned __int8)a1;
    v5 = (unsigned __int64)(unsigned __int8)a1 >> 3;
    v6 = v4 & 7;
    v7 = 0;
    v8 = *((unsigned __int8 *)&gafAsyncKeyStateRecentDown + v5);
    if ( _bittest(&v8, v6) )
    {
      v7 = 1;
      *((_BYTE *)&gafAsyncKeyStateRecentDown + v5) = v8 & ~(1 << v6);
    }
    result = v7 | 0x8000;
    if ( (*((_BYTE *)&gafAsyncKeyState + (v4 >> 2)) & (unsigned __int8)(1 << (2 * (v4 & 3)))) == 0 )
      return v7;
  }
  return result;
}
