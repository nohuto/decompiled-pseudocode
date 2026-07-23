/*
 * XREFs of sub_1409B1468 @ 0x1409B1468
 * Callers:
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_14030263C @ 0x14030263C (sub_14030263C.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 */

char sub_1409B1468()
{
  unsigned int v0; // ebp
  LARGE_INTEGER v1; // rbx
  __int64 *i; // rcx
  void *v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // rsi
  NTSTATUS v7; // edi
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -100000LL;
  v0 = 0;
  v1.QuadPart = -100000LL;
  while ( 1 )
  {
    for ( i = 0LL; ; i = v5 )
    {
      v4 = sub_1407B6B90(i);
      v5 = v4;
      if ( !v4 )
        return 1;
      if ( (*((_DWORD *)v4 + 543) & 0x1000) == 0
        && v4 != qword_140D06940
        && (*((_DWORD *)v4 + 281) & 4) != 0
        && !sub_14030263C(v4)
        && v5[174] )
      {
        break;
      }
    }
    ObfReferenceObjectWithTag(v3, 0x65547350u);
    ObfDereferenceObjectWithTag(v5, 0x6E457350u);
    v7 = KeWaitForSingleObject(v5, Executive, 0, 0, &Timeout);
    ObfDereferenceObjectWithTag(v5, 0x65547350u);
    if ( v7 == 258 )
    {
      v1.QuadPart *= 2LL;
      ++v0;
      Timeout = v1;
      if ( v0 > 0xD )
        break;
    }
  }
  return 0;
}
