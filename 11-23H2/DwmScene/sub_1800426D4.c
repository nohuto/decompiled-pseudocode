/*
 * XREFs of sub_1800426D4 @ 0x1800426D4
 * Callers:
 *     sub_180042568 @ 0x180042568 (sub_180042568.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18003F230 @ 0x18003F230 (sub_18003F230.c)
 *     sub_18003F248 @ 0x18003F248 (sub_18003F248.c)
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800426D4(__int64 a1, __int64 a2)
{
  volatile signed __int8 *v3; // rax
  signed __int8 v4; // dl
  signed __int8 v5; // r8
  char result; // al
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+28h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-20h]
  int v10; // [rsp+38h] [rbp-18h]
  _DWORD v11[3]; // [rsp+3Ch] [rbp-14h] BYREF
  char v12; // [rsp+60h] [rbp+10h] BYREF
  char v13; // [rsp+68h] [rbp+18h] BYREF

  sub_18002A404(a1 + 16);
  v12 = 1;
  v13 = 0;
  sub_18003F248((__int64)&v12);
  sub_18003F248((__int64)&v13);
  v3 = (volatile signed __int8 *)sub_18003F230(a2 + 72);
  result = _InterlockedCompareExchange8(v3, v4, v5);
  if ( v5 == result )
  {
    v12 = 0;
    v9 = 0LL;
    v10 = 0;
    memset(v11, 0, sizeof(v11));
    *(_OWORD *)(a2 + 48) = 0u;
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v11[1];
    sub_180011DA0(&v7, (_QWORD *)(a2 + 32));
    result = sub_180042604(&v7, a2 + 48, (__int64)&v12);
    if ( v8 )
      return sub_180010530(v8);
  }
  return result;
}
