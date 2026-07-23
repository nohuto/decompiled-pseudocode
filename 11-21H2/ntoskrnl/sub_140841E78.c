/*
 * XREFs of sub_140841E78 @ 0x140841E78
 * Callers:
 *     sub_140841F20 @ 0x140841F20 (sub_140841F20.c)
 * Callees:
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     sub_1403CB454 @ 0x1403CB454 (sub_1403CB454.c)
 */

__int64 __fastcall sub_140841E78(__int64 *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // r11
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  result = sub_1403CB454(&v12, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( v12 > a4 )
    {
      return 3221225485LL;
    }
    else
    {
      if ( v12 == a4 )
      {
        v11 = a3 + v12 - 2;
      }
      else
      {
        v10 = a4 - v12;
        if ( (int)sub_1402DCD64((_WORD *)(v12 + a3), v10, &v13) < 0 )
        {
          v7 = v10 - 2;
          *(_WORD *)(v11 + 2 * ((v10 - 2) >> 1)) = 0;
        }
        else
        {
          v7 = v13;
        }
      }
      result = 0LL;
      *a2 = v7 >> 1;
      *a1 = v11;
    }
  }
  return result;
}
