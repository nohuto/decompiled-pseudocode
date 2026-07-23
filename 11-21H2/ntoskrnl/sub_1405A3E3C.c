/*
 * XREFs of sub_1405A3E3C @ 0x1405A3E3C
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 */

__int64 __fastcall sub_1405A3E3C(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  char *v5; // r15
  int v8; // ebp
  __int64 v9; // rbx
  int v10; // r13d
  _QWORD *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  char v22; // al
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+28h] [rbp-40h]
  unsigned __int8 v31; // [rsp+78h] [rbp+10h] BYREF
  int v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  v4 = 0LL;
  v31 = 0;
  v30 = 0LL;
  v5 = 0LL;
  v8 = 1;
  if ( a4 != 2 )
    v8 = 3;
  v9 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  if ( (unsigned int)sub_14027B080(a1) == 1 )
  {
    v10 = 1;
    v11 = (_QWORD *)(*(_QWORD *)(a3 + 288)
                   + 8
                   * ((v9
                     - 8LL * ((*(_DWORD *)(a3 + 64) >> 12) + (unsigned int)((*(_DWORD *)(a3 + 64) & 0xFFF) != 0))
                     - ((*(_QWORD *)(a3 + 48) >> 9) & 0x7FFFFFFFF8LL)) >> 3));
    v30 = sub_140273AF0((unsigned __int64)v11, (__int64)&v31);
  }
  else
  {
    v10 = 0;
    v5 = sub_14026DFC0(1);
    v11 = (_QWORD *)(v9 - 0x98000000000LL);
    v4 = (((unsigned __int64)(v9 - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v31 = sub_1402CF4F0((__int64)v5);
    sub_14031DE00((__int64)v5, v4, 0LL, v15);
  }
  v16 = 48 * a2 - 0x220000000000LL;
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v29, v12, v13, v14);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_QWORD *)(v16 + 24) &= ~0x4000000000000000uLL;
  *(_BYTE *)(v16 + 34) |= 0x10u;
  v17 = sub_14033AC10((unsigned __int64)v11);
  sub_14033C3E0(48 * a2 - 0x220000000000LL, v17);
  v18 = 48 * v17 - 0x220000000000LL;
  sub_140239060(v18);
  *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = 32LL;
  if ( v32 != 2 )
    v19 = 96LL;
  *(_QWORD *)(v16 + 16) = sub_1402CCC50(v19);
  *(_QWORD *)(v16 + 8) = v11;
  if ( v10 )
  {
    *(_QWORD *)(v16 + 40) |= 0x8000000000000000uLL;
    v22 = *(_BYTE *)(v16 + 34) & 0xFB;
    *(_QWORD *)(v16 + 24) ^= v21 & (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) - 1LL));
    *(_BYTE *)(v16 + 34) = v22 | 3;
  }
  else
  {
    ++*(_WORD *)(v16 + 32);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), v20);
  if ( v10 )
  {
    v24 = sub_1402E4D28(a2, v8);
    v25 = v30;
    LOBYTE(v26) = v31;
    *v11 = v24;
    return sub_140334790(v25, v26, v27, v28);
  }
  else
  {
    *v11 = sub_1402CBD10((unsigned __int64)v11, a2, v8 | 0x20000000u);
    sub_14020D8D0((__int64)v5, v4);
    return sub_1402B0CE0((__int64)v5, v31);
  }
}
