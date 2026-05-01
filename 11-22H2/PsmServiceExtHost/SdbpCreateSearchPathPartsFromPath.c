/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x1800907A8
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x180096B18 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchPathPartsFromPath(const wchar_t *a1, _QWORD *a2)
{
  const wchar_t *v3; // rdi
  unsigned int v4; // r14d
  const wchar_t *v5; // rbx
  int i; // esi
  wchar_t *v8; // rax
  _DWORD *Heap; // rax
  _DWORD *v10; // r8
  __int64 v11; // rax
  const wchar_t *j; // rdx
  __int64 v13; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( !a1 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCreateSearchPathPartsFromPath", 2259, (unsigned int)"Invalid argument");
    return 0LL;
  }
  for ( i = *a1 != 0; ; ++i )
  {
    v8 = wcschr(a1, 0x3Bu);
    if ( !v8 )
      break;
    a1 = v8 + 1;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 48LL * (unsigned int)(i - 1) + 56);
  v10 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCreateSearchPathPartsFromPath",
      2288,
      (unsigned int)"Failed to allocate search path parts");
    return 0LL;
  }
  *Heap = i;
  v11 = -1LL;
  do
    ++v11;
  while ( v3[v11] );
  for ( j = &v3[v11]; j >= v3; --j )
  {
    if ( *j == 92 )
    {
      if ( !v5 )
        v5 = j;
LABEL_16:
      if ( v3 != j )
        continue;
      goto LABEL_17;
    }
    if ( *j != 59 )
      goto LABEL_16;
LABEL_17:
    if ( v5 )
    {
      if ( *j == 59 )
        ++j;
      v13 = 6LL * v4++;
      v10[2 * v13 + 4] = v5 - j + 1;
      v5 = 0LL;
      *(_QWORD *)&v10[2 * v13 + 2] = j;
    }
  }
  *a2 = v10;
  return 1LL;
}
