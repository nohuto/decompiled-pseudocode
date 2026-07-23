/*
 * XREFs of sub_140789210 @ 0x140789210
 * Callers:
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 * Callees:
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140788ED4 @ 0x140788ED4 (sub_140788ED4.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 */

bool __fastcall sub_140789210(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // di
  char v7; // bl
  int v8; // eax
  int v9; // ecx
  char v10; // si
  const WCHAR *i; // r8
  int v12; // eax
  int v13; // esi
  _BYTE v15[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+64h] [rbp-9Ch] BYREF
  int v17; // [rsp+68h] [rbp-98h] BYREF
  int v18; // [rsp+6Ch] [rbp-94h] BYREF
  int v19; // [rsp+70h] [rbp-90h] BYREF
  int v20; // [rsp+74h] [rbp-8Ch] BYREF
  int v21; // [rsp+78h] [rbp-88h] BYREF
  int v22; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v23[4]; // [rsp+80h] [rbp-80h] BYREF
  _WORD v24[200]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR v25[200]; // [rsp+220h] [rbp+120h] BYREF

  v19 = 0;
  v20 = 0;
  v17 = 0;
  v6 = 0;
  v15[0] = 0;
  v18 = 0;
  v22 = 0;
  v21 = 0;
  if ( (int)sub_14078A470(a1, a2, a3, (unsigned int)&v18, (__int64)&v22, (__int64)&v21) >= 0 )
  {
    v7 = v18;
    v16 = 4;
    v8 = sub_14077CD90(a1, a2, a3, 16, (__int64)&v20, (__int64)&v17, (__int64)&v16, 0);
    v9 = v17;
    if ( v8 < 0 )
      v9 = 0;
    v17 = v9;
    v10 = v9 & 4;
    if ( (v7 & 8) != 0 || (v9 & 2) != 0 )
    {
      v16 = 1;
      v6 = (v9 & 0x80u) == 0;
      if ( !(unsigned int)sub_14077DA5C(
                            a1,
                            a2,
                            1,
                            a3,
                            0LL,
                            (__int64)qword_140010C90,
                            (__int64)&v19,
                            (__int64)v15,
                            1,
                            (__int64)&v16,
                            0)
        && v19 == 17
        && v16 == 1 )
      {
        v6 = v15[0] != 0;
      }
      if ( !v10 && v6 )
      {
        v6 = 0;
        for ( i = (const WCHAR *)a2; (int)sub_1402E0340(v25, 0xC8uLL, i, 0LL, 0LL, 2048) >= 0; i = v24 )
        {
          v23[0] = 200;
          if ( sub_140788ED4(a1, v25, v24, v23) < 0 )
            return v10;
          v16 = 4;
          v12 = sub_14077CD90(a1, (__int64)v24, 0LL, 16, (__int64)&v20, (__int64)&v17, (__int64)&v16, 0);
          v13 = v17;
          if ( v12 < 0 )
            v13 = 0;
          v17 = v13;
          v10 = v13 & 4;
          if ( v10 )
            return v10;
        }
      }
    }
  }
  return v6;
}
