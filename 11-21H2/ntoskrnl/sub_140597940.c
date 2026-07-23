/*
 * XREFs of sub_140597940 @ 0x140597940
 * Callers:
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 * Callees:
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14023210C @ 0x14023210C (sub_14023210C.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

_BOOL8 sub_140597940(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, ...)
{
  __int64 v4; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r12d
  unsigned __int64 v10; // rsi
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  _QWORD *v13; // r14
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  BOOL v18; // r14d
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  char v24; // cl
  unsigned __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v31; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v4 = (*(_DWORD *)(a1 + 48) >> 19) & 3;
  v6 = 16LL;
  v7 = qword_1400161D0[v4];
  v8 = dword_140037160[v4];
  v28 = v7;
  if ( v7 != 16 )
    v6 = 1LL;
  v9 = 2 - v8;
  if ( v8 > 1 )
    v9 = 0;
  v10 = sub_140317A10(a2);
  v26 = v10;
  v27 = v10 & 1;
  if ( (v10 & 1) != 0 )
  {
    v10 = sub_140317A10((unsigned __int64)&v26);
  }
  else if ( qword_140C50780 )
  {
    if ( (v10 & 0x10) != 0 )
      v10 &= ~0x10uLL;
    else
      v10 &= ~qword_140C50780;
  }
  v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
  v12 = 0LL;
  v13 = (_QWORD *)a2;
  do
  {
    v14 = a3;
    if ( !sub_140317A80((unsigned __int64)v13) )
      goto LABEL_21;
    if ( !(unsigned int)sub_140229550() )
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (a3 & 1) != 0 )
        v14 = a3 | 0x8000000000000000uLL;
LABEL_21:
      *v13 = v14;
      goto LABEL_22;
    }
    if ( !HIBYTE(word_140C51864) && (a3 & 1) != 0 )
      v14 = a3 | 0x8000000000000000uLL;
    *v13 = v14;
    sub_1402294F0((__int64)v13, v14);
LABEL_22:
    ++v12;
    ++v13;
  }
  while ( v12 < v6 );
  v18 = !a3 && v9 != 3 && sub_14023210C(a2, v6);
  if ( v27 )
  {
    if ( v9 )
    {
      sub_1402285E8(v31, v9, a2);
    }
    else
    {
      v19 = sub_1402CFEB0(a2);
      sub_1402CF280(v31, v19, v28, 0);
    }
  }
  v20 = 48 * v11;
  v21 = v29;
  v22 = v20 - 0x220000000000LL;
  LODWORD(v29) = 0;
  v23 = *(_QWORD *)(v21 + 48);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0((__int64 *)va, v15, v16, v17);
    while ( *(__int64 *)(v22 + 24) < 0 );
  }
  v24 = *(_BYTE *)(v22 + 34);
  *(_QWORD *)(v21 + 48) = v22;
  *(_BYTE *)(v22 + 34) = v24 & 0xF8 | 5;
  *(_QWORD *)v22 ^= (*(_QWORD *)v22 ^ (v23 >> 3)) & 0xFFFFFFFFFFELL;
  *(_BYTE *)(v22 + 34) ^= (*(_BYTE *)(v22 + 34) ^ v24) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v18;
}
