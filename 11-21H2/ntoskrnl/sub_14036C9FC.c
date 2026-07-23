/*
 * XREFs of sub_14036C9FC @ 0x14036C9FC
 * Callers:
 *     sub_14036CB28 @ 0x14036CB28 (sub_14036CB28.c)
 * Callees:
 *     sub_1402270B8 @ 0x1402270B8 (sub_1402270B8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14036C624 @ 0x14036C624 (sub_14036C624.c)
 */

char __fastcall sub_14036C9FC(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  BOOL v12; // r14d

  v4 = a2;
  v5 = ((__int64)(a3 - a2) >> 3) + 1;
  v6 = a1;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 40) >> 12;
  else
    v7 = ((unsigned __int64)sub_140317A10(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
  v8 = sub_1402CC7C0(v7, 0LL, 0x80000000);
  v9 = (volatile signed __int64 *)(v8 + 8 * ((v4 >> 3) & 0x1FF));
  if ( v4 <= a3 )
  {
    while ( 1 )
    {
      v10 = sub_140317A10(v4);
      v11 = sub_140317A10((unsigned __int64)v9);
      if ( v10 != v11 )
      {
        if ( (v10 & 1) == 0 )
        {
          v12 = 0;
          if ( sub_140317A80((unsigned __int64)v9) )
            v12 = sub_140229550() != 0;
          goto LABEL_8;
        }
        if ( (v11 & 1) == 0 )
        {
          v12 = 0;
          if ( sub_140317A80((unsigned __int64)v9) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              v12 = 1;
              if ( !HIBYTE(word_140C51864) )
LABEL_21:
                v10 |= 0x8000000000000000uLL;
            }
            else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
            {
              goto LABEL_21;
            }
          }
LABEL_8:
          *v9 = v10;
          if ( v12 )
            sub_1402294F0((__int64)v9, v10);
          goto LABEL_10;
        }
        sub_1402270B8(v9, v4, v10, 3u);
      }
LABEL_10:
      v4 += 8LL;
      ++v9;
      if ( v4 > a3 )
      {
        v6 = a1;
        break;
      }
    }
  }
  sub_1402BEDD0(v8, 0x11u);
  return sub_14036C624(v6, v4 - 8LL * v5, v5);
}
