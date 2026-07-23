/*
 * XREFs of sub_14036B408 @ 0x14036B408
 * Callers:
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14028F080 @ 0x14028F080 (sub_14028F080.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_14036B408(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // r12d
  void *result; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r13
  char v11; // di
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rbx
  char i; // [rsp+30h] [rbp-D0h]
  unsigned int v31; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v36; // [rsp+50h] [rbp-B0h]
  _QWORD v37[24]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = 0;
  v31 = 0;
  result = memset(v37, 0, 0xB8uLL);
  if ( !byte_140C5072C )
  {
    LODWORD(v37[0]) = 1;
    WORD2(v37[0]) = 0;
    v37[2] = 0LL;
    LODWORD(v37[1]) = 20;
    v37[3] = 0LL;
    v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v35 = *(_QWORD *)(a3 + 184) + 1664LL;
    v10 = v35;
    v11 = sub_1402CF4F0(v35);
    for ( i = v11; v8 <= v9; v11 = i )
    {
      v15 = sub_14028F080(v8, v9, (__int64)v37, v11, 0, &v31);
      v8 = v15;
      if ( !v15 )
        break;
      v14 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v36 = v14;
      if ( v31 )
      {
        v20 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v21 = v31;
        do
        {
          v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v21;
        }
        while ( v21 );
        v22 = 0x200000LL;
        if ( v31 > 1 )
        {
          v23 = v31 - 1;
          do
          {
            v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v22 <<= 9;
            --v23;
          }
          while ( v23 );
        }
        v24 = sub_140317A10(v20);
        v32 = v24;
        if ( (v24 & 1) != 0 && (v24 & 0x42) != 0 )
        {
          v26 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFFLL) + 24;
          if ( v22 )
          {
            v29 = v26 - 0x220000000000LL;
            do
            {
              v33 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0x3FuLL) )
              {
                do
                  sub_1402F32E0(&v33, v25, v27, v28);
                while ( *(__int64 *)v29 < 0 );
              }
              *(_BYTE *)(v29 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v29, 0x7FFFFFFFFFFFFFFFuLL);
              v6 += 4096;
              v29 += 48LL;
            }
            while ( v6 < v22 );
            v10 = v35;
          }
          v6 = 0;
        }
        v8 = ((sub_1402CFEB0(v20 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v13 = (__int64)(v15 << 25) >> 16;
        do
        {
          v12 = sub_140317A10(v8);
          v32 = v12;
          if ( (v12 & 1) != 0 && (v12 & 0x42) != 0 )
          {
            v19 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFFLL)
                - 0x220000000000LL;
            v34 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v34, v16, v17, v18);
              while ( *(__int64 *)(v19 + 24) < 0 );
            }
            *(_BYTE *)(v19 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            sub_14033DBC0(v8, v32 & 0xFFFFFFFFFFFFFFBDuLL);
            sub_1402CF280((__int64)v37, v13, 1LL, 0);
          }
          v13 += 4096LL;
          v8 += 8LL;
        }
        while ( (v13 & 0x1FFFFF) != 0 && v8 <= v9 );
        sub_14032F1B0((__int64)v37);
        v14 = v36;
        v10 = v35;
      }
      sub_14020D8D0(v10, v14);
    }
    return (void *)sub_1402B0CE0(v10, v11);
  }
  return result;
}
