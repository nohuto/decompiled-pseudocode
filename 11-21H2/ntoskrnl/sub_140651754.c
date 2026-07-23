/*
 * XREFs of sub_140651754 @ 0x140651754
 * Callers:
 *     sub_1406503B0 @ 0x1406503B0 (sub_1406503B0.c)
 *     sub_140651D6C @ 0x140651D6C (sub_140651D6C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140651754(__int64 a1, int *a2)
{
  unsigned int v2; // edi
  _BYTE **v3; // rsi
  int v4; // ebx
  unsigned int *v5; // r11
  int v7; // edx
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // r10d
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // r8d
  _BYTE *v16; // rdx
  __int64 result; // rax
  _QWORD v18[3]; // [rsp+0h] [rbp-18h] BYREF
  int v19; // [rsp+20h] [rbp+8h] BYREF
  int v20; // [rsp+24h] [rbp+Ch]

  v2 = a2[4] * a2[3];
  v3 = (_BYTE **)v18;
  v4 = *a2;
  v5 = (unsigned int *)&v19;
  v18[0] = a1 + 1;
  v7 = *(_DWORD *)(a1 + 8);
  v18[1] = a1 + 5;
  v8 = 2LL;
  v9 = *(_DWORD *)(a1 + 12);
  v10 = v2 * v4;
  v19 = v7;
  v20 = v9 + v7 - 1;
  do
  {
    v11 = *v5;
    if ( *v5 >= v10 )
    {
      v12 = *a2 - 1;
      v15 = a2[4];
      LOBYTE(v13) = a2[3] - 1;
    }
    else
    {
      v12 = v11 / v2;
      v14 = v11 % v2 % a2[4];
      v13 = v11 % v2 / a2[4];
      LOBYTE(v15) = v14 + 1;
    }
    v16 = *v3;
    ++v5;
    ++v3;
    *v16 = v13;
    result = v12 >> 2;
    v16[1] = result ^ (v15 ^ (v12 >> 2)) & 0x3F;
    v16[2] = v12;
    --v8;
  }
  while ( v8 );
  return result;
}
