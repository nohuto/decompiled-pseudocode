/*
 * XREFs of sub_140352EB0 @ 0x140352EB0
 * Callers:
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140352A00 @ 0x140352A00 (sub_140352A00.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022BAE0 @ 0x14022BAE0 (sub_14022BAE0.c)
 *     sub_140233738 @ 0x140233738 (sub_140233738.c)
 *     sub_140238E78 @ 0x140238E78 (sub_140238E78.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140352EB0(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, int a4)
{
  int v6; // edi
  int v7; // r13d
  int v8; // r12d
  unsigned __int64 v9; // r14
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v11; // rbx
  int v12; // edx
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 *v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rdx
  __int64 v25; // rax
  bool v26; // zf
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v29; // [rsp+44h] [rbp-BCh]
  __int16 v30; // [rsp+46h] [rbp-BAh]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  _QWORD Base[21]; // [rsp+58h] [rbp-A8h] BYREF

  v30 = 0;
  v6 = a4;
  v31 = 20LL;
  v28 = a3;
  v7 = 0;
  v29 = 0;
  v8 = 0;
  v32 = 0LL;
  v9 = 0LL;
  memset(Base, 0, 160);
  if ( a2 )
  {
    do
    {
      BugCheckParameter4 = *(_QWORD *)BugCheckParameter2;
      if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
        && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (BugCheckParameter4 & 1) != 0
        && ((BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0) )
      {
        v21 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
          v23 = BugCheckParameter4 | 0x20;
          if ( (v22 & 0x20) == 0 )
            v23 = *(_QWORD *)BugCheckParameter2;
          BugCheckParameter4 = v23;
          if ( (v22 & 0x42) != 0 )
            BugCheckParameter4 = v23 | 0x42;
        }
      }
      if ( (BugCheckParameter4 & 0xC01) == 0 && (BugCheckParameter4 & 0x3E0) == 0 )
      {
        if ( qword_140C50780 && (BugCheckParameter4 & 0x10) == 0 )
          BugCheckParameter4 &= ~qword_140C50780;
        v11 = HIDWORD(BugCheckParameter4);
        if ( sub_140317A80(BugCheckParameter2) && (unsigned int)sub_140229550() )
        {
          *(_QWORD *)BugCheckParameter2 = 0LL;
          sub_1402294F0(BugCheckParameter2, 0LL);
        }
        else
        {
          *(_QWORD *)BugCheckParameter2 = 0LL;
        }
        if ( (_DWORD)v11 )
        {
          if ( (_DWORD)v11 == v7 )
          {
            if ( v8 )
            {
              v13 = 1LL;
              v14 = (__int64)(BugCheckParameter2 << 25) >> 16;
              if ( v28 != 1 && (v29 & 8) == 0 && v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
                LOBYTE(v29) = v29 | 8;
              if ( !HIDWORD(v31)
                || (v29 & 4) != 0
                || (v15 = &Base[HIDWORD(v31) - 1], v16 = *v15, (*v15 & 0xC00) != 0)
                || (v17 = *v15 & 0x3FF, (v16 & 0xFFFFFFFFFFFFF000uLL) + ((v17 + 1) << 12) != v14)
                || v17 + 1 < v17
                || v17 + 1 > 0x3FF )
              {
                if ( sub_140233738((__int64)&v28, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0) )
                {
                  v24 = &Base[HIDWORD(v31) - 1];
                  v25 = *v24;
                  ++v32;
                  *v24 = (v25 - 4096) ^ ((unsigned __int16)(v25 - 4096) ^ (unsigned __int16)(v25 - 4096 + 1)) & 0x3FF;
                }
                else
                {
                  if ( HIDWORD(v31) < (unsigned int)v31 )
                  {
                    while ( 1 )
                    {
                      v18 = (unsigned __int64)(v13 - 1) > 0x3FF ? 1024LL : v13;
                      v19 = v14 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v18 - 1) & 0x3FF;
                      v13 -= v18;
                      v14 += v18 << 12;
                      Base[HIDWORD(v31)] = v19;
                      v32 += v18;
                      v20 = HIDWORD(v31) + 1;
                      HIDWORD(v31) = v20;
                      if ( v20 == (_DWORD)v31 && (v29 & 4) == 0 )
                      {
                        qsort(Base, v20, 8uLL, (int (__cdecl *)(const void *, const void *))sub_14022E340);
                        sub_14022BAE0((__int64)&v28);
                        if ( HIDWORD(v31) == (_DWORD)v31 )
                          break;
                      }
                      if ( !v13 )
                        goto LABEL_14;
                    }
                    v26 = v13 == 0;
                    v6 = a4;
                    if ( !v26 )
                    {
                      v32 = HIDWORD(v31);
                      HIBYTE(v29) = 1;
                    }
                    goto LABEL_15;
                  }
                  HIBYTE(v29) = 1;
                }
              }
              else
              {
                ++v32;
                *v15 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(v16 + 1)) & 0x3FF;
              }
            }
          }
          else
          {
            if ( sub_140238E78(v11, v12) )
            {
              sub_1402CF280((__int64)&v28, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0);
              v8 = 1;
            }
            else
            {
              v8 = 0;
            }
            v7 = v11;
          }
        }
        else
        {
          v8 = 0;
          v7 = 0;
        }
LABEL_14:
        v6 = a4;
      }
      else if ( !v6 )
      {
        KeBugCheckEx(0x1Au, 0x5100uLL, BugCheckParameter2, a2 - v9, BugCheckParameter4);
      }
LABEL_15:
      ++v9;
      BugCheckParameter2 += 8LL;
    }
    while ( v9 < a2 );
  }
  sub_14032F1B0((__int64)&v28);
}
