/*
 * XREFs of sub_140A6BF28 @ 0x140A6BF28
 * Callers:
 *     sub_140971708 @ 0x140971708 (sub_140971708.c)
 *     sub_140971B68 @ 0x140971B68 (sub_140971B68.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_140A6A480 @ 0x140A6A480 (sub_140A6A480.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405EF8CC @ 0x1405EF8CC (sub_1405EF8CC.c)
 *     sub_1405EF8E4 @ 0x1405EF8E4 (sub_1405EF8E4.c)
 *     sub_1405EFA7C @ 0x1405EFA7C (sub_1405EFA7C.c)
 *     sub_1405EFA90 @ 0x1405EFA90 (sub_1405EFA90.c)
 *     sub_1405EFAB0 @ 0x1405EFAB0 (sub_1405EFAB0.c)
 *     sub_1405EFB34 @ 0x1405EFB34 (sub_1405EFB34.c)
 *     sub_140A6C408 @ 0x140A6C408 (sub_140A6C408.c)
 */

__int64 __fastcall sub_140A6BF28(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        unsigned int *a13,
        unsigned int a14,
        _DWORD *a15,
        unsigned int *a16,
        char a17,
        unsigned __int16 a18,
        PRTL_BITMAP BitMapHeader,
        __int64 a20,
        __int128 *a21,
        int a22,
        __int64 a23,
        __int64 a24,
        int a25)
{
  unsigned int *v25; // r13
  __int128 *v26; // rdx
  unsigned int v27; // r14d
  unsigned int *v28; // rbx
  PRTL_BITMAP v29; // r15
  __int64 v30; // rsi
  __int128 *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r10
  int v35; // r11d
  int v36; // edi
  __int64 v37; // r12
  unsigned int v38; // r14d
  int v39; // edi
  __int64 result; // rax
  __int64 v41; // rax
  char *v42; // r10
  __int64 v43; // rsi
  _BYTE *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  _WORD *v49; // r10
  __int64 v50; // r11
  __int64 v51; // rcx
  __int64 v52; // rdx
  unsigned int v53; // r11d
  ULONG ClearBitsAndSet; // r8d
  __int64 v55; // rbx
  unsigned int *v56; // rdx
  __int64 v57; // rax
  int v58; // [rsp+38h] [rbp-61h]
  __int64 v59; // [rsp+58h] [rbp-41h]
  __int64 v60; // [rsp+60h] [rbp-39h]
  __int64 v61; // [rsp+68h] [rbp-31h]
  __int128 *v62; // [rsp+70h] [rbp-29h]
  __int128 v63; // [rsp+78h] [rbp-21h] BYREF
  __int64 v64; // [rsp+88h] [rbp-11h]

  a22 = 0;
  a8 = 0;
  v60 = 0LL;
  v25 = 0LL;
  a14 = 0;
  a24 = 0LL;
  v26 = &v63;
  v61 = 0LL;
  v27 = a4;
  v28 = a16;
  v29 = BitMapHeader;
  v64 = 0LL;
  v30 = a1;
  v63 = 0LL;
  if ( a21 )
    v26 = a21;
  a23 = 0LL;
  v62 = v26;
  v59 = 0LL;
  if ( a16 )
  {
    v35 = sub_1405EF8CC(a15);
    LODWORD(a21) = v35;
    while ( 1 )
    {
      v36 = *v28;
      if ( !*v28 )
        break;
      v37 = 0LL;
      LOBYTE(a25) = 0;
      if ( v36 < 0 )
      {
        if ( (a17 & 2) != 0 )
        {
          v33 = v30;
          v32 = a11;
          v25 = a13;
          v37 = a9;
          v60 = *((_QWORD *)v31 + 2);
          a14 = a12;
          a24 = a10;
          a23 = a11;
          v59 = v30;
          v61 = v34;
        }
      }
      else
      {
        a25 = a17 & 1;
        if ( (a17 & 1) != 0 )
        {
          v32 = a3;
          v33 = a9;
          v25 = a5;
          v60 = *((_QWORD *)v31 + 1);
          v61 = a10;
          a23 = a3;
          a14 = v27;
          a24 = v34;
          v59 = a9;
        }
        v37 = v30 & -(__int64)((a17 & 1) != 0);
      }
      ++v28;
      v38 = v36 & 0xFC000;
      v39 = v36 & 0xFFF;
      if ( v37 )
      {
        if ( v39 )
        {
          while ( 1 )
          {
            if ( *(_QWORD *)v31 )
            {
              sub_140A6C408(v38, a18, &a8, &a22);
              result = sub_14042A5E0(v60, *v28 + a8);
              if ( (int)result < 0 )
                return result;
              --v39;
              if ( v38 == 114688 && v25 )
                ++*v25;
            }
            else
            {
              v41 = v28[1];
              v42 = (char *)(v37 + *v28);
              v43 = v41 + v61;
              switch ( v38 )
              {
                case 0x1C000u:
                  v44 = 0LL;
                  if ( v35 != 2 )
                    v44 = v28 + 2;
                  v45 = sub_1405EFAB0(v42, v44, v32, v33, v32);
                  if ( v45 == -1 )
                    return 3221225496LL;
                  if ( v45 == -2 )
                  {
                    if ( *v25 >= a14 )
                      return 3221226668LL;
                    v46 = sub_1405EF8E4(a23, *v25);
                    sub_1405EFB34(v46, (_QWORD *)(v46 + 4096), v43, v46 + a24 - v37, v37, 0, v58, a18, a17);
                    v51 = a20;
                    if ( a20 && (_BYTE)a25 )
                    {
                      v52 = 3 * v50;
                      *(_DWORD *)(a20 + 2 * v52) = *v28;
                      *(_WORD *)(v51 + 2 * v52 + 4) = *v49;
                    }
                    sub_1405EFA90(v49, a24 + *v28, v47, v48, v48);
                    ++*v25;
                  }
                  else
                  {
                    if ( v45 >= a14 )
                      return 3221225496LL;
                    *(_QWORD *)(sub_1405EF8E4(a23, v45) + 4096) = v43;
                  }
                  if ( v29 && (_BYTE)a25 )
                    _bittestandset((signed __int32 *)v29->Buffer, v53);
                  break;
                case 0x2C000u:
                  if ( a18 == 0x8664 || a18 == 0xAA64 )
                    *(_QWORD *)v42 = v43;
                  else
                    *(_DWORD *)v42 = v43;
                  break;
                case 0x5C000u:
                  if ( a18 == 0x8664 || a18 == 0xAA64 )
                    *(_QWORD *)v42 = *(_QWORD *)(v41 + v33);
                  else
                    *(_DWORD *)v42 = *(_DWORD *)(v41 + v33);
                  break;
                case 0x78000u:
                  if ( a7 == -1 )
                    return 3221225520LL;
                  if ( a7 && *(_BYTE *)(v41 + a7) == 0xFF )
                    *(_QWORD *)v42 += *(_QWORD *)(8 * v41);
                  break;
              }
              --v39;
            }
            v35 = (int)a21;
            v31 = v62;
            v32 = a23;
            v33 = v59;
            v28 += (unsigned int)a21;
            if ( !v39 )
            {
              v30 = a1;
              v34 = a2;
              break;
            }
          }
        }
      }
      else
      {
        v28 += (unsigned int)(v39 * v35);
      }
      if ( !v28 )
        break;
      v27 = a4;
    }
  }
  if ( v29 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(v29, 1u, 0);
    if ( ClearBitsAndSet != -1 )
    {
      v55 = a20;
      do
      {
        v56 = (unsigned int *)(v55 + 6LL * ClearBitsAndSet);
        v57 = *v56;
        if ( (_DWORD)v57 )
          sub_1405EFA7C((_WORD *)(v30 + v57), (__int64)v56);
        ClearBitsAndSet = RtlFindClearBitsAndSet(v29, 1u, ClearBitsAndSet);
      }
      while ( ClearBitsAndSet != -1 );
    }
  }
  return 0LL;
}
