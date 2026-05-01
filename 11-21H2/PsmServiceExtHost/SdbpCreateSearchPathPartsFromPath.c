/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x1800957A4
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x18009BC38 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchPathPartsFromPath(const wchar_t *a1, _QWORD *a2)
{
  const wchar_t *v3; // rdi
  unsigned int v4; // r14d
  const wchar_t *v5; // rbx
  const char *v6; // r9
  int v7; // r8d
  int i; // esi
  wchar_t *v10; // rax
  _DWORD *Heap; // rax
  _DWORD *v12; // r8
  __int64 v13; // rax
  const wchar_t *j; // rdx
  __int64 v15; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( !a1 )
  {
    v6 = "Invalid argument";
    v7 = 1388;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCreateSearchPathPartsFromPath", v7, (_DWORD)v6);
    return 0LL;
  }
  for ( i = *a1 != 0; ; ++i )
  {
    v10 = wcschr(a1, 0x3Bu);
    if ( !v10 )
      break;
    a1 = v10 + 1;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 48LL * (unsigned int)(i - 1) + 56);
  v12 = Heap;
  if ( !Heap )
  {
    v6 = "Failed to allocate search path parts";
    v7 = 1417;
    goto LABEL_3;
  }
  *Heap = i;
  v13 = -1LL;
  do
    ++v13;
  while ( v3[v13] );
  for ( j = &v3[v13]; j >= v3; --j )
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
      v15 = 6LL * v4++;
      v12[2 * v15 + 4] = v5 - j + 1;
      v5 = 0LL;
      *(_QWORD *)&v12[2 * v15 + 2] = j;
    }
  }
  *a2 = v12;
  return 1LL;
}
