/*
 * XREFs of sub_1405B766C @ 0x1405B766C
 * Callers:
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_140358400 @ 0x140358400 (sub_140358400.c)
 *     sub_1403D5CF4 @ 0x1403D5CF4 (sub_1403D5CF4.c)
 *     sub_1405B2968 @ 0x1405B2968 (sub_1405B2968.c)
 * Callees:
 *     sub_14023073C @ 0x14023073C (sub_14023073C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405B7574 @ 0x1405B7574 (sub_1405B7574.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 */

__int64 __fastcall sub_1405B766C(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD v11[36]; // [rsp+20h] [rbp-A8h] BYREF

  result = (__int64)memset(&v11[3], 0, 0x80uLL);
  if ( a3 )
  {
    v7 = (dword_140D0689C & 0x200000) == 0;
  }
  else
  {
    result = sub_14023073C(a2);
    v7 = (_DWORD)result == 0;
  }
  if ( !v7 )
  {
    v11[1] = 0;
    v11[0] = a3;
    v11[2] = 1;
    result = sub_1405B7574((__int64)v11, a1, a2);
    if ( (_DWORD)result )
      return sub_1405B7E7C(v11, v8, v9, v10);
  }
  return result;
}
