/*
 * XREFs of sub_140B1AEBC @ 0x140B1AEBC
 * Callers:
 *     sub_140B1AE4C @ 0x140B1AE4C (sub_140B1AE4C.c)
 *     sub_140B1AEBC @ 0x140B1AEBC (sub_140B1AEBC.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140B1AEBC @ 0x140B1AEBC (sub_140B1AEBC.c)
 *     sub_140B1AFD8 @ 0x140B1AFD8 (sub_140B1AFD8.c)
 */

void __fastcall sub_140B1AEBC(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  BOOL v8; // esi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = a1;
    do
    {
      v6 = sub_140317A10(v5);
      v9 = v6;
      if ( v6 )
      {
        if ( (v6 & 1) != 0 && (v6 & 0x80u) == 0LL )
        {
          if ( a3 > 1 )
            sub_140B1AEBC((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4096);
          v7 = sub_140317A10((unsigned __int64)&v9);
          sub_140B1AFD8((v7 >> 12) & 0xFFFFFFFFFFLL);
        }
        v8 = 0;
        if ( sub_140317A80(v5) )
          v8 = sub_140229550() != 0;
        *(_QWORD *)v5 = 0LL;
        if ( v8 )
          sub_1402294F0(v5, 0LL);
      }
      v5 += 8LL;
    }
    while ( v5 < a2 );
  }
}
