/*
 * XREFs of sub_140AF5478 @ 0x140AF5478
 * Callers:
 *     sub_140AF5164 @ 0x140AF5164 (sub_140AF5164.c)
 *     sub_140AF5384 @ 0x140AF5384 (sub_140AF5384.c)
 *     sub_140AF5940 @ 0x140AF5940 (sub_140AF5940.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140236C98 @ 0x140236C98 (sub_140236C98.c)
 *     sub_140246160 @ 0x140246160 (sub_140246160.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403B770C @ 0x1403B770C (sub_1403B770C.c)
 *     sub_1403B78C4 @ 0x1403B78C4 (sub_1403B78C4.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140B51A8C @ 0x140B51A8C (sub_140B51A8C.c)
 */

void __fastcall sub_140AF5478(__int64 a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v2; // r14
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __m128i *v6; // r13
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // r15
  unsigned __int8 CurrentIrql; // di
  __m128i *v13; // rbx
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __m128i *v17; // rax
  __int16 v18; // ax
  _QWORD *v19; // r12
  __int64 v20; // r15
  BOOL v21; // eax
  int v22; // edx
  int v23; // eax
  __int64 v24; // r8
  ULONG_PTR v25; // r12
  unsigned int v26; // ecx
  unsigned int i; // r15d
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  ULONG_PTR v30; // rax
  __int64 v31; // r13
  int v32; // eax
  int v33; // r9d
  int v34; // ecx
  char v35; // al
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v38; // r8
  int v39; // eax
  bool v40; // zf
  __int64 v41; // [rsp+40h] [rbp-79h]
  _QWORD v42[2]; // [rsp+48h] [rbp-71h] BYREF
  __int128 v43; // [rsp+58h] [rbp-61h]
  __m128i v44; // [rsp+68h] [rbp-51h] BYREF
  __m128i v45; // [rsp+78h] [rbp-41h] BYREF
  __m128i v46[8]; // [rsp+88h] [rbp-31h] BYREF
  unsigned int v47; // [rsp+120h] [rbp+67h]
  BOOL v48; // [rsp+128h] [rbp+6Fh] BYREF
  int v49; // [rsp+130h] [rbp+77h]
  __m128i *v50; // [rsp+138h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 40);
  v44 = 0LL;
  v45 = 0LL;
  v46[0] = 0LL;
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v3 = *(_DWORD *)(a1 + 24);
  v49 = v3;
  if ( (v3 & 0x20000000) == 0 || (v3 & 0x1FFFFFFF) == 2 || (v4 = 1LL, (v3 & 0x1FFFFFFF) == 0x18) )
    v4 = 0LL;
  v41 = v4;
  v48 = v3 != 24;
  v5 = 48 * v1 - 0x220000000000LL;
  v50 = 0LL;
  v6 = 0LL;
  if ( v2 )
  {
    while ( !v4 )
    {
LABEL_6:
      if ( (v1 & 0x1FF) == 0 && !v4 && v2 >= 0x200 )
      {
        v25 = sub_1403B7A10(v1, v2);
        if ( v25 < 0x200 )
        {
          *(_QWORD *)v5 = v6;
          ++v1;
          v6 = (__m128i *)v5;
          v50 = (__m128i *)v5;
          v5 += 48LL;
          --v2;
        }
        else
        {
          v26 = (qword_140D068D8 & 0x2000000000LL) == 0;
          v47 = v26;
          for ( i = v26; i <= 1; ++i )
          {
            v28 = qword_14001C780[i];
            if ( v1 == (v1 & ~(v28 - 1)) && v25 >= v28 )
            {
              if ( i == v26 )
              {
                v30 = v25;
              }
              else
              {
                v29 = qword_14001C780[i - 1];
                v30 = v29 - (v1 & (v29 - 1));
                if ( v30 > v25 )
                  v30 = v25;
              }
              v31 = v28 * (v30 / v28);
              v32 = sub_1403B78C4(0, i);
              v34 = v33;
              LOBYTE(v34) = v32 == 0;
              sub_140246160((unsigned __int16 *)&StartContext, v1, v31, i, 1, v34, v33);
              sub_140236C98(v1, v31, i, 1, 0, 0);
              for ( ; v31; v31 -= v28 )
              {
                v35 = sub_1402F2700(v5);
                v42[1] = v48;
                v43 = 0LL;
                v42[0] = v1;
                LOBYTE(v43) = v35;
                sub_1402BEEA0((__int64)v42);
                v25 -= v28;
                v2 -= v28;
                v1 += v28;
                v5 += 48 * v28;
              }
              if ( v25 < 0x200 )
              {
                v6 = v50;
                goto LABEL_9;
              }
              v26 = v47;
              i = v47 - 1;
            }
          }
          v6 = v50;
        }
        goto LABEL_9;
      }
      *(_QWORD *)v5 = v6;
      v6 = (__m128i *)v5;
      v50 = (__m128i *)v5;
LABEL_8:
      ++v1;
      v5 += 48LL;
      --v2;
LABEL_9:
      v4 = v41;
      if ( !v2 )
        goto LABEL_10;
    }
    v18 = *(_WORD *)(v5 + 32);
    if ( v18 != 1 )
    {
      if ( v18 )
        goto LABEL_8;
      goto LABEL_6;
    }
    v19 = (_QWORD *)(*(_QWORD *)(v5 + 8) | 0x8000000000000000uLL);
    v20 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v21 = sub_140317A80((unsigned __int64)v19);
    v22 = 0;
    if ( v21 )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v23 = 1;
        goto LABEL_27;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v23 = v22;
        goto LABEL_27;
      }
    }
    v23 = v22;
LABEL_27:
    *v19 = 0LL;
    if ( v23 )
      sub_1402294F0((__int64)v19, 0LL);
    v24 = *(_QWORD *)(v20 + 24) ^ ((*(_QWORD *)(v20 + 24) - 1LL) ^ *(_QWORD *)(v20 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v20 + 24) = v24;
    if ( (v24 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      sub_140B51A8C(v20);
    v4 = v41;
    *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v5 + 32) = 0;
    goto LABEL_6;
  }
LABEL_10:
  sub_1403B770C((__int64)&v44, 0, 0);
  if ( v49 == 24 )
    v46[0].m128i_i8[2] &= 0xF8u;
  v7 = sub_1403B78C4(0, 3u);
  v11 = v10 | 0x400;
  if ( !v7 )
    v11 = v10;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v8 = (-1LL << (CurrentIrql + 1)) & 4;
    v9 = (unsigned int)v8 | *(_DWORD *)(v10 + 20);
    *(_DWORD *)(v10 + 20) = v9;
  }
  while ( v6 )
  {
    v13 = v6;
    v6 = (__m128i *)v6->m128i_i64[0];
    v14 = _mm_loadu_si128(&v44);
    v15 = _mm_loadu_si128(&v45);
    v16 = _mm_loadu_si128(v46);
    v46[1] = v14;
    v46[2] = v15;
    v17 = v13;
    v46[3] = v16;
    do
    {
      *v17 = v14;
      v17[1] = v15;
      v17[2] = v16;
      v17 += 3;
    }
    while ( v17 != &v13[3] );
    v48 = 0;
    while ( _interlockedbittestandset64(&v13[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v48, v8, v9, v10);
      while ( v13[1].m128i_i64[1] < 0 );
    }
    sub_1402C6EB0(0xAAAAAAAAAAAAAAABuLL * ((__int64)v13[0x22000000000LL].m128i_i64 >> 4), v11);
    _InterlockedAnd64(&v13[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v38 = *((_QWORD *)CurrentPrcb + 4375);
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v40 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
        *(_DWORD *)(v38 + 20) &= v39;
        if ( v40 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
}
