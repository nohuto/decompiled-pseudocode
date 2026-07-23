/*
 * XREFs of sub_1402697F0 @ 0x1402697F0
 * Callers:
 *     sub_140269570 @ 0x140269570 (sub_140269570.c)
 *     sub_1402BBAD0 @ 0x1402BBAD0 (sub_1402BBAD0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140269FA8 @ 0x140269FA8 (sub_140269FA8.c)
 *     sub_14026CCC0 @ 0x14026CCC0 (sub_14026CCC0.c)
 *     sub_14026CE64 @ 0x14026CE64 (sub_14026CE64.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402697F0(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v5; // r13
  unsigned int v6; // edi
  int v7; // ebx
  unsigned __int64 v8; // r10
  ULONG_PTR v9; // r15
  __int64 v10; // r9
  unsigned __int64 v11; // r12
  ULONG_PTR v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  ULONG_PTR v22; // r12
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rax
  __int16 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r9
  _QWORD *v36; // r8
  _QWORD *v37; // rdx
  bool v38; // zf
  _QWORD *v39; // r8
  ULONG_PTR v40; // rbx
  __int64 v41; // rdx
  ULONG_PTR v42; // r10
  unsigned __int64 v43; // r9
  volatile signed __int32 *v44; // r8
  unsigned int v45; // eax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // rbp
  ULONG_PTR v50; // r14
  ULONG_PTR v51; // rsi
  ULONG_PTR v52; // rbp
  ULONG_PTR v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // r9
  _QWORD *v56; // rax
  _QWORD *v57; // r8
  bool v58; // zf
  _QWORD *v59; // rax
  signed __int32 v61[8]; // [rsp+0h] [rbp-168h] BYREF
  int v62; // [rsp+30h] [rbp-138h]
  int v63; // [rsp+34h] [rbp-134h]
  __int64 v64; // [rsp+38h] [rbp-130h]
  __int64 v65; // [rsp+40h] [rbp-128h]
  ULONG_PTR v66; // [rsp+48h] [rbp-120h]
  ULONG_PTR v67; // [rsp+50h] [rbp-118h]
  _QWORD v68[24]; // [rsp+60h] [rbp-108h] BYREF

  v67 = a2;
  BugCheckParameter4 = a2;
  v65 = a1;
  v5 = a1;
  memset(v68, 0, 0xB8uLL);
  v64 = 0LL;
  v6 = 0;
  v62 = 0;
  if ( a3 )
  {
    LODWORD(v68[1]) = 20;
    v68[3] = 0LL;
    _InterlockedOr(v61, 0);
    v7 = dword_140D31080;
  }
  else
  {
    v6 = 1;
    v7 = 0;
    v62 = 1;
  }
  v63 = v7;
  v8 = 0xFFFFF6FB7DBED7F8uLL;
  do
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(v5 + 16);
      v11 = *(_QWORD *)(v10 + 8 * BugCheckParameter4);
      v12 = v10 + 8 * BugCheckParameter4;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= v8
        && (unsigned int)sub_140229550()
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v13 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8 * ((v12 >> 3) & 0x1FF));
          v15 = v11 | 0x20;
          if ( (v14 & 0x20) == 0 )
            v15 = v11;
          v11 = v15;
          if ( (v14 & 0x42) != 0 )
            v11 = v15 | 0x42;
        }
      }
      if ( (v11 & 0xF000) == 0x1000 )
      {
        v16 = 1LL;
      }
      else
      {
        v17 = *(_QWORD *)(v12 + 8);
        if ( v12 + 8 >= 0xFFFFF6FB7DBED000uLL
          && v12 + 8 <= v8
          && (unsigned int)sub_140229550()
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v19 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 8 * ((v18 >> 3) & 0x1FF));
            v21 = v17 | 0x20;
            if ( (v20 & 0x20) == 0 )
              v21 = v17;
            v17 = v21;
            if ( (v20 & 0x42) != 0 )
              v17 = v21 | 0x42;
          }
        }
        if ( qword_140C50780 && (v17 & 0x10) == 0 )
          v17 &= ~qword_140C50780;
        v16 = HIDWORD(v17);
      }
      v9 += v16;
      v66 = v9;
      if ( qword_140C50780 && (v11 & 0x10) == 0 )
        v11 &= ~qword_140C50780;
      v22 = HIDWORD(v11);
      if ( !v22 )
        goto LABEL_67;
      v23 = *(_QWORD *)(v10 + 8 * v22);
      v24 = v10 + 8 * v22;
      if ( v24 >= 0xFFFFF6FB7DBED000uLL
        && v24 <= v8
        && (unsigned int)sub_140229550()
        && (v23 & 1) != 0
        && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
      {
        v25 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 8 * ((v24 >> 3) & 0x1FF));
          v27 = v23 | 0x20;
          if ( (v26 & 0x20) == 0 )
            v27 = v23;
          LOWORD(v23) = v27;
          if ( (v26 & 0x42) != 0 )
            LOWORD(v23) = v27 | 0x42;
        }
      }
      if ( (v23 & 0xF000) == 0x1000 )
      {
        v28 = 1LL;
      }
      else
      {
        v29 = *(_QWORD *)(v24 + 8);
        if ( v24 + 8 >= 0xFFFFF6FB7DBED000uLL
          && v24 + 8 <= v8
          && (unsigned int)sub_140229550()
          && (v29 & 1) != 0
          && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
        {
          v31 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 8 * ((v30 >> 3) & 0x1FF));
            v33 = v29 | 0x20;
            if ( (v32 & 0x20) == 0 )
              v33 = v29;
            v29 = v33;
            if ( (v32 & 0x42) != 0 )
              v29 = v33 | 0x42;
          }
        }
        if ( qword_140C50780 && (v29 & 0x10) == 0 )
          v29 &= ~qword_140C50780;
        v28 = HIDWORD(v29);
      }
      if ( v22 + v28 != BugCheckParameter4 )
      {
LABEL_67:
        if ( BugCheckParameter4 >= *(_QWORD *)v5 )
          goto LABEL_139;
        if ( v9 > 1 )
        {
          if ( *(_QWORD *)v5 - BugCheckParameter4 < v9 )
            goto LABEL_139;
          v34 = *(_QWORD *)(v5 + 8);
          v35 = *(_QWORD *)(v34 + 8 * (BugCheckParameter4 >> 6));
          v36 = (_QWORD *)(v34 + 8 * (BugCheckParameter4 >> 6));
          v37 = (_QWORD *)(v34 + 8 * ((BugCheckParameter4 + v9 - 1) >> 6));
          if ( v36 == v37 )
          {
            v38 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << BugCheckParameter4) & v35) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << BugCheckParameter4;
          }
          else
          {
            if ( ((-1LL << BugCheckParameter4) & v35) != -1LL << BugCheckParameter4 )
              goto LABEL_139;
            v39 = v36 + 1;
            if ( v39 != v37 )
            {
              while ( *v39 == -1LL )
              {
                if ( ++v39 == v37 )
                  goto LABEL_79;
              }
LABEL_139:
              KeBugCheckEx(0xDAu, 0x504uLL, v12, v9, BugCheckParameter4);
            }
LABEL_79:
            v38 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v9 - 1)) & *v39) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v9 - 1);
          }
          if ( !v38 )
            goto LABEL_139;
        }
        else if ( v9 != 1 || !_bittest64(*(const signed __int64 **)(v5 + 8), BugCheckParameter4) )
        {
          goto LABEL_139;
        }
        if ( !v6 )
        {
          sub_1402CF280(v68, (__int64)(v12 << 25) >> 16, v9, 0LL);
          if ( (unsigned int)sub_140269FA8(v68, 1LL) )
          {
            _InterlockedOr(v61, 0);
            if ( (unsigned int)(dword_140D31080 - v7) > 2 || (v7 & 1) == 0 && (unsigned int)(dword_140D31080 - v7) >= 2 )
              goto LABEL_135;
          }
          goto LABEL_132;
        }
        v40 = v9;
        while ( 1 )
        {
          v41 = 0LL;
          if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)sub_140229550() )
            {
              if ( !HIBYTE(word_140C51864) && (v41 & 1) != 0 )
                v41 |= 0x8000000000000000uLL;
              *(_QWORD *)v12 = v41;
              sub_1402294F0(v12, v41);
              goto LABEL_99;
            }
            if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v41 & 1) != 0 )
              v41 |= 0x8000000000000000uLL;
          }
          *(_QWORD *)v12 = v41;
LABEL_99:
          v12 += 8LL;
          if ( !--v40 )
          {
            v5 = v65;
            v6 = v62;
            v42 = BugCheckParameter4 & 0x1F;
            v43 = v9;
            v44 = (volatile signed __int32 *)(*(_QWORD *)(v65 + 8) + 4 * (BugCheckParameter4 >> 5));
            if ( v42 + v9 > 0x20 )
            {
              if ( (BugCheckParameter4 & 0x1F) != 0 )
              {
                _InterlockedAnd(v44, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v42));
                v43 = v9 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
                ++v44;
              }
              if ( v43 >= 0x20 )
              {
                v46 = v43 >> 5;
                v43 += -32LL * (v43 >> 5);
                do
                {
                  *v44++ = 0;
                  --v46;
                }
                while ( v46 );
              }
              if ( v43 )
              {
                v45 = -1 << v43;
                goto LABEL_111;
              }
            }
            else
            {
              if ( v9 == 32 )
              {
                *v44 = 0;
                goto LABEL_112;
              }
              v45 = ~(((1 << v9) - 1) << v42);
LABEL_111:
              _InterlockedAnd(v44, v45);
            }
LABEL_112:
            if ( *(_QWORD *)(v5 + 80) > 0x40000uLL )
            {
              v47 = 32LL;
              if ( (*(_DWORD *)(v5 + 24) & 2) == 0 )
                v47 = 512LL;
              v48 = ~(v47 - 1);
              v49 = v48 & (v47 + BugCheckParameter4 + v9 - 1);
              v50 = BugCheckParameter4 & v48;
              v51 = 0LL;
              v52 = v49 - v50;
              if ( v52 )
              {
                while ( 1 )
                {
                  v53 = v50 + v51;
                  if ( v50 + v51 < *(_QWORD *)v5 && *(_QWORD *)v5 - v53 >= v47 )
                  {
                    v54 = *(_QWORD *)(v5 + 8);
                    v55 = *(_QWORD *)(v54 + 8 * (v53 >> 6));
                    v56 = (_QWORD *)(v54 + 8 * (v53 >> 6));
                    v57 = (_QWORD *)(v54 + 8 * ((v47 + v53 - 1) >> 6));
                    if ( v56 == v57 )
                    {
                      v58 = (v55 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v47) << v53)) == 0;
LABEL_125:
                      if ( v58 && (unsigned int)sub_14026CCC0(v5, v50 + v51, v47) )
                        sub_14026CE64(v5, v50 + v51, v47, 0LL);
                      goto LABEL_128;
                    }
                    if ( (v55 & (-1LL << v53)) == 0 )
                    {
                      v59 = v56 + 1;
                      if ( v59 != v57 )
                      {
                        while ( !*v59 )
                        {
                          if ( ++v59 == v57 )
                            goto LABEL_124;
                        }
                        goto LABEL_128;
                      }
LABEL_124:
                      v58 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v47 + (unsigned __int8)v53 - 1)) & *v59) == 0;
                      goto LABEL_125;
                    }
                  }
LABEL_128:
                  v51 += v47;
                  if ( v51 >= v52 )
                  {
                    v9 = v66;
                    break;
                  }
                }
              }
              v6 = v62;
            }
            v64 += v9;
LABEL_132:
            v9 = 0LL;
            v8 = 0xFFFFF6FB7DBED7F8uLL;
            break;
          }
        }
      }
      v7 = v63;
      BugCheckParameter4 = v22;
    }
    while ( v22 );
    if ( !v6 )
    {
LABEL_135:
      if ( HIDWORD(v68[1]) )
        sub_14032F1B0(v68);
    }
    v7 = v63;
    ++v6;
    BugCheckParameter4 = v67;
    v62 = v6;
    v8 = 0xFFFFF6FB7DBED7F8uLL;
  }
  while ( v6 < 2 );
  return v64;
}
