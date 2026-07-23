/*
 * XREFs of sub_1405A1F60 @ 0x1405A1F60
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_14027D258 @ 0x14027D258 (sub_14027D258.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 */

unsigned __int64 __fastcall sub_1405A1F60(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  int v14; // r13d
  unsigned __int64 v15; // rbx
  bool v16; // zf
  __int64 v18; // [rsp+60h] [rbp+8h]
  unsigned __int8 v19; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  if ( (unsigned int)sub_14027B080(a1) == 1 )
    v5 = sub_14027B520();
  else
    v5 = (__int64)sub_14026DFC0(1);
  v6 = v5;
  v7 = a1 + ((a2 + ((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0)) << 12);
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = qword_140C4F408;
  v9 = 0LL;
  v19 = sub_1402CF4F0(v5);
  if ( !dword_140C4F440 )
    goto LABEL_22;
  do
  {
    v11 = *(_QWORD *)(v18 + 8 * v9 + 48);
    v12 = v8 + 8 * v9;
    if ( v4 )
    {
      if ( (v12 & 0xFFF) != 0 )
        goto LABEL_9;
      sub_14020D8D0(v6, v4);
    }
    v4 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    sub_14031DE00(v6, v4, 0LL, v10);
LABEL_9:
    v13 = sub_14033AC10(v8 + 8 * v9);
    sub_14027D258(v13);
    sub_14027D258(v11);
    v14 = 0;
    v15 = sub_1402CBD10(v8 + 8 * v9, v11, 3) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
    if ( !sub_140317A80(v8 + 8 * v9) )
      goto LABEL_17;
    if ( (unsigned int)sub_140229550() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_17;
      v16 = (v15 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_17;
      v16 = (v15 & 1) == 0;
    }
    if ( !v16 )
      v15 |= 0x8000000000000000uLL;
LABEL_17:
    *(_QWORD *)v12 = v15;
    if ( v14 )
      sub_1402294F0(v8 + 8 * v9, v15);
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < dword_140C4F440 );
  if ( v4 )
    sub_14020D8D0(v6, v4);
LABEL_22:
  sub_1402B0CE0(v6, v19);
  return v7;
}
