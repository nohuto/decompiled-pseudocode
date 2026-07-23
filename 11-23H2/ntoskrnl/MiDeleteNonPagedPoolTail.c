/*
 * XREFs of MiDeleteNonPagedPoolTail @ 0x1402109E0
 * Callers:
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiReduceShareCount @ 0x1403680B4 (MiReduceShareCount.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolTail(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 168);
  MiFlushTbList(v1);
  if ( *(_DWORD *)(v1 + 208) )
  {
    v3 = 48LL * *(_QWORD *)(v1 + 216) - 0x220000000000LL;
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v4);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    MiReduceShareCount(v3, *(unsigned int *)(v1 + 208));
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)(v1 + 208) = 0;
  }
  return 0LL;
}
