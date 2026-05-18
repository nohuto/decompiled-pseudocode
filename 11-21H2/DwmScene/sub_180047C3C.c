/*
 * XREFs of sub_180047C3C @ 0x180047C3C
 * Callers:
 *     sub_180047A84 @ 0x180047A84 (sub_180047A84.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 *     sub_180047B60 @ 0x180047B60 (sub_180047B60.c)
 */

// Hidden C++ exception states: #wind=1
signed __int8 __fastcall sub_180047C3C(__int64 a1, __int64 a2)
{
  volatile signed __int8 *v3; // rax
  signed __int8 v4; // dl
  signed __int8 v5; // r8
  signed __int8 result; // al
  __int64 v7; // rcx
  __int64 v8[3]; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+38h] [rbp-18h]
  _DWORD v10[3]; // [rsp+3Ch] [rbp-14h] BYREF
  char v11; // [rsp+60h] [rbp+10h] BYREF
  char v12; // [rsp+68h] [rbp+18h] BYREF
  char v13; // [rsp+70h] [rbp+20h] BYREF

  sub_18002C7C4(a1 + 16);
  v11 = 1;
  v12 = 0;
  sub_1800441E4((__int64)&v11);
  sub_1800441E4((__int64)&v12);
  v3 = (volatile signed __int8 *)sub_1800441CC(a2 + 72);
  result = _InterlockedCompareExchange8(v3, v4, v5);
  if ( v5 == result )
  {
    v13 = 0;
    v8[2] = 0LL;
    v9 = 0;
    memset(v10, 0, sizeof(v10));
    *(_OWORD *)(a2 + 48) = 0u;
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v10[1];
    v7 = *(_QWORD *)(a2 + 40);
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = *(_QWORD *)(a2 + 40);
    }
    v8[0] = *(_QWORD *)(a2 + 32);
    v8[1] = v7;
    sub_180047B60(v8, a2 + 48, (__int64)&v13);
    return sub_180010910((__int64)v8);
  }
  return result;
}
