/*
 * XREFs of sub_1405AE310 @ 0x1405AE310
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

ULONG_PTR __fastcall sub_1405AE310(ULONG_PTR Argument, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD *v13; // rdx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int64 CurrentIrql; // r13
  signed __int32 v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  int v22; // r13d
  bool v23; // zf
  BOOL v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  signed __int32 v28; // eax
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  signed __int32 v33; // eax
  unsigned int v34; // ebx
  __int64 *v35; // rbx
  BOOL v36; // eax
  __int64 v37; // r8
  __int64 v38; // r9
  _BOOL8 v39; // rdx
  signed __int32 v40; // eax
  unsigned int v41; // ebx
  _QWORD *v42; // rdi
  BOOL v43; // r14d
  signed __int32 v44; // eax
  unsigned int v45; // ebx
  unsigned __int8 v46; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v48; // r8
  int v49; // eax
  ULONG_PTR result; // rax
  signed __int32 v51; // eax
  int v52; // [rsp+28h] [rbp-E0h] BYREF
  int v53; // [rsp+2Ch] [rbp-DCh] BYREF
  int v54; // [rsp+30h] [rbp-D8h] BYREF
  int v55; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v56; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v58[8]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v59[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-10h]

  v4 = *(_QWORD *)(Argument + 16);
  v5 = *(_QWORD *)Argument;
  v6 = *(_OWORD *)(Argument + 56);
  v58[0] = *(_OWORD *)(Argument + 40);
  v8 = *(_OWORD *)(Argument + 72);
  v58[1] = v6;
  v9 = *(_OWORD *)(Argument + 88);
  v58[2] = v8;
  v10 = *(_OWORD *)(Argument + 104);
  v58[3] = v9;
  v11 = *(_OWORD *)(Argument + 120);
  v58[4] = v10;
  v12 = *(_OWORD *)(Argument + 136);
  v58[5] = v11;
  v58[6] = v12;
  v13 = v59;
  v58[7] = *(_OWORD *)(Argument + 152);
  v14 = *(_OWORD *)(Argument + 184);
  v59[0] = *(_OWORD *)(Argument + 168);
  v15 = *(_OWORD *)(Argument + 200);
  v16 = *(_QWORD *)(Argument + 216);
  v59[1] = v14;
  v59[2] = v15;
  v60 = v16;
  CurrentIrql = KeGetCurrentIrql();
  v57 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v13 = (_OWORD *)((-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC);
    a3 = (unsigned int)v13 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  v18 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
  v19 = ~v18 & 0x80000000;
  if ( (v18 & 0x7FFFFFFF) != 0 )
  {
    v53 = 0;
    while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v19 )
      sub_1402F32E0(&v53, (__int64)v13, a3, a4);
    v40 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
    v41 = ~v40 & 0x80000000;
    if ( (v40 & 0x7FFFFFFF) != 0 )
    {
      v54 = 0;
      while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v41 )
        sub_1402F32E0(&v54, (__int64)v13, a3, a4);
    }
    else
    {
      *(_DWORD *)(Argument + 32) = v41 | *(_DWORD *)(Argument + 36);
    }
    goto LABEL_24;
  }
  *(_DWORD *)(Argument + 32) = v19 | *(_DWORD *)(Argument + 36);
  v20 = qword_140C53078;
  if ( qword_140C53078 )
  {
    v21 = sub_1402CBD10(v5, *(_QWORD *)(Argument + 24), -1610612732);
    v22 = 0;
    if ( sub_140317A80(v20) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v23 = (v21 & 1) == 0;
          goto LABEL_13;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v23 = (v21 & 1) == 0;
LABEL_13:
        if ( !v23 )
          v21 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v20 = v21;
    if ( v22 )
      sub_1402294F0(v20, v21);
    LOBYTE(CurrentIrql) = v57;
    v5 = (v20 << 25 >> 16) + (v5 & 0xFFF);
  }
  v24 = 0;
  if ( sub_140317A80(v5) )
    v24 = sub_140229550() != 0;
  *(_QWORD *)v5 = 0LL;
  if ( v24 )
    sub_1402294F0(v5, 0LL);
  *(_QWORD *)(Argument + 8) = v5;
  v28 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
  v29 = ~v28 & 0x80000000;
  if ( (v28 & 0x7FFFFFFF) != 0 )
  {
    v52 = 0;
    while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v29 )
      sub_1402F32E0(&v52, v25, v26, v27);
  }
  else
  {
    *(_DWORD *)(Argument + 32) = v29 | *(_DWORD *)(Argument + 36);
  }
LABEL_24:
  sub_14032F1B0((__int64)v58);
  v33 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
  v34 = ~v33 & 0x80000000;
  if ( (v33 & 0x7FFFFFFF) == 0 )
  {
    *(_DWORD *)(Argument + 32) = v34 | *(_DWORD *)(Argument + 36);
    v35 = *(__int64 **)(Argument + 8);
    v36 = sub_140317A80((unsigned __int64)v35);
    v39 = 0LL;
    if ( (v4 & 1) == 0 )
    {
      if ( v36 )
        v39 = (unsigned int)sub_140229550() != 0;
      goto LABEL_45;
    }
    if ( v36 )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v39 = 1LL;
        if ( !HIBYTE(word_140C51864) )
          goto LABEL_42;
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
LABEL_42:
        v4 |= 0x8000000000000000uLL;
      }
    }
LABEL_45:
    *v35 = v4;
    if ( v39 )
      sub_1402294F0((__int64)v35, v4);
    v42 = (_QWORD *)qword_140C53078;
    if ( qword_140C53078 )
    {
      v43 = 0;
      if ( sub_140317A80(qword_140C53078) )
        v43 = sub_140229550() != 0;
      *v42 = 0LL;
      if ( v43 )
        sub_1402294F0((__int64)v42, 0LL);
    }
    v44 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
    v45 = ~v44 & 0x80000000;
    if ( (v44 & 0x7FFFFFFF) == 0 )
      goto LABEL_53;
    v55 = 0;
    while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v45 )
      sub_1402F32E0(&v55, v39, v37, v38);
    goto LABEL_54;
  }
  LODWORD(v56) = 0;
  while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v34 )
    sub_1402F32E0(&v56, v30, v31, v32);
  v51 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
  v45 = ~v51 & 0x80000000;
  if ( (v51 & 0x7FFFFFFF) == 0 )
  {
LABEL_53:
    *(_DWORD *)(Argument + 32) = v45 | *(_DWORD *)(Argument + 36);
    goto LABEL_54;
  }
  LODWORD(v57) = 0;
  while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v45 )
    sub_1402F32E0(&v57, v30, v31, v32);
LABEL_54:
  if ( qword_140C53078 )
  {
    sub_1402CF280((__int64)v58, qword_140C53078 << 25 >> 16, 1LL, 0);
    sub_14032F1B0((__int64)v58);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v46 = KeGetCurrentIrql();
      if ( v46 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v46 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v48 = *((_QWORD *)CurrentPrcb + 4375);
        v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v23 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
        *(_DWORD *)(v48 + 20) &= v49;
        if ( v23 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
