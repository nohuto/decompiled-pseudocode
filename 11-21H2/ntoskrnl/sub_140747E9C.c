/*
 * XREFs of sub_140747E9C @ 0x140747E9C
 * Callers:
 *     sub_140749294 @ 0x140749294 (sub_140749294.c)
 * Callees:
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_140747E9C(unsigned int a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v10; // rdx
  _DWORD v11[4]; // [rsp+60h] [rbp-28h] BYREF
  char v12; // [rsp+90h] [rbp+8h] BYREF
  int v13; // [rsp+A8h] [rbp+20h] BYREF

  if ( a1 )
  {
    v6 = a2;
    v7 = a1;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 312LL) + 40LL);
      if ( (*(_DWORD *)(v8 + 396) & 1) != 0 )
      {
        v10 = *(_QWORD *)(v8 + 48);
        v11[0] = 0;
        v13 = 0;
        v12 = 0;
        if ( (int)sub_14077DA5C(
                    qword_140D00AC0,
                    v10,
                    1,
                    0,
                    0LL,
                    (__int64)&qword_14000EC40,
                    (__int64)&v13,
                    (__int64)&v12,
                    1,
                    (__int64)v11,
                    0) >= 0
          && v13 == 17
          && v11[0] == 1
          && v12 == -1 )
        {
          v6[3] = 0;
        }
      }
      v6 += 16;
      --v7;
    }
    while ( v7 );
  }
  return sub_140747FB4(a1, a2, 0LL, a3);
}
