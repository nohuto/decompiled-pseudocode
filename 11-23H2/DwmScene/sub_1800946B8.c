/*
 * XREFs of sub_1800946B8 @ 0x1800946B8
 * Callers:
 *     sub_1800951C8 @ 0x1800951C8 (sub_1800951C8.c)
 * Callees:
 *     sub_180094984 @ 0x180094984 (sub_180094984.c)
 *     sub_180094EF0 @ 0x180094EF0 (sub_180094EF0.c)
 *     sub_1800953B8 @ 0x1800953B8 (sub_1800953B8.c)
 */

__int64 __fastcall sub_1800946B8(void *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  __int64 i; // rsi
  __int64 v11; // rsi

  result = sub_180094EF0(a1);
  if ( a3 > 32 )
  {
    sub_1800953B8(a1, a2, a4, a3, a5);
    result = sub_180094984(a4, (int)a4 + 16 * (int)a3, (_DWORD)a1, 64, a3);
    for ( i = 128LL; a3 > i; i = 2 * v11 )
    {
      sub_180094984((_DWORD)a1, a2, a4, i, a3);
      v11 = 2 * i;
      result = sub_180094984(a4, (int)a4 + 16 * (int)a3, (_DWORD)a1, v11, a3);
    }
  }
  return result;
}
