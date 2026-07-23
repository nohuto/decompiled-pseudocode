/*
 * XREFs of sub_14033BEC0 @ 0x14033BEC0
 * Callers:
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     sub_14033BC30 @ 0x14033BC30 (sub_14033BC30.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_1403B2AB0 @ 0x1403B2AB0 (sub_1403B2AB0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405905CC @ 0x1405905CC (sub_1405905CC.c)
 *     sub_1405AD6C8 @ 0x1405AD6C8 (sub_1405AD6C8.c)
 */

void __fastcall sub_14033BEC0(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  ULONG_PTR v6; // rbx
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  ULONG_PTR v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  ULONG_PTR v17; // rbp
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // [rsp+30h] [rbp-68h] BYREF
  int v35; // [rsp+34h] [rbp-64h] BYREF
  __int64 v36; // [rsp+38h] [rbp-60h]
  ULONG_PTR v37; // [rsp+40h] [rbp-58h] BYREF
  __int64 v38; // [rsp+48h] [rbp-50h]
  __int64 v39; // [rsp+50h] [rbp-48h]
  int v41; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v4 = 0LL;
  v6 = *(_QWORD *)a2;
  v8 = 0LL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v31 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v31 )
    {
      v32 = *(_QWORD *)(v31 + 8 * ((a2 >> 3) & 0x1FF));
      v33 = v6 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v33 = v6;
      v6 = v33;
      if ( (v32 & 0x42) != 0 )
        v6 = v33 | 0x42;
    }
  }
  v9 = *(unsigned __int16 *)(a1 + 174);
  v10 = qword_140C51F48;
  v37 = v6;
  v38 = *(_QWORD *)(qword_140C51F48 + 8 * v9);
  v11 = sub_140317A10((unsigned __int64)&v37);
  v12 = 0xFFFFFFFFFFLL;
  v13 = 0xFFFFDE0000000000uLL;
  v39 = 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL);
  v14 = v39 - 0x220000000000LL;
  v15 = *(_QWORD *)(v39 - 0x220000000000LL + 40);
  v36 = *(_QWORD *)(v10 + 8 * (((unsigned __int64)v15 >> 43) & 0x3FF));
  if ( v15 < 0 )
  {
    if ( (v15 & 0x10000000000LL) == 0 )
    {
      v26 = *(_QWORD *)(v14 + 8);
      if ( v26 > 0 )
        v8 = v26 | 0x8000000000000000uLL;
    }
    v17 = 48 * sub_14033AC10(a2) - 0x220000000000LL;
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v34, v27, v28, v29);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    if ( (v6 & 0x42) != 0 )
      v4 = sub_14033C2A0(v14);
    v30 = *(_QWORD *)(v14 + 16);
    if ( (v30 & 0x400) == 0 || (v6 & 0x200) != 0 )
      goto LABEL_42;
    if ( qword_140C50780 && (v30 & 0x10) == 0 )
      v30 &= ~qword_140C50780;
    if ( (*(_DWORD *)(*(_QWORD *)(v30 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_42:
      ++*(_QWORD *)(v42 + 32);
  }
  else
  {
    if ( v14 == qword_140C53270 )
    {
      if ( sub_140317A80(a2) && (unsigned int)sub_140229550() )
      {
        *(_QWORD *)a2 = 0LL;
        sub_1402294F0(a2, 0LL);
      }
      else
      {
        *(_QWORD *)a2 = 0LL;
      }
      return;
    }
    v16 = *(_QWORD *)(v14 + 8);
    if ( (v16 | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, a2, v6, *(_QWORD *)(v14 + 8));
    v17 = 48 * (v15 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v41 = 0;
    ++*(_QWORD *)(v42 + 32);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v41, v16, v13, v12);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    *(_QWORD *)(v14 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v14 + 40) >> 60) & 7) == 2 )
    {
      v4 = sub_14033C2A0(v14);
      v18 = *(unsigned __int16 *)(v14 + 32);
      if ( (!(_WORD)v18 || v18 > 2 && (v18 != 3 || (*(_BYTE *)(v14 + 34) & 8) == 0)) && v36 != v38 )
        KeBugCheckEx(0x1Au, 0x406uLL, a2, 0xAAAAAAAAAAAAAAABuLL * (v39 >> 4), *(unsigned __int16 *)(v14 + 32));
      sub_14033C300(v14, 0LL);
    }
    if ( (a3 & 4) != 0 && (unsigned int)sub_1403B2AB0(v14) )
    {
      sub_1405905CC();
      *(_BYTE *)(v14 + 35) &= ~0x20u;
    }
  }
  if ( (a3 & 0x10) != 0 )
    *(_BYTE *)(v14 + 35) &= ~8u;
  if ( sub_140317A80(a2) && (unsigned int)sub_140229550() )
  {
    *(_QWORD *)a2 = 0LL;
    sub_1402294F0(a2, 0LL);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
  }
  if ( (*(_BYTE *)(v14 + 34) & 7) != 6 )
    sub_1405AD6C8(v14, v19, v20, v21);
  v22 = *(_QWORD *)(v14 + 24);
  v23 = (v22 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v14 + 24) = v22 ^ (v23 ^ v22) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v22 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    v24 = sub_1402BF640(v14, v23);
  else
    v24 = 2;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v35 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v35, v23, v20, v21);
    while ( *(__int64 *)(v17 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v17 + 34) & 7) != 6 )
    sub_1405AD6C8(v17, v23, v20, v21);
  v25 = (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ v25) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v25 )
    sub_1402BF640(v17, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v4 )
    sub_1402E20D0(v36, v4, 1);
  if ( v8 )
    v24 = sub_1402399A8(a1, v8);
  if ( v24 == 3 )
    ++*(_QWORD *)(v42 + 8);
}
