/*
 * XREFs of sub_14038DA90 @ 0x14038DA90
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall sub_14038DA90(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  void *v4; // r8
  PIMAGE_NT_HEADERS v5; // rax
  __int64 ***v6; // rdi
  __int64 **j; // rbx
  __int64 *v8; // rsi
  __int64 *i; // rbx
  PVOID *v10; // r14
  __int64 v11; // rbp
  ULONG_PTR v12; // r9

  if ( !a2 )
    return;
  v2 = *(_QWORD *)(a2 + 272);
  if ( !v2 )
    return;
  if ( *(_BYTE *)(a2 + 280) )
  {
    v8 = (__int64 *)(v2 + 40);
    for ( i = *(__int64 **)(v2 + 40); i != v8; i = (__int64 *)*i )
    {
      v10 = (PVOID *)(i + 9);
      v11 = 2LL;
      do
      {
        if ( *v10 )
          PoSetHiberRange(0LL, 0x10000u, *v10, *((unsigned int *)i + 16), 0x66756263u);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    goto LABEL_7;
  }
  if ( (unsigned int)(*(_DWORD *)v2 - 2) > 2 || (unsigned int)(*(_DWORD *)(v2 + 4) - 48) > 0x38 )
  {
    v4 = *(void **)(v2 + 24);
    if ( !v4 )
      goto LABEL_7;
    v12 = *(unsigned int *)(v2 + 40);
LABEL_24:
    PoSetHiberRange(0LL, 0x10000u, v4, v12, 0x66756263u);
    goto LABEL_7;
  }
  v4 = *(void **)(v2 + 16);
  if ( v4 )
  {
    v12 = *(unsigned int *)(v2 + 24);
    goto LABEL_24;
  }
LABEL_7:
  if ( BaseOfImage )
  {
    v5 = RtlImageNtHeader(BaseOfImage);
    PoSetHiberRange(0LL, 0x10000u, BaseOfImage, v5->OptionalHeader.SizeOfImage, 0x676D4944u);
  }
  v6 = (__int64 ***)(a2 + 296);
  for ( j = *v6; j != (__int64 **)v6; j = (__int64 **)*j )
    PoSetHiberRange(0LL, 0x10000u, j[3], *((unsigned int *)j + 8), 0x676D4944u);
}
