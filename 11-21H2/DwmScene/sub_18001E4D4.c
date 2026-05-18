/*
 * XREFs of sub_18001E4D4 @ 0x18001E4D4
 * Callers:
 *     sub_18001E3C8 @ 0x18001E3C8 (sub_18001E3C8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001E8E4 @ 0x18001E8E4 (sub_18001E8E4.c)
 *     sub_18001E99C @ 0x18001E99C (sub_18001E99C.c)
 *     sub_18001F2F0 @ 0x18001F2F0 (sub_18001F2F0.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18001E4D4(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // r8d
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  __int64 *v10; // r15
  size_t v11; // r8
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v20[2]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v21; // [rsp+30h] [rbp-39h] BYREF
  __int128 v22; // [rsp+40h] [rbp-29h]
  struct _Mtx_internal_imp_t *v23; // [rsp+58h] [rbp-11h]
  __int128 v24; // [rsp+60h] [rbp-9h] BYREF
  __int128 v25; // [rsp+70h] [rbp+7h]

  *(_QWORD *)(a1 + 16) = a2;
  sub_18001F2F0();
  v5 = HIBYTE(v4) & 0xF;
  if ( !v5 )
    v5 = *(_DWORD *)a1;
  *(_DWORD *)a1 = v5;
  v6 = HIWORD(v4) & 0xF;
  if ( !v6 )
    v6 = *(_DWORD *)(a1 + 4);
  if ( v6 <= v5 )
    v5 = v6;
  *(_DWORD *)(a1 + 4) = v5;
  v7 = (v4 >> 8) & 0xF;
  if ( !v7 )
    v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = 6;
  v8 = (struct _Mtx_internal_imp_t *)sub_18001E99C();
  v23 = v8;
  v9 = Mtx_lock(v8);
  if ( v9 )
    std::_Throw_C_error(v9);
  v10 = (__int64 *)sub_18001E8E4();
  *(_QWORD *)&v25 = 0LL;
  *((_QWORD *)&v25 + 1) = 15LL;
  LOBYTE(v24) = 0;
  v11 = -1LL;
  do
    ++v11;
  while ( a2[v11] );
  sub_180012190((__int64 *)&v24, a2, v11);
  v12 = *v10;
  v13 = *(_QWORD *)(*v10 + 8);
  *(_QWORD *)&v22 = v13;
  DWORD2(v22) = 0;
  v14 = v12;
  while ( !*(_BYTE *)(v13 + 25) )
  {
    *(_QWORD *)&v22 = v13;
    if ( (unsigned __int8)sub_18001DE04((_QWORD *)(v13 + 32), &v24) )
    {
      DWORD2(v22) = 0;
      v13 = *(_QWORD *)(v13 + 16);
    }
    else
    {
      DWORD2(v22) = 1;
      v14 = v13;
      v13 = *(_QWORD *)v13;
    }
  }
  if ( *(_BYTE *)(v14 + 25) || (unsigned __int8)sub_18001DE04(&v24, (_QWORD *)(v14 + 32)) )
  {
    if ( v10[1] == 0x38E38E38E38E38ELL )
      sub_18001F56C();
    v20[0] = v12;
    v21 = (unsigned __int64)v10;
    v15 = sub_180011088(0x48uLL);
    *(_QWORD *)(v15 + 48) = 0LL;
    *(_QWORD *)(v15 + 56) = 0LL;
    *(_OWORD *)(v15 + 32) = v24;
    *(_OWORD *)(v15 + 48) = v25;
    *(_QWORD *)&v25 = 0LL;
    *((_QWORD *)&v25 + 1) = 15LL;
    LOBYTE(v24) = 0;
    *(_QWORD *)(v15 + 64) = 0LL;
    sub_18001DE7C((__int64 *)v15, v20);
    sub_18001DE7C((__int64 *)(v16 + 8), v20);
    sub_18001DE7C((__int64 *)(v17 + 16), v20);
    *(_WORD *)(v18 + 24) = 0;
    v21 = v22;
    v14 = sub_18001F31C(v10, &v21);
  }
  *(_QWORD *)(v14 + 64) = a1;
  if ( *((_QWORD *)&v25 + 1) >= 0x10uLL )
    sub_180010884((char *)v24, *((_QWORD *)&v25 + 1) + 1LL);
  Mtx_unlock(v8);
  return a1;
}
