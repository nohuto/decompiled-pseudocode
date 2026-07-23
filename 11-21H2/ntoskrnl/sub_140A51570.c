/*
 * XREFs of sub_140A51570 @ 0x140A51570
 * Callers:
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 */

char __fastcall sub_140A51570(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // r14d
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  int v7; // r15d
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  int v10; // ebp
  int v11; // eax

  v3 = a1;
  v4 = 0;
  v5 = (_QWORD *)sub_140313C70(a1);
  if ( v6 )
  {
    do
    {
      v7 = 0;
      if ( sub_140317A80((unsigned __int64)v5) && (unsigned int)sub_140229550() )
        v7 = 1;
      *v5 = 0LL;
      if ( v7 )
        sub_1402294F0((__int64)v5, 0LL);
      ++v4;
      ++v5;
    }
    while ( v4 < a2 );
    goto LABEL_6;
  }
  for ( ; a2; --a2 )
  {
LABEL_6:
    sub_1403AD304(v3, 0);
    v3 += 4096LL;
  }
  v8 = (_QWORD *)qword_140C52A30;
  v9 = 32LL;
  do
  {
    v10 = 0;
    v11 = sub_140317A80((unsigned __int64)v8);
    if ( v11 )
    {
      v11 = sub_140229550();
      if ( v11 )
        v10 = 1;
      else
        LOBYTE(v11) = (unsigned __int8)KeGetCurrentThread();
    }
    *v8 = 0LL;
    if ( v10 )
      LOBYTE(v11) = sub_1402294F0((__int64)v8, 0LL);
    ++v8;
    --v9;
  }
  while ( v9 );
  return v11;
}
