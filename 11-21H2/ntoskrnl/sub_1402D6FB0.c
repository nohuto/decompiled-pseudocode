/*
 * XREFs of sub_1402D6FB0 @ 0x1402D6FB0
 * Callers:
 *     sub_14075717C @ 0x14075717C (sub_14075717C.c)
 * Callees:
 *     sub_1402D708C @ 0x1402D708C (sub_1402D708C.c)
 *     sub_1402D7C70 @ 0x1402D7C70 (sub_1402D7C70.c)
 *     sub_14075717C @ 0x14075717C (sub_14075717C.c)
 */

__int64 __fastcall sub_1402D6FB0(int a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  char v5; // si
  unsigned __int16 v7; // bx
  __int64 result; // rax
  int v9; // ecx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v10 = 0LL;
  v5 = a4;
  if ( (unsigned int)(a3 - 3) > 1 )
    return 3221225713LL;
  if ( (a4 & 0x1000000) != 0 )
    v7 = -3346;
  else
    v7 = *(_WORD *)(a2 + 16);
  v11 = 0LL;
  result = sub_1402D708C(a1, v7, (unsigned int)&v10, (unsigned int)&v11, a4);
  if ( (int)result >= 0 )
  {
    v9 = v10;
    *(_QWORD *)(a2 + 16) = v7;
    result = sub_14075717C(v9, a2, 3, 33554480, (__int64)a5);
    if ( (v5 & 0x40) != 0 && (int)result >= 0 )
    {
      result = sub_1402D7C70(v10, *a5, 0, *(_DWORD *)(a2 + 24), 0);
      if ( (int)result < 0 )
        *a5 = 0LL;
    }
  }
  else if ( (_DWORD)result == -1073741766 || (_DWORD)result == -1073741772 )
  {
    return 3221946369LL;
  }
  return result;
}
