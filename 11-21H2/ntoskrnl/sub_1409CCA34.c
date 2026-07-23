/*
 * XREFs of sub_1409CCA34 @ 0x1409CCA34
 * Callers:
 *     sub_1409CCE04 @ 0x1409CCE04 (sub_1409CCE04.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409CCA34(
        _QWORD *a1,
        unsigned __int8 **a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  _QWORD *v9; // rsi
  unsigned int v11; // r14d
  int v12; // edx
  unsigned int v13; // r15d
  char *Pool2; // rax
  char *v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned __int8 *v18; // r15
  unsigned __int8 *v19; // r8
  __int64 v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-38h]

  v9 = a1;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  v11 = a3;
  v12 = a5;
  if ( a6 < a3 )
  {
    _mm_lfence();
    v11 = a3 - 1;
    v12 = a5 - 4 * *(unsigned __int8 *)(*(_QWORD *)(a4 + 16LL * a6) + 1LL) - 8;
  }
  v13 = (((4 * (*a2)[1] + 11) & 0xFFFFFFFC) + 27 + ((v12 + 7) & 0xFFFFFFF8)) & 0xFFFFFFFC;
  Pool2 = (char *)ExAllocatePool2(256LL, v13, 1985176915LL);
  v15 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, v13);
  v16 = a3 + 1;
  *(_DWORD *)v15 = v13;
  v17 = 0;
  *((_QWORD *)v15 + 1) = 1LL;
  v21 = v16;
  v18 = (unsigned __int8 *)(v15 + 24);
  if ( !v16 )
    goto LABEL_15;
  do
  {
    if ( v17 )
    {
      v20 = v17 - 1;
      if ( (_DWORD)v20 == a6 )
        goto LABEL_13;
      v19 = *(unsigned __int8 **)(a4 + 16 * v20);
    }
    else
    {
      v19 = *a2;
    }
    RtlCopySid(4 * v19[1] + 8, v18, v19);
    v18 += (4LL * v18[1] + 11) & 0xFFFFFFFCLL;
LABEL_13:
    ++v17;
  }
  while ( v17 < v21 );
  v9 = a1;
LABEL_15:
  *v9 = v15;
  *((_DWORD *)v15 + 4) = v11 + 1;
  return 0LL;
}
