/*
 * XREFs of sub_1405A2A48 @ 0x1405A2A48
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14026ED30 @ 0x14026ED30 (sub_14026ED30.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405A2A48(__int64 a1, int a2)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r9
  unsigned __int8 v14; // r12
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rcx
  BOOL v19; // r13d
  unsigned __int64 v20; // rax
  unsigned __int8 v22; // [rsp+20h] [rbp-128h]
  __int64 v23; // [rsp+28h] [rbp-120h]
  __int64 v24; // [rsp+30h] [rbp-118h]
  __int64 v25; // [rsp+38h] [rbp-110h]
  unsigned __int64 v26; // [rsp+40h] [rbp-108h]
  _QWORD v27[24]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v27, 0, 0xB8uLL);
  v3 = 0;
  v4 = 0LL;
  if ( a2 )
    v5 = (__int64)sub_14026DFC0(1);
  else
    v5 = sub_14027B520();
  v9 = v5;
  v10 = v8 + ((((unsigned int)dword_140C4F478 >> 12) + v6 + ((dword_140C4F478 & 0xFFF) != 0)) << 12);
  v26 = v10;
  v11 = qword_140C4F408;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = v12;
  v25 = qword_140C4F408;
  LODWORD(v27[0]) = v7;
  WORD2(v27[0]) = 0;
  v27[2] = 0LL;
  LODWORD(v27[1]) = 20;
  v27[3] = 0LL;
  v14 = sub_1402CF4F0(v5);
  v22 = v14;
  if ( dword_140C4F440 )
  {
    while ( 1 )
    {
      v15 = v10 + (v3 << 12);
      v16 = v12 + 8LL * v3;
      v23 = *(_QWORD *)(v11 + 8LL * v3 + 48);
      if ( !v4 )
        goto LABEL_8;
      if ( (v16 & 0xFFF) == 0 )
        break;
LABEL_9:
      if ( sub_140317A10(v12 + 8LL * v3) )
      {
        sub_14033A410(v17, v15);
        sub_14026ED30(v18, v15);
        v19 = 0;
        if ( sub_140317A80(v16) )
          v19 = sub_140229550() != 0;
        *(_QWORD *)v16 = 0LL;
        if ( v19 )
          sub_1402294F0(v16, 0LL);
        sub_1402CF280((__int64)v27, v15, 1LL, 0);
        sub_140228660(48 * v23 - 0x220000000000LL, 0);
        v20 = sub_14033AC10(v16);
        sub_140228660(48 * v20 - 0x220000000000LL, 0);
        v12 = v24;
        v11 = v25;
      }
      v10 = v26;
      if ( ++v3 >= dword_140C4F440 )
      {
        v14 = v22;
        goto LABEL_17;
      }
    }
    sub_14032F1B0((__int64)v27);
    sub_14020D8D0(v9, v4);
LABEL_8:
    v4 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    sub_14031DE00(v9, v4, 0LL, v13);
    goto LABEL_9;
  }
LABEL_17:
  sub_14032F1B0((__int64)v27);
  if ( v4 )
    sub_14020D8D0(v9, v4);
  return sub_1402B0CE0(v9, v14);
}
