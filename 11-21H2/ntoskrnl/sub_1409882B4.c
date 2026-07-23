/*
 * XREFs of sub_1409882B4 @ 0x1409882B4
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 *     sub_1409884F4 @ 0x1409884F4 (sub_1409884F4.c)
 *     sub_140989028 @ 0x140989028 (sub_140989028.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14035FAE8 @ 0x14035FAE8 (sub_14035FAE8.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_1405C6630 @ 0x1405C6630 (sub_1405C6630.c)
 *     sub_1407DBEE0 @ 0x1407DBEE0 (sub_1407DBEE0.c)
 *     sub_140988464 @ 0x140988464 (sub_140988464.c)
 *     sub_1409887B0 @ 0x1409887B0 (sub_1409887B0.c)
 *     sub_140989350 @ 0x140989350 (sub_140989350.c)
 *     sub_140A483FC @ 0x140A483FC (sub_140A483FC.c)
 */

LONG_PTR __fastcall sub_1409882B4(__int64 a1, __int64 a2)
{
  bool v3; // bp
  __int64 v4; // rdx
  PSLIST_ENTRY v5; // rbx
  __int64 v6; // rdx
  LONG_PTR result; // rax
  void *v8; // rcx
  _QWORD *v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v9[1] = v9;
  v9[0] = v9;
  v3 = KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 104);
  sub_140A483FC(a1, a2, 1LL);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 540) = 0;
  *(_DWORD *)(a1 + 548) = 0;
  sub_1409887B0(0LL, 0LL, v9);
  sub_1409887B0(1LL, 0LL, v9);
  *(_DWORD *)(a1 + 552) = 0;
  sub_140A483FC(a1, v4, 2LL);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  sub_1407DBEE0(v9);
  *(_DWORD *)(a1 + 496) = 0;
  v5 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 480));
  while ( v5 )
  {
    v6 = (__int64)v5;
    v5 = v5->Next;
    sub_14035FAE8(a1 + 352, v6, *(_DWORD *)(v6 + 32) - v6, *(_DWORD *)(v6 + 44), 1);
  }
  sub_1405C6630((struct _EX_RUNDOWN_REF *)(a1 + 224));
  sub_1405C6630((struct _EX_RUNDOWN_REF *)(a1 + 352));
  if ( !v3 && *(_QWORD *)(a1 + 104) )
  {
    KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
    KeWaitForSingleObject(*(PVOID *)(a1 + 104), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(a1 + 104));
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  sub_140988464(&unk_140C4E978);
  sub_140988464(&unk_140C4E9A0);
  sub_140989350(a1 + 224);
  result = sub_140989350(a1 + 352);
  v8 = *(void **)(a1 + 616);
  if ( v8 )
  {
    result = ObfDereferenceObject(v8);
    *(_QWORD *)(a1 + 616) = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
