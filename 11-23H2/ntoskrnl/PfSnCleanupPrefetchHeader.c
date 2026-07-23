/*
 * XREFs of PfSnCleanupPrefetchHeader @ 0x14075D0A0
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14074DE90 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     PfpPrefetchSharedDeref @ 0x140684A38 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x140684B04 (PfpPrefetchSharedCleanup.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14075D1A8 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpOpenHandleClose @ 0x14075D414 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupPrefetchHeader(__int64 a1)
{
  unsigned int i; // edi
  _QWORD **v3; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  ULONG_PTR v9; // rcx
  void *v10; // rcx

  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(_QWORD *)a1 )
    {
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 88LL); ++i )
        PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(a1 + 56) + 56LL * i, a1, 0LL);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 56), 0);
  }
  v3 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    PfpOpenHandleClose(v4 + 8, *(_QWORD *)(a1 + 8));
    PfpOpenHandleClose(v4 + 4, *(_QWORD *)(a1 + 8));
  }
  v6 = *(void **)(a1 + 16);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(a1 + 80);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = *(void **)(a1 + 88);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 )
  {
    PfpPrefetchSharedCleanup(v9);
    PfpPrefetchSharedDeref(*(volatile signed __int64 **)(a1 + 8));
  }
  v10 = *(void **)(a1 + 112);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
}
