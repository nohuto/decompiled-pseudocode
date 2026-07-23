/*
 * XREFs of sub_140567874 @ 0x140567874
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     HeadlessDispatch @ 0x1403C2310 (HeadlessDispatch.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140502744 @ 0x140502744 (sub_140502744.c)
 *     InbvAcquireDisplayOwnership @ 0x140550B40 (InbvAcquireDisplayOwnership.c)
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_140566F64 @ 0x140566F64 (sub_140566F64.c)
 *     sub_14056712C @ 0x14056712C (sub_14056712C.c)
 *     sub_140567C08 @ 0x140567C08 (sub_140567C08.c)
 *     sub_140567D6C @ 0x140567D6C (sub_140567D6C.c)
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 */

__int64 __fastcall sub_140567874(int a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int64 *v4; // rsi
  __int64 v5; // rdx
  char *v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  char *v9; // rdx
  unsigned __int16 v10; // r8
  __int64 v11; // rdi
  _WORD *v12; // r9
  __int64 v13; // r10
  __int16 v14; // ax
  int v15; // r15d
  unsigned __int16 *v16; // r15
  unsigned __int16 *v17; // rbx
  _OWORD *v18; // rbx
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  char v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  char *v24; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v26[6]; // [rsp+68h] [rbp-A0h] BYREF
  char v27[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v28; // [rsp+D8h] [rbp-30h] BYREF
  char v29; // [rsp+178h] [rbp+70h] BYREF

  memset(v26, 0, sizeof(v26));
  v24 = 0LL;
  v23 = KiBugCheckData;
  v22 = 1;
  v25 = 0LL;
  HeadlessDispatch(14LL, 0LL, 0LL, 0LL, 0LL);
  HeadlessDispatch(1LL, (__int64)&v22, 1LL, 0LL, 0LL);
  v2 = 4LL;
  HeadlessDispatch(20LL, (__int64)&v23, 4LL, 0LL, 0LL);
  sub_140552B40(129);
  v3 = qword_140D01150;
  v4 = (unsigned __int64 *)&qword_140C2BD88;
  if ( qword_140D01150 || (sub_140567C08(0LL, &qword_140C2BD88, 4LL, 0LL), (v3 = qword_140D01150) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v5 = 4LL;
  *((_QWORD *)&v26[1] + 1) = &v29;
  v6 = &v28;
  WORD1(v26[1]) = 256;
  v7 = &v26[2];
  do
  {
    *((_QWORD *)v7 + 1) = v6;
    v6 += 38;
    *(_DWORD *)v7++ = 2490404;
    --v5;
  }
  while ( v5 );
  if ( sub_140566F64(KiBugCheckData, (__int64)&v25) )
  {
    v9 = (char *)*((_QWORD *)&v25 + 1);
    v8 = (unsigned __int16)v25;
  }
  else
  {
    sub_140502744(v27, 0xBuLL, &v24, 0LL, 0, "0x%08x", KiBugCheckData);
    v8 = (unsigned __int16)v24;
    LOWORD(v8) = (_WORD)v24 - (unsigned __int16)v27;
    v9 = v27;
  }
  v10 = 0;
  v11 = *((_QWORD *)&v26[1] + 1);
  if ( (unsigned __int16)v8 >= (unsigned __int16)((WORD1(v26[1]) >> 1) - 1) )
    LOWORD(v8) = (WORD1(v26[1]) >> 1) - 1;
  if ( (_WORD)v8 )
  {
    v12 = (_WORD *)*((_QWORD *)&v26[1] + 1);
    v13 = (unsigned __int16)v8;
    v10 = v8;
    do
    {
      v14 = *v9++;
      *v12++ = v14;
      --v13;
    }
    while ( v13 );
  }
  LOWORD(v26[1]) = 2 * v10;
  *(_WORD *)(v11 + 2LL * v10) = 0;
  InbvAcquireDisplayOwnership(v8, (__int64)v9);
  sub_140552B40(130);
  v15 = KiBugCheckData;
  v26[0] = 0LL;
  sub_1403A7C40();
  if ( (dword_140C0DF90 & 2) != 0 )
  {
    sub_14064E9C0(v15, (unsigned int)&qword_140C2BD88, v3, (unsigned int)v26, a1);
    v11 = *((_QWORD *)&v26[1] + 1);
  }
  sub_1403A7BF0();
  sub_140552B40(128);
  v16 = *(unsigned __int16 **)&v26[0];
  if ( *(_QWORD *)&v26[0] && (v17 = (unsigned __int16 *)*((_QWORD *)&v26[0] + 1)) != 0LL )
  {
    sub_140567D6C(L"\r\n", 6LL);
    sub_140567D6C(*((_QWORD *)v16 + 1), *v16);
    sub_140567D6C(L"\r\n", 6LL);
    sub_140567D6C(*((_QWORD *)v17 + 1), *v17);
  }
  else
  {
    v18 = &v26[2];
    v19 = 4LL;
    do
    {
      sub_14056712C(*v4++, (__int64)v18++);
      --v19;
    }
    while ( v19 );
    v11 = *((_QWORD *)&v26[1] + 1);
  }
  sub_140567D6C(L"\r\n", 6LL);
  sub_140567D6C(v11, LOWORD(v26[1]));
  if ( qword_140D01150 )
  {
    sub_140567D6C(L"\r\n", 6LL);
    sub_140567D6C(*(_QWORD *)(qword_140D01150 + 8), *(unsigned __int16 *)qword_140D01150);
  }
  sub_140567D6C(L"\r\n", 6LL);
  sub_140567D6C(L"\r\n", 6LL);
  v20 = (_QWORD *)&v26[2] + 1;
  do
  {
    sub_140567D6C(*v20, *((unsigned __int16 *)v20 - 4));
    sub_140567D6C(L"\r\n", 6LL);
    v20 += 2;
    --v2;
  }
  while ( v2 );
  return sub_140567D6C(L"\r\n", 6LL);
}
