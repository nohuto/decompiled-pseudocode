/*
 * XREFs of WdipSemFreePool @ 0x1409DE0A0
 * Callers:
 *     WdipSemShutdown @ 0x1409DDCA0 (WdipSemShutdown.c)
 * Callees:
 *     InitializeSListHead @ 0x140221440 (InitializeSListHead.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void WdipSemFreePool()
{
  PVOID *v0; // rax
  _QWORD *v1; // rcx
  _SLIST_HEADER *v2; // rbx
  __int64 v3; // rdi

  v0 = (PVOID *)WdipSemPool;
  v1 = *(_QWORD **)WdipSemPool;
  if ( *((PVOID **)WdipSemPool + 1) != &WdipSemPool )
LABEL_2:
    __fastfail(3u);
  while ( 1 )
  {
    if ( (PVOID *)v1[1] != v0 )
      goto LABEL_2;
    WdipSemPool = v1;
    v1[1] = &WdipSemPool;
    if ( v0 == &WdipSemPool )
      break;
    ExFreePoolWithTag(v0, 0);
    v0 = (PVOID *)WdipSemPool;
    if ( *((PVOID **)WdipSemPool + 1) != &WdipSemPool )
      goto LABEL_2;
    v1 = *(_QWORD **)WdipSemPool;
  }
  dword_140C6B420 = 0;
  v2 = &SListHead;
  qword_140C6B428 = 0LL;
  v3 = 6LL;
  do
  {
    InitializeSListHead(v2++);
    --v3;
  }
  while ( v3 );
}
