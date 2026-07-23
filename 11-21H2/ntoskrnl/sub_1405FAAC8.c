/*
 * XREFs of sub_1405FAAC8 @ 0x1405FAAC8
 * Callers:
 *     sub_1405F94CC @ 0x1405F94CC (sub_1405F94CC.c)
 * Callees:
 *     sub_1402210C0 @ 0x1402210C0 (sub_1402210C0.c)
 */

__int64 __fastcall sub_1405FAAC8(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  _BYTE *v6; // r15
  unsigned __int64 v7; // rdi
  _BYTE *v10; // rax
  char v11; // cl
  char v12; // bp
  __int64 result; // rax
  char v14; // [rsp+60h] [rbp+8h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v3 = 0LL;
  v4 = 8 * a2;
  v5 = 0LL;
  v6 = (char *)a1 - 1;
  v7 = 0LL;
  if ( !(8 * a2) )
    return 0LL;
  do
  {
    v10 = v6 + 1;
    v11 = v7 & 7;
    if ( (v7 & 7) != 0 )
      v10 = v6;
    v15 = 0LL;
    v6 = v10;
    v14 = 1 << v11;
    v12 = (1 << v11) ^ *v10;
    *v10 = v12;
    sub_1402210C0(a1, a2, &v15, 0LL);
    if ( (_DWORD)v15 == v16 )
    {
      ++v3;
      v5 = v7;
    }
    ++v7;
    *v6 = v14 ^ v12;
  }
  while ( v7 < v4 );
  if ( v3 != 1 )
    return 0LL;
  result = 1LL;
  *((_BYTE *)a1 + (v5 >> 3)) ^= 1 << (v5 & 7);
  return result;
}
