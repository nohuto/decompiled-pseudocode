/*
 * XREFs of sub_140543E00 @ 0x140543E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140544A28 @ 0x140544A28 (sub_140544A28.c)
 */

__int64 __fastcall sub_140543E00(__int64 a1, __int16 a2, __int16 a3, _DWORD *a4)
{
  __int16 v5; // ax
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF

  HIDWORD(v7) = 0x200000;
  LOWORD(v7) = a2;
  v8 = 0LL;
  if ( a3 == 1 )
  {
    WORD1(v7) = 0;
  }
  else
  {
    if ( a3 == 2 )
    {
      v5 = 1;
    }
    else
    {
      v5 = 2;
      if ( a3 != 4 )
        return 3221225485LL;
    }
    WORD1(v7) = v5;
  }
  result = sub_140544A28(a1, v7, &v8);
  *a4 = v8;
  return result;
}
