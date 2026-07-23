/*
 * XREFs of sub_1405B585C @ 0x1405B585C
 * Callers:
 *     sub_140269570 @ 0x140269570 (sub_140269570.c)
 *     sub_1402BBAD0 @ 0x1402BBAD0 (sub_1402BBAD0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405B585C(__int64 a1, _DWORD *a2, BOOL a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rdx
  char *v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  __int64 v18; // r9
  unsigned int v19; // r13d
  __int64 v20; // rsi
  BOOL v21; // r12d
  __int64 v22; // r9
  unsigned int v23; // eax
  signed __int32 v25[8]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int8 v26; // [rsp+20h] [rbp-158h]
  char *v27; // [rsp+28h] [rbp-150h]
  __int64 v28; // [rsp+30h] [rbp-148h]
  unsigned __int64 v29; // [rsp+38h] [rbp-140h]
  unsigned __int64 v30; // [rsp+40h] [rbp-138h]
  _DWORD *v31; // [rsp+48h] [rbp-130h]
  unsigned __int64 v32; // [rsp+50h] [rbp-128h]
  __int64 v33; // [rsp+58h] [rbp-120h]
  __int64 v34; // [rsp+60h] [rbp-118h]
  _QWORD v35[24]; // [rsp+70h] [rbp-108h] BYREF

  v31 = a2;
  memset(v35, 0, 0xB8uLL);
  v6 = (unsigned int)a2[1];
  v7 = 0LL;
  v8 = (*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL;
  v35[3] = 0LL;
  v33 = v8 - 0x98000000000LL;
  LODWORD(v35[1]) = 20;
  v9 = 0LL;
  v34 = 0LL;
  v11 = sub_14026DFC0(3);
  v27 = v11;
  do
  {
    v12 = v10 + 8 * v6;
    v13 = sub_140317A10(v12);
    if ( (v13 & 0xF000) == 0x1000 )
    {
      v14 = 1LL;
    }
    else
    {
      v15 = sub_140317A10(v12 + 8);
      if ( qword_140C50780 )
      {
        if ( (v15 & 0x10) != 0 )
          v15 &= ~0x10uLL;
        else
          v15 &= ~qword_140C50780;
      }
      v14 = HIDWORD(v15);
    }
    if ( qword_140C50780 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C50780;
    }
    v6 = HIDWORD(v13);
    v28 = v14 + v7;
    v32 = v14 << 21;
    v16 = (((__int64)((v12 << 25) - v9) >> 16 << 25) - v9) >> 16;
    v30 = v16;
    v29 = v6;
    v17 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v26 = sub_1402CF4F0((__int64)v11);
    sub_14031DE00((__int64)v11, v17, 0LL, v18);
    v19 = 0;
    if ( v14 )
    {
      v20 = (__int64)v27;
      do
      {
        v21 = 0;
        if ( sub_140317A80(v12) )
          v21 = sub_140229550() != 0;
        *(_QWORD *)v12 = 0LL;
        if ( v21 )
          sub_1402294F0(v12, 0LL);
        if ( a3 )
          sub_1402285E8((__int64)v35, 1u, v12);
        v12 += 8LL;
        if ( (v12 & 0xFFF) == 0 && v19 + 1 < v14 )
        {
          sub_14020D8D0(v20, v17);
          v17 += 8LL;
          sub_14031DE00(v20, v17, 0LL, v22);
        }
        ++v19;
      }
      while ( v19 < v14 );
      v6 = v29;
      v16 = v30;
      v11 = v27;
    }
    sub_14020D8D0((__int64)v11, v17);
    sub_1402B0CE0((__int64)v11, v26);
    if ( a3 )
    {
      sub_14032F1B0((__int64)v35);
      if ( v6 )
      {
        _InterlockedOr(v25, 0);
        v23 = dword_140D31080 - *v31;
        a3 = v23 <= 2 && ((*v31 & 1) != 0 || v23 < 2);
      }
    }
    sub_14026DAB0(v16, v16 + v32, 13);
    v10 = v33;
    v7 = v28;
    v9 = v34;
  }
  while ( v6 );
  return v28;
}
