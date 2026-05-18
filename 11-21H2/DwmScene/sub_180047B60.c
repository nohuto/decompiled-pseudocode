/*
 * XREFs of sub_180047B60 @ 0x180047B60
 * Callers:
 *     sub_180047B60 @ 0x180047B60 (sub_180047B60.c)
 *     sub_180047C3C @ 0x180047C3C (sub_180047C3C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001483C @ 0x18001483C (sub_18001483C.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_180047B60 @ 0x180047B60 (sub_180047B60.c)
 *     sub_180050728 @ 0x180050728 (sub_180050728.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180047B60(__int64 *a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 *v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  result = sub_1800122B0(a1);
  if ( !result )
  {
    sub_18001483C(*v7, v13);
    if ( sub_1800122C0(v13) )
      sub_180050728(v13[0], a2, a3);
    v8 = *a1;
    sub_180043668(v8);
    v9 = *(_QWORD **)(v8 + 32);
    v10 = *(_QWORD **)(v8 + 40);
    while ( v9 != v10 )
    {
      v12 = 0LL;
      v11 = v9[1];
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        v11 = v9[1];
      }
      *(_QWORD *)&v12 = *v9;
      *((_QWORD *)&v12 + 1) = v11;
      sub_180047B60(&v12, a2, a3);
      sub_180010910((__int64)&v12);
      v9 += 2;
    }
    return sub_180010910((__int64)v13);
  }
  return result;
}
