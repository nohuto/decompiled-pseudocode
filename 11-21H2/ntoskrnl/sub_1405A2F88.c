/*
 * XREFs of sub_1405A2F88 @ 0x1405A2F88
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14026ED30 @ 0x14026ED30 (sub_14026ED30.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405A2F88(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  char *v4; // r12
  unsigned __int64 v5; // r15
  __int64 v6; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int8 v9; // bl
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  bool i; // cf
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  BOOL v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v30; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-CCh]
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-B0h]
  _QWORD v36[24]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v36, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0LL;
  v33 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned int)sub_14027B080(v2) == 1 )
  {
    v7 = *(_QWORD *)(a1 + 288);
    v8 = 1LL;
    v31 = 1;
    v9 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 64);
    v31 = 0;
    v7 = ((v2 >> 9) & 0x7FFFFFFFF8LL) + 8LL * ((v10 >> 12) + ((v10 & 0xFFF) != 0)) - 0x98000000000LL;
    v4 = sub_14026DFC0(1);
    v9 = sub_1402CF4F0((__int64)v4);
    v8 = 0LL;
  }
  LOBYTE(v30) = v9;
  v11 = (unsigned int)dword_140C4F478 >> 12;
  v35 = v7 + 8LL * ((unsigned int)v11 + ((dword_140C4F478 & 0xFFF) != 0));
  v36[3] = 0LL;
  LODWORD(v36[1]) = 20;
  v12 = (__int64)(v7 << 25) >> 16;
  for ( i = v7 < v35; i; i = v7 < v35 )
  {
    if ( (_DWORD)v8 )
    {
      if ( v3 )
      {
        if ( (v7 & 0xFFF) != 0 )
          goto LABEL_15;
        LOBYTE(v11) = v9;
        sub_140334790(v3, v11, v8, v6);
      }
      v14 = sub_140273AF0(v7, (__int64)&v30);
      v9 = v30;
      v33 = v14;
    }
    else
    {
      if ( v5 )
      {
        if ( (v7 & 0xFFF) != 0 )
          goto LABEL_15;
        sub_14032F1B0((__int64)v36);
        sub_14020D8D0((__int64)v4, v5);
      }
      v5 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      sub_14031DE00((__int64)v4, v5, 0LL, v6);
    }
LABEL_15:
    v15 = sub_140317A10(v7);
    v34 = v15;
    if ( v15 )
    {
      if ( (v15 & 1) != 0 )
      {
        LOBYTE(v17) = sub_14033A410(v16, v12) & 0xF;
        if ( (_BYTE)v17 == 9 )
          sub_14026ED30(v17, v12);
        sub_1402CF280((__int64)v36, v12, 1LL, 0);
        v19 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v34) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        LODWORD(v32) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v32, v18, v20, v21);
          while ( *(__int64 *)(v19 + 24) < 0 );
        }
        sub_140273FD0(v19, v18, v20, v21);
      }
      else
      {
        v19 = sub_140315D60(v7, 0LL, 0);
      }
      v22 = 0;
      if ( sub_140317A80(v7) )
        v22 = sub_140229550() != 0;
      *(_QWORD *)v7 = 0LL;
      if ( v22 )
        sub_1402294F0(v7, 0LL);
      v23 = *(_QWORD *)(v19 + 24);
      if ( (v23 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
        KeBugCheckEx(
          0x1Au,
          0x18951uLL,
          v7,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(v19 + 0x220000000000LL) >> 4),
          *(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      *(_BYTE *)(v19 + 34) = *(_BYTE *)(v19 + 34) & 0xF8 | 6;
      *(_QWORD *)(v19 + 24) = v23 & 0xC000000000000000uLL | (v23 + 1) & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
      v24 = 48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      sub_140239060(v24);
      v11 = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 = v31;
      v25 = *(_QWORD *)(v19 + 40) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
      *(_QWORD *)(v19 + 40) = v25;
      if ( (_DWORD)v8 )
        *(_QWORD *)(v19 + 40) = v25 & 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = v30;
    }
    else
    {
      v8 = v31;
    }
    v3 = v33;
    v7 += 8LL;
    v12 += 4096LL;
  }
  sub_14032F1B0((__int64)v36);
  if ( v31 )
  {
    LOBYTE(v26) = v9;
    return sub_140334790(v3, v26, v27, v28);
  }
  else
  {
    sub_14020D8D0((__int64)v4, v5);
    return sub_1402B0CE0((__int64)v4, v9);
  }
}
