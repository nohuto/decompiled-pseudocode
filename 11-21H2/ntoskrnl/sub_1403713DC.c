/*
 * XREFs of sub_1403713DC @ 0x1403713DC
 * Callers:
 *     sub_140213318 @ 0x140213318 (sub_140213318.c)
 *     sub_140371274 @ 0x140371274 (sub_140371274.c)
 * Callees:
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_1403714E0 @ 0x1403714E0 (sub_1403714E0.c)
 *     sub_140371588 @ 0x140371588 (sub_140371588.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405F2E5C @ 0x1405F2E5C (sub_1405F2E5C.c)
 */

__int64 __fastcall sub_1403713DC(__int64 a1, unsigned __int64 a2, int a3, __int16 a4)
{
  int v5; // edi
  unsigned int v7; // edi
  int v8; // esi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v15; // rax
  int v16; // [rsp+98h] [rbp+20h] BYREF

  LOWORD(v16) = a4;
  v5 = a3 | *(_DWORD *)(a1 + 20);
  v16 = 0;
  v7 = v5 & 0x93000F0B;
  if ( !(unsigned int)sub_140371588(a2, a1, a1 + 32) )
    return 0LL;
  v8 = 0;
  if ( (v7 & 0x1000000) == 0 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    if ( v8 )
    {
      v7 |= 8u;
      if ( (_WORD)v8 != 1 || (int)sub_14042A5E0(a1, 0LL) < 0 )
        return 0LL;
    }
  }
  v9 = a2 + 16;
  if ( (v7 & 0x10000000) == 0 )
    v9 = a2;
  if ( (v7 & 0x20000F08) != 0 )
    v9 = ((v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  v10 = 1LL;
  if ( v9 )
    v10 = v9;
  if ( v10 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v11 = sub_1403714E0(a1, a2, v10, v7 & 0x13000003, (__int64)&v16);
  v13 = v11;
  if ( v11 )
  {
    if ( (v7 & 0x30000F08) != 0 )
    {
      v15 = sub_1405F2E5C(a1, v11, a2, v12, 0LL, v7, 0);
      if ( v8 )
      {
        *(_BYTE *)(v15 + 2) ^= (v8 ^ *(_BYTE *)(v15 + 2)) & 0xF;
        if ( (_WORD)v8 != 1 || (int)sub_14042A5E0(a1, v13) < 0 )
        {
          sub_140364128((__int128 *)a1, v13, v7, 0LL);
          return 0LL;
        }
      }
    }
  }
  return v13;
}
