/*
 * XREFs of sub_14098F9D0 @ 0x14098F9D0
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_1408018EC @ 0x1408018EC (sub_1408018EC.c)
 *     sub_140801C0C @ 0x140801C0C (sub_140801C0C.c)
 *     sub_1408082AC @ 0x1408082AC (sub_1408082AC.c)
 *     sub_14098FA74 @ 0x14098FA74 (sub_14098FA74.c)
 */

__int64 __fastcall sub_14098F9D0(unsigned int a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( a1 > 0x64 )
    return 3221225485LL;
  v3 = dword_140D05064;
  dword_140D05064 = a1;
  sub_140801C0C(&v6, 0LL);
  v4 = v6;
  result = sub_1408018EC(v6, 0LL, 0LL);
  if ( (int)result < 0
    || (unsigned int)dword_140D05064 >= 0x28 && (result = sub_14098FA74(2LL), (int)result < 0)
    || (result = sub_1408082AC(1, dword_140D05064), (int)result < 0) )
  {
    dword_140D05064 = v3;
  }
  else if ( a2 )
  {
    *a2 = v4;
  }
  return result;
}
