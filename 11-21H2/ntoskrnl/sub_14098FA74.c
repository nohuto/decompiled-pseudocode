/*
 * XREFs of sub_14098FA74 @ 0x14098FA74
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_14098F9D0 @ 0x14098F9D0 (sub_14098F9D0.c)
 * Callees:
 *     sub_1408018EC @ 0x1408018EC (sub_1408018EC.c)
 *     sub_140801C0C @ 0x140801C0C (sub_140801C0C.c)
 *     sub_1408082AC @ 0x1408082AC (sub_1408082AC.c)
 */

__int64 __fastcall sub_14098FA74(int a1, __int64 *a2)
{
  int v3; // edi
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( ((unsigned int)dword_140D05064 < 0x28 || a1 == 2) && (unsigned int)(a1 - 1) <= 1 )
  {
    v3 = dword_140D0506C;
    dword_140D0506C = a1;
    sub_140801C0C(&v7, 0LL);
    v4 = v7;
    v5 = sub_1408018EC(v7, 0LL, 0LL);
    if ( v5 < 0 || (v5 = sub_1408082AC(2, dword_140D0506C), v5 < 0) )
    {
      dword_140D0506C = v3;
    }
    else
    {
      dword_140D05164 = dword_140D0506C;
      if ( a2 )
        *a2 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
