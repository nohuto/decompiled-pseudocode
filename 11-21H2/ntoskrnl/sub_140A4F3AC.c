/*
 * XREFs of sub_140A4F3AC @ 0x140A4F3AC
 * Callers:
 *     sub_140A4F19C @ 0x140A4F19C (sub_140A4F19C.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall sub_140A4F3AC(_QWORD *Address)
{
  __int64 v1; // rdi
  char *v2; // r12
  _QWORD **v3; // r14
  __int64 v4; // rbp
  _QWORD *i; // rbx
  void *v6; // r8
  __int64 v7; // rbp
  unsigned __int64 *v8; // r14
  unsigned __int64 j; // rbx
  unsigned __int64 *v10; // rcx
  unsigned int v11; // ecx
  void *v12; // r8
  void *v13; // r8
  _QWORD *v14; // rbp
  void *v15; // rdi
  ULONG_PTR v16; // rbx
  PVOID *k; // rbx
  unsigned int v18; // ebp
  __int64 v19; // r14
  __int64 v20; // r15
  void *v21; // r8

  v1 = Address[4];
  v2 = (char *)Address[1];
  if ( *(_DWORD *)(v1 + 36) )
  {
    PoSetHiberRange(
      0LL,
      0x10000u,
      Address,
      ((((_DWORD)dword_140D06884 << 6) + 56511) & 0xFFFFF000) + 28672,
      0x6370654Bu);
  }
  else
  {
    PoSetHiberRange(0LL, 0x10000u, Address, 0xC080uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, (PVOID)v1, 0xBF00uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, v2, 0x68uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, &dword_140C54EE4, 0LL, 0x6370654Bu);
    v18 = 1;
    v19 = 8LL;
    do
    {
      v20 = *(_QWORD *)&v2[v19 + 28];
      if ( v18 - 1 <= 3 )
      {
        if ( byte_140E01840 )
        {
          PoSetHiberRange(0LL, 0x10000u, (PVOID)(v20 - 464), 0x200uLL, 0x6370654Bu);
          v21 = (void *)(*(_QWORD *)(v20 + 8) - 24544LL);
        }
        else
        {
          v21 = (void *)(v20 - 24576);
        }
        PoSetHiberRange(0LL, 0x10000u, v21, 0x6000uLL, 0x6370654Bu);
        if ( (_BYTE)byte_140E01841 )
          PoSetHiberRange(
            0LL,
            0x10000u,
            (PVOID)(*(_QWORD *)(*(_QWORD *)(v1 + 38576) + v19) - 4088LL),
            0x1000uLL,
            0x7373654Bu);
      }
      ++v18;
      v19 += 8LL;
    }
    while ( v18 <= 4 );
  }
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 360), *(unsigned __int16 *)(v1 + 358), 0x7370654Bu);
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 344), *(unsigned __int16 *)(v1 + 342), 0x7370654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 13216) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (unsigned int)dword_140D05050),
    (unsigned int)dword_140D05050,
    0x7473654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 33384) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - 24576),
    0x6000uLL,
    0x6573654Bu);
  v3 = (_QWORD **)(v1 + 13120);
  v4 = 2LL;
  do
  {
    for ( i = *v3; i; i = (_QWORD *)*i )
      PoSetHiberRange(0LL, 0x10000u, i - 1, 0x40uLL, 0x7064654Bu);
    v3 += 6;
    --v4;
  }
  while ( v4 );
  v6 = *(void **)(v1 + 13072);
  if ( v6 )
  {
    PoSetHiberRange(0LL, 0x10000u, v6, 0x10uLL, 0x7264654Bu);
    PoSetHiberRange(
      0LL,
      0x10000u,
      *(PVOID *)(*(_QWORD *)(v1 + 13072) + 8LL),
      8 * ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 13072) + 4LL) >> 5),
      0x7264654Bu);
    v7 = *(_QWORD *)(v1 + 13072);
    v8 = *(unsigned __int64 **)(v7 + 8);
    for ( j = (unsigned __int64)v8; ; PoSetHiberRange(0LL, 0x10000u, (PVOID)j, 0x20uLL, 0x7264654Bu) )
    {
      v10 = (unsigned __int64 *)j;
      if ( !j )
        break;
      j = *(_QWORD *)j;
      if ( (j & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        j = *v10;
      if ( (j & 1) != 0 )
        break;
LABEL_13:
      if ( !j )
        goto LABEL_19;
    }
    for ( ++v8; (unsigned __int64)v8 < *(_QWORD *)(v7 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v7 + 4) >> 5); ++v8 )
    {
      j = *v8;
      if ( (*v8 & 1) == 0 )
        goto LABEL_13;
    }
  }
LABEL_19:
  v11 = 1232;
  if ( (qword_140D068D8 & 0x800000) != 0 )
    v11 = dword_140D050A0 + 815;
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 35264), v11, 0x7873654Bu);
  v12 = *(void **)(v1 + 1728);
  if ( v12 )
    PoSetHiberRange(
      0LL,
      0x10000u,
      v12,
      MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8] + (unsigned int)dword_140D06A10 + 64LL,
      0x7373654Bu);
  v13 = *(void **)(v1 + 33600);
  if ( v13 )
    PoSetHiberRange(0LL, 0x10000u, v13, 0x5A8uLL, 0x7349654Bu);
  if ( qword_140C2AF38 )
    PoSetHiberRange(0LL, 0x10000u, qword_140C2AF38, 16 * (unsigned int)(unsigned __int8)qword_140C2AF28, 0x7272744Du);
  if ( qword_140C2AF40 )
    PoSetHiberRange(0LL, 0x10000u, qword_140C2AF40, 0x58uLL, 0x7272744Du);
  v14 = *(_QWORD **)(v1 + 8);
  v15 = (void *)((v14[6] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
  v16 = v14[7] - (_QWORD)v15;
  PoSetHiberRange(0LL, 0x10000u, v14, 0x8F0uLL, 0x6874654Bu);
  PoSetHiberRange(0LL, 0x10000u, v15, v16, 0x7473654Bu);
  for ( k = (PVOID *)qword_140C2B810; k != &qword_140C2B810; k = (PVOID *)*k )
    PoSetHiberRange(0LL, 0x10000u, k, 0x30uLL, 0x7473654Bu);
  if ( (_BYTE)byte_140E01841 )
    PoSetHiberRange(
      0LL,
      0x10000u,
      (PVOID)((v14[132] & 0xFFFFFFFFFFFFF000uLL) + 4096),
      v14[131] - ((v14[132] & 0xFFFFFFFFFFFFF000uLL) + 4096) - 4096,
      0x7373654Bu);
  PoSetHiberRange(0LL, 0x10000u, qword_140C15B58, 0x1000uLL, 0x706C7845u);
}
