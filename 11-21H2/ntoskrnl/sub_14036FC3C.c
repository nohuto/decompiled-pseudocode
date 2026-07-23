/*
 * XREFs of sub_14036FC3C @ 0x14036FC3C
 * Callers:
 *     sub_14036F620 @ 0x14036F620 (sub_14036F620.c)
 * Callees:
 *     sub_1403631E0 @ 0x1403631E0 (sub_1403631E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14036FC3C(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7)
{
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 i; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int8 v16; // cl
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int8 *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 result; // rax

  memset((void *)a1, 0, 0x4C0uLL);
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 57) = a4;
  v11 = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a5;
  v12 = *(_QWORD *)(a5 + 32);
  *(_WORD *)(a1 + 58) = a6 - a1;
  *(_OWORD *)(a1 + 24) = v11;
  *(_QWORD *)(a1 + 40) = v12;
  *(_DWORD *)(a1 + 60) = *a7;
  for ( i = 0LL; i < 4; ++i )
    *(_QWORD *)(a1 + 8 * i + 8) ^= a1 ^ qword_140C5A5C0;
  v14 = *(_QWORD *)(a1 + 40);
  if ( v14 )
    *(_QWORD *)(a1 + 40) = a1 ^ qword_140C5A5C0 ^ v14;
  v15 = 64LL;
  v16 = 64;
  if ( a3 <= 0x40 )
    v16 = a3;
  *(_BYTE *)(a1 + 56) = v16;
  if ( v16 > 1u )
  {
    v15 = 64 - (unsigned int)v16;
    *(_QWORD *)(a1 + 48) = (char *)qword_140011170 + ((unsigned __int64)(unsigned int)((62 - v15) * (v15 + 61)) >> 1);
  }
  v17 = 32LL;
  memset64((void *)(a1 + 128), 1uLL, 0x81uLL);
  v18 = 0LL;
  v19 = byte_140C1BAE0;
  do
  {
    v20 = sub_1403631E0(v18, v15);
    v18 = 0x7F7F7F7F7F7F7F7FLL;
    result = v20 & 0x7F7F7F7F7F7F7F7FLL;
    *(_QWORD *)v19 = result;
    v19 += 8;
    --v17;
  }
  while ( v17 );
  return result;
}
