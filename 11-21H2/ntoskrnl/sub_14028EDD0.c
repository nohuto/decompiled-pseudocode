/*
 * XREFs of sub_14028EDD0 @ 0x14028EDD0
 * Callers:
 *     sub_1402ED194 @ 0x1402ED194 (sub_1402ED194.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_1405A8968 @ 0x1405A8968 (sub_1405A8968.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_1402802DC @ 0x1402802DC (sub_1402802DC.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_14028F080 @ 0x14028F080 (sub_14028F080.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_14028EDD0(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  int v7; // ebx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r14
  _QWORD *v10; // r15
  _QWORD *v11; // r13
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  __int64 v16; // r12
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // r9
  bool v33; // cc
  unsigned __int64 v34; // rax
  __int64 v35; // [rsp+30h] [rbp-68h]
  __int64 v36; // [rsp+38h] [rbp-60h]
  unsigned __int64 v37; // [rsp+40h] [rbp-58h]
  unsigned int v38; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v39; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v40; // [rsp+B0h] [rbp+18h] BYREF
  char v41; // [rsp+B8h] [rbp+20h]

  v41 = a4;
  v38 = 0;
  v7 = 0;
  v36 = *((_QWORD *)KeGetCurrentThread() + 23);
  v35 = *(_QWORD *)(v36 + 1680);
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *(int *)(a3 + 52) < 0 )
  {
    v7 = 2;
    v39 = ((__int64)(v9 - v8) >> 3) + 1;
  }
  else
  {
    v39 = 0LL;
  }
  v10 = (_QWORD *)a6;
  if ( a6 )
    *(_QWORD *)a6 = 0LL;
  if ( v8 <= v9 )
  {
    v11 = a7;
    v12 = a5;
    do
    {
      v13 = sub_14028F080(v8, v9, 0, a4, v12, (__int64)&v38);
      v8 = v13;
      if ( !v13 )
        return v39;
      v14 = 1LL;
      v15 = v13;
      a6 = 1LL;
      if ( v38 )
      {
        v20 = v38;
        do
        {
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v14 <<= 9;
          --v20;
        }
        while ( v20 );
        a6 = v14;
      }
      v16 = 8 * v14;
      v37 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v17 = *(_QWORD *)v15;
        if ( v15 >= 0xFFFFF6FB7DBED000uLL
          && v15 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v21 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 8 * ((v15 >> 3) & 0x1FF));
            v23 = v17 | 0x20;
            if ( (v22 & 0x20) == 0 )
              v23 = *(_QWORD *)v15;
            v17 = v23;
            if ( (v22 & 0x42) != 0 )
              v17 = v23 | 0x42;
          }
        }
        v40 = v17;
        if ( v17 )
        {
          if ( (unsigned __int64)&v40 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v40 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v18 = v17;
            if ( (dword_140D06880 & 0xC00000) != 0
              && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
              && (v17 & 1) != 0
              && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
            {
              v24 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              v18 = v17;
              if ( v24 )
              {
                v18 = v17 | 0x20;
                v25 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v40 >> 3) & 0x1FF));
                if ( (v25 & 0x20) == 0 )
                  v18 = v17;
                if ( (v25 & 0x42) != 0 )
                  v18 |= 0x42uLL;
              }
            }
          }
          else
          {
            v18 = v17;
          }
          if ( (v18 & 0x3E0) != 0x200 || (v18 & 1) != 0 || (v18 & 0x400) != 0 && !sub_1402806A0(v18) )
            v7 &= ~1u;
          else
            v7 |= 1u;
          if ( (v7 & 2) != 0 )
          {
            if ( (v7 & 1) != 0 )
              v39 -= v14;
          }
          else if ( (v7 & 1) == 0 )
          {
            v39 += v14;
          }
          if ( v10 )
          {
            if ( !*(_QWORD *)(v35 + 344) || (v7 & 1) != 0 )
              goto LABEL_22;
            if ( (v17 & 1) != 0 )
            {
              v26 = 48 * (((unsigned __int64)sub_140317A10(&v40) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
              v27 = *(_QWORD *)(v26 + 40);
              if ( v27 < 0 && ((v27 & 0x10000000000LL) != 0 || *(__int64 *)(v26 + 8) <= 0) )
              {
                v28 = *(_QWORD *)(v26 + 8) | 0x8000000000000000uLL;
                goto LABEL_74;
              }
              goto LABEL_22;
            }
            if ( (v17 & 0x400) == 0 || sub_1402806A0(v17) || sub_1402802DC(v29) )
              goto LABEL_22;
            if ( qword_140C50780 && (v30 & 0x10) == 0 )
              v30 &= ~qword_140C50780;
            v28 = v30 >> 16;
LABEL_74:
            v31 = sub_140234F14(v36, v28);
            if ( !v31 )
            {
LABEL_22:
              v14 = a6;
            }
            else
            {
              v33 = *(_QWORD *)(v32 + 344) <= v31[12];
              v14 = a6;
              if ( !v33 )
                ++*v10;
            }
          }
          if ( v11 )
          {
            if ( (v7 & 1) == 0 )
            {
              v34 = sub_140317A10(&v40);
              v14 = a6;
              if ( *(_QWORD *)(*(_QWORD *)(qword_140C51F48
                                         + 8
                                         * ((*(_QWORD *)(48 * ((v34 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL))
                             + 176LL) != *v11 )
                *v11 = 0LL;
            }
          }
        }
        v8 += v16;
        v15 += 8LL;
      }
      while ( (v15 & 0xFFF) != 0 && v8 <= v9 );
      v12 = a5;
      if ( (a5 & 4) == 0 )
      {
        sub_14020D8D0(v36 + 1664, v37);
        v12 = a5;
      }
      a4 = v41;
    }
    while ( v8 <= v9 );
  }
  return v39;
}
