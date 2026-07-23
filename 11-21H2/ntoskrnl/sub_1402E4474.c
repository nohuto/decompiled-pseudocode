/*
 * XREFs of sub_1402E4474 @ 0x1402E4474
 * Callers:
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 * Callees:
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402E4724 @ 0x1402E4724 (sub_1402E4724.c)
 *     sub_1402E57FC @ 0x1402E57FC (sub_1402E57FC.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_14033E0D4 @ 0x14033E0D4 (sub_14033E0D4.c)
 *     sub_14033E11C @ 0x14033E11C (sub_14033E11C.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall sub_1402E4474(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r9
  char v4; // si
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  char v7; // r14
  __int64 v8; // r12
  ULONG_PTR v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r12
  char *v13; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  unsigned __int64 v16; // [rsp+30h] [rbp-78h]
  __int64 v17; // [rsp+38h] [rbp-70h]
  unsigned __int64 v18; // [rsp+40h] [rbp-68h]
  ULONG_PTR v19; // [rsp+48h] [rbp-60h]
  __int64 v20; // [rsp+50h] [rbp-58h]
  char v23; // [rsp+C0h] [rbp+18h] BYREF
  int v24; // [rsp+C8h] [rbp+20h] BYREF

  v17 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v16 = *(unsigned int *)(a2 + 40);
  result = sub_1402E670C(KeGetCurrentThread());
  v4 = result;
  if ( (unsigned int)result > 5 )
  {
    v4 = 5;
  }
  else if ( (_DWORD)result )
  {
    v4 = result - 1;
  }
  v5 = v3 + 128;
  v6 = 0LL;
  v7 = 17;
  v23 = 17;
  if ( v3 != -128 )
  {
    do
    {
      v8 = *(_QWORD *)(v5 + 16);
      v9 = *(_QWORD *)(v5 + 8);
      v20 = v8;
      if ( (*(_BYTE *)(v5 + 34) & 2) == 0 )
      {
        v10 = sub_1403342D0(v5, v9, 0xFFFFFFFFLL);
        v18 = sub_14033E0D4(v5);
        result = v9 + 8LL * *(unsigned int *)(v5 + 44);
        v19 = result;
        if ( v9 < result )
        {
          while ( 1 )
          {
            if ( (v9 & 0xFFF) == 0 || !v6 )
            {
              if ( v6 )
              {
                LOBYTE(v11) = v7;
                sub_140334790(v6, v11);
              }
              result = sub_140273AAC(v9, (__int64)&v23);
              v7 = v23;
              v6 = result;
            }
            if ( v10 + 4096 > v16 )
              break;
            result = sub_140317A10(v9);
            if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
            {
              result = sub_1402E57FC(v17, (*(_DWORD *)(a1 + 56) >> 20) & 0x7F);
              v12 = result;
              if ( result != -1LL )
              {
                if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                  v13 = *(char **)(a2 + 24);
                else
                  v13 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
                v14 = sub_1402CC7C0(v12, 0LL, 0x80000000);
                sub_140424FF0(v14, &v13[v10]);
                if ( v10 + 4096 > v18 )
                  memset((void *)(v14 - (unsigned int)(v10 - v18 + 4096) + 4096), 0, (unsigned int)(v10 - v18 + 4096));
                sub_1402BEDD0(v14, 0x11u);
                v15 = 48 * v12 - 0x220000000000LL;
                sub_14033E11C(a1, 0LL, 1LL);
                v24 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
                {
                  do
                    sub_1402F32E0(&v24);
                  while ( *(__int64 *)(v15 + 24) < 0 );
                }
                sub_1402E4724(v12, v9, -1LL);
                *(_BYTE *)(v15 + 35) ^= (*(_BYTE *)(v15 + 35) ^ v4) & 7;
                sub_140336AD8(48 * v12 - 0x220000000000LL);
                result = 0x7FFFFFFFFFFFFFFFLL;
                _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v7 = v23;
              }
            }
            v9 += 8LL;
            v10 += 4096LL;
            if ( v9 >= v19 )
            {
              v8 = v20;
              goto LABEL_14;
            }
          }
          v8 = 0LL;
        }
LABEL_14:
        if ( v6 )
        {
          LOBYTE(v11) = v7;
          result = sub_140334790(v6, v11);
          v6 = 0LL;
        }
      }
      v5 = v8;
    }
    while ( v8 );
  }
  return result;
}
