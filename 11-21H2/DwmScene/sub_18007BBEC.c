/*
 * XREFs of sub_18007BBEC @ 0x18007BBEC
 * Callers:
 *     sub_18003C184 @ 0x18003C184 (sub_18003C184.c)
 * Callees:
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_18003DDEC @ 0x18003DDEC (sub_18003DDEC.c)
 *     sub_18007BBE0 @ 0x18007BBE0 (sub_18007BBE0.c)
 */

__int64 __fastcall sub_18007BBEC(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r11
  __int64 v9; // r8
  __int64 v10; // rdx
  volatile __int64 *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 result; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 160;
  do
  {
    v2 = v1;
    v16 = 0LL;
    v3 = sub_18007BBE0((__int64)&v16);
    v5 = v4 - 144;
    do
    {
      v6 = (__int64 *)sub_18003DDEC(v5 - 16);
      v9 = *v6;
      *v8 += *v6;
      *(v8 - 1) = v9;
      v10 = v8[1];
      if ( v10 < v9 )
        v10 = v9;
      v8[1] = v10;
      v11 = (volatile __int64 *)sub_18001266C(v7);
      v5 = v14 + 32;
      _InterlockedExchange64(v11, v3);
      result = v5 - 16;
    }
    while ( v5 - 16 != v12 );
    v1 = v12 + 160;
  }
  while ( v2 != v13 );
  return result;
}
