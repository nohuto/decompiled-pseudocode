/*
 * XREFs of sub_14082B1B4 @ 0x14082B1B4
 * Callers:
 *     sub_1403C289C @ 0x1403C289C (sub_1403C289C.c)
 *     sub_14082ACF0 @ 0x14082ACF0 (sub_14082ACF0.c)
 *     sub_140B04AE0 @ 0x140B04AE0 (sub_140B04AE0.c)
 *     sub_140B05D00 @ 0x140B05D00 (sub_140B05D00.c)
 *     sub_140B06A84 @ 0x140B06A84 (sub_140B06A84.c)
 *     sub_140B51F9C @ 0x140B51F9C (sub_140B51F9C.c)
 * Callees:
 *     sub_1402182F8 @ 0x1402182F8 (sub_1402182F8.c)
 *     sub_1402270B8 @ 0x1402270B8 (sub_1402270B8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402DBF90 @ 0x1402DBF90 (sub_1402DBF90.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140313D14 @ 0x140313D14 (sub_140313D14.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403C2A18 @ 0x1403C2A18 (sub_1403C2A18.c)
 *     sub_1403C2A5C @ 0x1403C2A5C (sub_1403C2A5C.c)
 *     sub_1403C2CA0 @ 0x1403C2CA0 (sub_1403C2CA0.c)
 *     sub_1403C2CB8 @ 0x1403C2CB8 (sub_1403C2CB8.c)
 */

__int64 __fastcall sub_14082B1B4(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rdx
  signed __int64 v12; // rsi
  char *v13; // rbp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rdi
  bool v17; // cl
  unsigned __int64 v18; // rbx
  int v19; // eax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // [rsp+20h] [rbp-78h]
  int v28; // [rsp+28h] [rbp-70h]
  __int64 v29; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h]
  unsigned __int8 v35; // [rsp+B8h] [rbp+20h]

  v30 = 0LL;
  v7 = sub_140313C70(a2);
  v8 = ((unsigned __int64)(v5 + 7) >> 15) + (((v6 & 0xFFF) + 4095 + (((unsigned __int64)(v5 + 7) >> 3) & 0xFFF)) >> 12);
  v9 = sub_14027B080(v6);
  v10 = 1;
  if ( v9 != 1 )
    v10 = 9;
  v28 = v10;
  if ( (a4 & 2) == 0 && !(unsigned int)sub_1402DBF90(v7, v7 + 8 * (v8 - 1), 1, v10) )
    return 0LL;
  v29 = 0LL;
  v31 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    v11 = qword_140C53290;
    v12 = qword_140C53300;
  }
  else
  {
    v11 = qword_140C53278;
    v12 = qword_140C53310;
  }
  v13 = 0LL;
  v35 = 17;
  v14 = 0LL;
  v15 = 0LL;
  v16 = sub_1402CBD10(v7, v11, ((unsigned __int8)(a4 & 1) << 29) + 1);
  if ( !v8 )
    goto LABEL_16;
  v17 = (a4 & 8) != 0;
  v27 = v17;
  do
  {
    if ( (v7 & 0xFFF) == 0 && v17 && v8 - v15 >= 0x200 )
    {
      v21 = sub_140313C70(v7);
      if ( !(_DWORD)dword_140C4E560 )
      {
LABEL_21:
        v30 = sub_140317A10(v21);
        sub_1402270B8((volatile signed __int64 *)v21, v21, v12, 1u);
        v22 = sub_140317A10((unsigned __int64)&v30);
        sub_140313D14((_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), v29);
        v29 = v23;
        v31 = sub_1402182F8((*(_QWORD *)(v23 + 40) >> 43) & 0x3FF);
        v15 += 511LL;
        v7 = (__int64)((v21 << 25) + 0x10000000) >> 16;
        goto LABEL_14;
      }
      if ( !v13 )
      {
        v13 = sub_14026DFC0(3);
        v35 = sub_1402CF4F0((__int64)v13);
      }
      if ( v14 )
      {
        if ( (v21 & 0xFFF) != 0 )
          goto LABEL_21;
        sub_1403C2CA0((__int64)v13, v14);
      }
      v14 = sub_140313C70(v21);
      sub_1403C2CB8((__int64)v13, v14, v25, v26);
      goto LABEL_21;
    }
    v18 = v16;
    if ( sub_140317A80(v7) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C51864) && (v16 & 1) != 0 )
          v18 = v16 | 0x8000000000000000uLL;
        goto LABEL_11;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v16 & 1) != 0 )
        v18 = v16 | 0x8000000000000000uLL;
    }
    v19 = 0;
LABEL_11:
    *(_QWORD *)v7 = v18;
    if ( v19 )
      sub_1402294F0(v7, v18);
    v7 += 8LL;
LABEL_14:
    v17 = v27;
    ++v15;
  }
  while ( v15 < v8 );
  if ( v13 )
  {
    if ( v14 )
      sub_1403C2CA0((__int64)v13, v14);
    sub_1402B0CE0((__int64)v13, v35);
  }
LABEL_16:
  *a1 = a3;
  a1[1] = a2;
  if ( v29 )
  {
    v24 = sub_1403C2A5C(v29);
    sub_1403C2A18(v31, v24, v28);
  }
  return 1LL;
}
