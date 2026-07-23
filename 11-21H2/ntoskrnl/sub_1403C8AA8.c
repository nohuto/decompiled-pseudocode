/*
 * XREFs of sub_1403C8AA8 @ 0x1403C8AA8
 * Callers:
 *     sub_1403C89A0 @ 0x1403C89A0 (sub_1403C89A0.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_1403C8D10 @ 0x1403C8D10 (sub_1403C8D10.c)
 *     sub_1403C8EF8 @ 0x1403C8EF8 (sub_1403C8EF8.c)
 *     RtlCompareMemoryUlong @ 0x14042A260 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall sub_1403C8AA8(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r12
  _QWORD *v9; // rdi
  SIZE_T v10; // rsi
  SIZE_T v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r14
  char *v15; // r14
  char *v16; // r15
  unsigned __int64 *v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp+18h]
  __int64 v22; // [rsp+78h] [rbp+20h]

  if ( !*a1 )
    byte_140C5504C = 1;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = qword_140C50840;
    result = qword_140C50840 + 1;
    if ( v3 == qword_140C50840 + 1 )
      return result;
    if ( qword_140D06950 )
    {
      v17 = (unsigned __int64 *)((char *)qword_140D06950 + 16);
      a3 = (unsigned __int64 *)((char *)qword_140D06950 + 16 * *(unsigned int *)qword_140D06950 + 16);
      while ( 1 )
      {
        if ( v17 >= a3 )
        {
          v4 = qword_140C50840;
          break;
        }
        v18 = *v17;
        if ( v3 >= *v17 )
        {
          if ( v3 < v18 + v17[1] )
            v3 = v18 + v17[1];
        }
        else
        {
          v6 = v18 - v3;
          if ( v18 - v3 >= 0x55 )
          {
            result = v3;
            goto LABEL_7;
          }
          v3 = v18 + v17[1];
        }
        v17 += 2;
      }
    }
    result = v3;
    v6 = v4 - v3 + 1;
    if ( !v6 )
      return result;
LABEL_7:
    v3 = v6 + result;
    v22 = v6 + result;
    v7 = (((unsigned __int64)(48 * result - 0x21FFFFFFF001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = v7;
    v8 = (((unsigned __int64)(48 * (v6 + result) - 0x220000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = v8;
    if ( v7 < v8 )
    {
      do
      {
        LOBYTE(a3) = 2;
        v19 = (__int64)(v8 - v7) >> 3 << 12;
        v9 = (_QWORD *)sub_1403C8D10(&v20, &v19, a3, 1LL);
        if ( !v9 )
          break;
        v10 = v19 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v19 & 0xFFFFFFFFFFFFF000uLL) == 0 )
          break;
        do
        {
          if ( *v9 || (v11 = RtlCompareMemoryUlong(v9, v10, 0), v11 < 0x1000) )
          {
            v11 = 4096LL;
          }
          else
          {
            v19 = (__int64)v9;
            v13 = (unsigned __int64)(v9 + 0x44000000000LL) / 0x30;
            v14 = (_QWORD *)(48 * v13 - 0x220000000000LL);
            if ( v14 != v9 && sub_14028FBF0(48 * v13 - 0x220000000000LL) && RtlCompareMemoryUlong(v14, 0x30uLL, 0) != 48 )
              v19 = (__int64)(v9 + 512);
            v15 = (char *)v9 + (v11 & 0xFFFFFFFFFFFFF000uLL);
            v16 = (char *)(48 * ((unsigned __int64)(v15 + 0x220000000000LL) / 0x30) - 0x220000000000LL);
            if ( v16 != v15 && sub_14028FBF0((__int64)(v16 + 48)) && RtlCompareMemoryUlong(v16, 0x30uLL, 0) != 48 )
              v15 -= 4096;
            sub_1403C8EF8(v19, v15);
          }
          v12 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v9 = (_QWORD *)((char *)v9 + v12);
          v10 -= v12;
        }
        while ( v10 >= 0x1000 );
        v7 = v20;
        v8 = v21;
        v3 = v22;
      }
      while ( v20 < v21 );
    }
  }
}
