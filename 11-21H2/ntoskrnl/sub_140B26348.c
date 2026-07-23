/*
 * XREFs of sub_140B26348 @ 0x140B26348
 * Callers:
 *     sub_140855C60 @ 0x140855C60 (sub_140855C60.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140B51B94 @ 0x140B51B94 (sub_140B51B94.c)
 */

int sub_140B26348()
{
  unsigned __int64 v0; // rax
  __int64 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx

  LODWORD(v0) = KeWaitForSingleObject(&word_140C58E80, Executive, 0, 0, 0LL);
  v1 = qword_140D6C0F8;
  v2 = 64LL;
  do
  {
    if ( v1[2] )
    {
      v0 = *(int *)v1;
      if ( (unsigned int)v0 > 0x2A || (v3 = 0x5C5C0C00048LL, !_bittest64(&v3, v0)) )
        LODWORD(v0) = sub_140B51B94(v1 - 3);
    }
    v1 += 6;
    --v2;
  }
  while ( v2 );
  return v0;
}
