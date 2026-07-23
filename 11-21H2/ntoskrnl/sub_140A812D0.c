/*
 * XREFs of sub_140A812D0 @ 0x140A812D0
 * Callers:
 *     sub_140A9C668 @ 0x140A9C668 (sub_140A9C668.c)
 *     sub_140A9CA48 @ 0x140A9CA48 (sub_140A9CA48.c)
 *     sub_140A9CB44 @ 0x140A9CB44 (sub_140A9CB44.c)
 * Callees:
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_140A898F0 @ 0x140A898F0 (sub_140A898F0.c)
 *     sub_140A89AB0 @ 0x140A89AB0 (sub_140A89AB0.c)
 *     sub_140A89D94 @ 0x140A89D94 (sub_140A89D94.c)
 */

__int64 __fastcall sub_140A812D0(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  struct _KTHREAD *v8; // rbp
  unsigned int v9; // eax

  v3 = 0;
  *a2 = 0;
  v8 = sub_1406F5B50();
  if ( (a3 & 1) != 0 )
  {
    v9 = sub_140A89AB0(a1, 0LL, a2);
LABEL_7:
    v3 = v9;
    goto LABEL_8;
  }
  if ( (a3 & 2) != 0 )
  {
    v9 = sub_140A898F0(a1, v7, a2);
    goto LABEL_7;
  }
  if ( (a3 & 4) != 0 )
  {
    v9 = sub_140A89D94(a1);
    goto LABEL_7;
  }
LABEL_8:
  sub_1406F5AF0((__int64)v8);
  return v3;
}
