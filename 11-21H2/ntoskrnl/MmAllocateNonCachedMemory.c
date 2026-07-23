/*
 * XREFs of MmAllocateNonCachedMemory @ 0x14096A490
 * Callers:
 *     sub_1406168D0 @ 0x1406168D0 (sub_1406168D0.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14056D710 @ 0x14056D710 (sub_14056D710.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v1; // rbp
  unsigned __int16 v2; // ax
  unsigned __int64 v3; // r8
  struct _MDL *v4; // rbx
  ULONG_PTR v5; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  char *v9; // r12
  int v10; // r15d
  unsigned __int64 v11; // rbx
  bool v12; // zf

  if ( NumberOfBytes >= 0x100000000LL )
    return 0LL;
  v1 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  v2 = sub_14056D710((__int64)KeGetCurrentThread());
  v4 = (struct _MDL *)sub_140265428(
                        (__int64)&StartContext,
                        0LL,
                        0xFFFFFFFFFFFFFFFFuLL,
                        0LL,
                        v3,
                        0,
                        v2,
                        4,
                        *((_QWORD *)KeGetCurrentThread() + 23));
  if ( !v4 )
    return 0LL;
  v5 = sub_1403095B0((__int64)&qword_140C534C0, v1);
  if ( !v5 )
  {
    MmFreePagesFromMdl(v4);
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  *(_QWORD *)(48 * (__int64)v4[1].Next - 0x21FFFFFFFFF0LL) = v4;
  v7 = (__int64)(v5 << 25) >> 16;
  v8 = sub_1402CBD10(v5, 0LL, -1610612724);
  v9 = (char *)&v4[1] - v5;
  do
  {
    v10 = 0;
    v8 ^= (v8 ^ (*(_QWORD *)&v9[v5] << 12)) & 0xFFFFFFFFFF000LL;
    v11 = v8;
    if ( !sub_140317A80(v5) )
      goto LABEL_15;
    if ( (unsigned int)sub_140229550() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_15;
      v12 = (v8 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_15;
      v12 = (v8 & 1) == 0;
    }
    if ( !v12 )
      v11 = v8 | 0x8000000000000000uLL;
LABEL_15:
    *(_QWORD *)v5 = v11;
    if ( v10 )
      sub_1402294F0(v5, v11);
    v5 += 8LL;
    --v1;
  }
  while ( v1 );
  return (PVOID)v7;
}
