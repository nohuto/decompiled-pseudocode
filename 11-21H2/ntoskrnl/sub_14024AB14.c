/*
 * XREFs of sub_14024AB14 @ 0x14024AB14
 * Callers:
 *     sub_14077CF10 @ 0x14077CF10 (sub_14077CF10.c)
 * Callees:
 *     sub_14024AB88 @ 0x14024AB88 (sub_14024AB88.c)
 */

__int64 __fastcall sub_14024AB14(_WORD *a1, unsigned __int64 a2, int a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2 >> 1;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    return 3221225485LL;
  v7 = a4 >> 1;
  if ( v7 >= 0x7FFFFFFF )
  {
    result = 3221225485LL;
    *a1 = 0;
  }
  else
  {
    result = sub_14024AB88((_DWORD)a1, a2 >> 1, (unsigned int)&v9, a3, v7);
    if ( (int)result >= 0 )
      return result;
  }
  if ( a2 )
  {
    if ( v5 )
      *a1 = 0;
  }
  return result;
}
