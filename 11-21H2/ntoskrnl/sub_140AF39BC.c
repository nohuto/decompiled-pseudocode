/*
 * XREFs of sub_140AF39BC @ 0x140AF39BC
 * Callers:
 *     sub_140AF39BC @ 0x140AF39BC (sub_140AF39BC.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140AF39BC @ 0x140AF39BC (sub_140AF39BC.c)
 *     sub_140AF3DB0 @ 0x140AF3DB0 (sub_140AF3DB0.c)
 */

void __fastcall sub_140AF39BC(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  char v10; // bl
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 <= a2 )
  {
    v7 = a1;
    v8 = -1LL;
    do
    {
      v9 = sub_140317A10(v7);
      v10 = v9;
      if ( (v9 & 1) != 0 )
      {
        v11 = (v9 >> 12) & 0xFFFFFFFFFFLL;
        v17 = sub_140317A10(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v12 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL;
        if ( v12 != v8 )
        {
          v16 = sub_140AF3DB0(a4, v12);
          if ( v16 )
            *(_DWORD *)(v16 + 24) |= 0x20000000u;
          v8 = v12;
        }
        v13 = 1LL;
        if ( !a3 )
          goto LABEL_26;
        if ( v10 >= 0 )
          goto LABEL_26;
        v13 = 512LL;
        if ( a3 == 1 )
          goto LABEL_26;
        v15 = (unsigned int)(a3 - 1);
        do
        {
          v13 <<= 9;
          --v15;
        }
        while ( v15 );
        if ( v13 )
        {
LABEL_26:
          do
          {
            v14 = sub_140AF3DB0(a4, v11);
            if ( v14 )
              *(_DWORD *)(v14 + 24) |= 0x20000000u;
            ++v11;
            --v13;
          }
          while ( v13 );
          if ( a3 && v10 >= 0 && v7 != 0xFFFFF6FB7DBEDF68uLL )
            sub_140AF39BC((__int64)(v7 << 25) >> 16, ((__int64)(v7 << 25) >> 16) + 4088, (unsigned int)(a3 - 1), a4);
        }
      }
      v7 += 8LL;
    }
    while ( v7 <= a2 );
  }
}
