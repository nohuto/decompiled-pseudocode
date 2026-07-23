/*
 * XREFs of sub_14045C260 @ 0x14045C260
 * Callers:
 *     <none>
 * Callees:
 *     sub_14027A0F4 @ 0x14027A0F4 (sub_14027A0F4.c)
 *     sub_1402B1D10 @ 0x1402B1D10 (sub_1402B1D10.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402E9768 @ 0x1402E9768 (sub_1402E9768.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_14045C260(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r11d
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v18; // rbx
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v4 = a3;
  v5 = a2;
  v6 = (__int64)(a2 << 25) >> 16;
  if ( (v6 < qword_140C51BE8 || v6 >= qword_140C51BE8 + sub_14027A0F4()) && v4 < 1 )
  {
    v19 = sub_140317A10(v5);
    if ( (v19 & 1) != 0 )
    {
      v7 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (*(_DWORD *)v3 & 1) != 0 )
      {
        v8 = *(_QWORD *)(v3 + 16) + 1LL;
        *(_QWORD *)(v3 + 16) = v8;
        if ( v8 < *(_QWORD *)(v3 + 24) )
        {
          v9 = *(_QWORD *)(v3 + 8);
          *(_QWORD *)(v9 + 8 * v8 - 8) = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)*(_QWORD *)(v9 + 8 * v8 - 8)) & 0xFFF;
          v10 = (*(_DWORD *)(v9 + 8 * v8 - 8) ^ (*((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4))
                                                 + 2) << 9)) & 0xE00;
          *(_QWORD *)(v9 + 8 * v8 - 8) ^= v10;
          v11 = *(_QWORD *)(v9 + 8 * v8 - 8) ^ ((unsigned __int16)*(_QWORD *)(v9 + 8 * v8 - 8) ^ (*(_QWORD *)(v7 + 40) >> 55)) & 0x100;
          *(_QWORD *)(v9 + 8 * v8 - 8) = v11;
          if ( *(__int64 *)(v7 + 40) >= 0 )
          {
            v15 = v11 & 0xFFFFFFFFFFFFFF1FuLL;
            *(_QWORD *)(v9 + 8 * v8 - 8) = v15;
            v14 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v7 + 16) >> 5)) & 0x1F;
          }
          else
          {
            if ( (*(_DWORD *)v3 & 2) != 0 )
            {
              v12 = v11 & 0xFFFFFFFFFFFFF11FuLL | 0xE0;
            }
            else
            {
              LOBYTE(v13) = 7;
              if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
                v13 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              v10 = (unsigned __int8)(v11 ^ (32 * v13)) & 0xE0;
              v12 = v10 ^ v11;
            }
            *(_QWORD *)(v9 + 8 * v8 - 8) = v12;
            v14 = *(_QWORD *)(v9 + 8 * v8 - 8) ^ (*(_DWORD *)(v9 + 8 * v8 - 8) ^ (unsigned int)sub_1402E9768(v10, v6)) & 0x1F;
          }
          *(_QWORD *)(v9 + 8 * v8 - 8) = v14;
          return 0LL;
        }
        return 5LL;
      }
      if ( *(__int64 *)(v7 + 40) < 0 )
      {
        v16 = *(_QWORD *)(v3 + 16) + 1LL;
        *(_QWORD *)(v3 + 16) = v16;
        if ( v16 >= *(_QWORD *)(v3 + 24) )
          return 5LL;
        v18 = 32 * v16 + *(_QWORD *)(v3 + 8);
        sub_1402B1D10(v7, v18 - 32);
        *(_QWORD *)(v18 - 8) = v6;
      }
    }
  }
  return 0LL;
}
