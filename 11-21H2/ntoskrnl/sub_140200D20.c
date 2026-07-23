/*
 * XREFs of sub_140200D20 @ 0x140200D20
 * Callers:
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 * Callees:
 *     sub_14020101C @ 0x14020101C (sub_14020101C.c)
 *     sub_140201144 @ 0x140201144 (sub_140201144.c)
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140200D20(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // r13
  ULONG_PTR v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v18; // rax
  char v19; // [rsp+28h] [rbp-E0h]
  unsigned int v20; // [rsp+2Ch] [rbp-DCh]
  __int64 v21; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+48h] [rbp-C0h]
  __int64 v25; // [rsp+50h] [rbp-B8h]
  _QWORD v26[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v27[44]; // [rsp+118h] [rbp+10h] BYREF

  v4 = 0LL;
  v22 = 0LL;
  memset(v26, 0, 0xB8uLL);
  v5 = 0;
  v20 = 0;
  v6 = 0LL;
  v7 = *((_QWORD *)KeGetCurrentThread() + 23);
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v26[0]) = 0;
  v10 = v7 + 1664;
  v26[2] = 0LL;
  LODWORD(v26[1]) = 20;
  LODWORD(v26[0]) = 1;
  v26[3] = 0LL;
  v24 = v10;
  v19 = sub_1402CF4F0(v10);
  if ( v8 > v23 )
    return 0LL;
  v11 = 0LL;
  v25 = 0LL;
  while ( 1 )
  {
    do
    {
      if ( !v4 )
        goto LABEL_4;
      if ( (v8 & 0xFFF) == 0 )
      {
        sub_14020D8D0(v10, v4);
LABEL_4:
        v4 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        sub_14031DE00(v10, v4, 0LL);
      }
      if ( !v5 )
        v5 = sub_140201144(v8, 1LL, 3LL);
      if ( (unsigned int)sub_14020101C(v8) )
        v5 = 1;
      if ( v22 != -1 )
      {
        if ( (_DWORD)v6 && (v13 = 2LL * (unsigned int)(v6 - 1), v18 = v27[2 * (unsigned int)(v6 - 1) + 1], v18 == v22) )
        {
          v12 = v18 + 1;
        }
        else
        {
          v12 = v22 + 1;
          v13 = 2LL * (unsigned int)v6;
          v6 = (unsigned int)(v6 + 1);
          v27[v13] = v22;
        }
        v27[v13 + 1] = v12;
      }
      sub_1402CF280(v26, (__int64)((v8 << 25) - v11) >> 16, 1LL, 0LL);
      ++v20;
      v8 += 8LL;
    }
    while ( (v8 & 0xFFF) != 0
         && v8 <= v23
         && (_DWORD)v6 != 22
         && ((v8 & 0x78) != 0
          || !(unsigned int)sub_1403531F0(v10) && !(unsigned int)sub_140274C80(v10, v4) && !KeShouldYieldProcessor()) );
    sub_14032F1B0(v26);
    if ( (_DWORD)v6 )
    {
      v14 = v27;
      do
      {
        sub_140215AA8(1LL, *v14, v14[1] - *v14);
        v14 += 2;
        --v6;
      }
      while ( v6 );
      v10 = v24;
      v11 = v25;
    }
    v15 = 48 * (((unsigned __int64)sub_140317A10(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    HIDWORD(v21) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0((char *)&v21 + 4);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) - v20)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    sub_14020D8D0(v10, v4);
    LOBYTE(v16) = v19;
    sub_1402B0CE0(v10, v16);
    if ( v8 > v23 )
      break;
    v6 = 0LL;
    v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = 0;
    v4 = 0LL;
    sub_1402CF4F0(v10);
  }
  if ( !v5 )
    return 0LL;
  return 1073741849LL;
}
