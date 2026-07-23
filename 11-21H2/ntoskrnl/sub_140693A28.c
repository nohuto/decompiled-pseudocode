/*
 * XREFs of sub_140693A28 @ 0x140693A28
 * Callers:
 *     sub_140693F68 @ 0x140693F68 (sub_140693F68.c)
 * Callees:
 *     sub_140216B04 @ 0x140216B04 (sub_140216B04.c)
 *     sub_140216BC0 @ 0x140216BC0 (sub_140216BC0.c)
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_1402180C4 @ 0x1402180C4 (sub_1402180C4.c)
 *     sub_140218208 @ 0x140218208 (sub_140218208.c)
 *     sub_140218288 @ 0x140218288 (sub_140218288.c)
 *     sub_1402182F8 @ 0x1402182F8 (sub_1402182F8.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14036DBE4 @ 0x14036DBE4 (sub_14036DBE4.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406939A4 @ 0x1406939A4 (sub_1406939A4.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140761DF8 @ 0x140761DF8 (sub_140761DF8.c)
 *     sub_1407914BC @ 0x1407914BC (sub_1407914BC.c)
 */

unsigned __int64 sub_140693A28()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rbp
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rdx
  struct _KTHREAD *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  bool v8; // zf
  unsigned __int64 result; // rax
  void *v10; // rcx
  _OWORD v11[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+80h] [rbp+8h] BYREF

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  v13 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v1 = *((_QWORD *)CurrentThread + 23);
  v2 = *(_QWORD *)(v1 + 1368);
  v3 = sub_1402182F8(*(_WORD *)(v2 + 366));
  sub_140218288(v2);
  if ( *(_QWORD *)(v2 + 72) )
  {
    KeSetEvent(*(PRKEVENT *)(v2 + 64), 1, 0);
    ObCloseHandle(*(HANDLE *)(v2 + 72), 0);
  }
  if ( *(_QWORD *)(v2 + 616) > 1uLL )
    sub_14042A5E0(0LL, v4);
  sub_140761DF8();
  sub_140216BC0(v2);
  v14 = *(_DWORD *)(v2 + 8);
  v5 = KeGetCurrentThread();
  --*((_WORD *)v5 + 242);
  sub_1407914BC(1LL, &v14, 4LL);
  KeLeaveCriticalRegion();
  v6 = *(_DWORD *)(v2 + 4);
  if ( (v6 & 1) != 0 )
  {
    sub_14036DBE4();
    *(_DWORD *)(v2 + 4) |= 0x100u;
    sub_1406939A4();
    v6 = *(_DWORD *)(v2 + 4);
  }
  if ( (v6 & 0x180) == 0x80 )
    sub_14036DBE4();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50628, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50628);
  sub_1402AFC00((ULONG_PTR)&qword_140C50628);
  v8 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v8 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( *(_QWORD *)(v1 + 1184) )
  {
    sub_140218208(v7, v1);
    *(_QWORD *)(v1 + 1184) = 0LL;
  }
  sub_140216B04(v2, (__int64)v11);
  sub_1402180C4(0LL);
  sub_14028CE10(v3, v12 - *((_QWORD *)&v11[0] + 1));
  sub_140216E18(v3, *(unsigned __int64 *)&v11[0]);
  result = sub_140216E18(v3, *(_QWORD *)(v2 + 304));
  v10 = *(void **)(v2 + 880);
  if ( v10 )
    result = ObfDereferenceObjectWithTag(v10, 0x73536D4Du);
  *(_QWORD *)(v2 + 880) = 0LL;
  return result;
}
