/*
 * XREFs of sub_1407673E8 @ 0x1407673E8
 * Callers:
 *     sub_14076729C @ 0x14076729C (sub_14076729C.c)
 *     sub_1409404FC @ 0x1409404FC (sub_1409404FC.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_1407673E8(
        char *a1,
        size_t Size,
        PVOID Object,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        void *a11,
        __int64 a12,
        __int64 a13)
{
  size_t v13; // r15
  __int64 v17; // rbp
  unsigned int v18; // edi
  void *result; // rax
  __int128 v20; // xmm0

  v13 = (unsigned int)Size;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  if ( Object )
    v17 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v17 = 0LL;
  v18 = *(unsigned __int16 *)(v17 + 40) >> 1;
  memset(a1, 0, v13);
  *((_QWORD *)a1 + 3) = a10;
  *((_DWORD *)a1 + 4) = a8;
  *((_DWORD *)a1 + 5) = a9;
  *((_QWORD *)a1 + 6) = a12;
  *((_QWORD *)a1 + 7) = a13;
  *((_DWORD *)a1 + 37) = 2 * v18 + 82;
  result = a11;
  *((_QWORD *)a1 + 17) = a11;
  *((_DWORD *)a1 + 16) = 1;
  *((_QWORD *)a1 + 19) = Object;
  *((_DWORD *)a1 + 32) = 1;
  if ( a6 )
    v20 = xmmword_1400109C0;
  else
    v20 = xmmword_1400109A0;
  *((_OWORD *)a1 + 7) = v20;
  if ( a5 )
    *((_DWORD *)a1 + 36) |= 2u;
  if ( a4 )
    *((_DWORD *)a1 + 36) |= 4u;
  if ( a7 )
    *((_DWORD *)a1 + 36) |= 8u;
  if ( v18 )
    result = memmove(a1 + 160, *(const void **)(v17 + 48), 2LL * v18);
  *(_WORD *)&a1[2 * v18 + 160] = 0;
  return result;
}
