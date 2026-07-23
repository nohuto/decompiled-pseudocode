/*
 * XREFs of EtwUnregister @ 0x1406B7470
 * Callers:
 *     sub_1403B6E4C @ 0x1403B6E4C (sub_1403B6E4C.c)
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1406030C8 @ 0x1406030C8 (sub_1406030C8.c)
 *     sub_140603264 @ 0x140603264 (sub_140603264.c)
 *     sub_140606760 @ 0x140606760 (sub_140606760.c)
 *     sub_140804E40 @ 0x140804E40 (sub_140804E40.c)
 *     sub_1408087A4 @ 0x1408087A4 (sub_1408087A4.c)
 *     sub_140855120 @ 0x140855120 (sub_140855120.c)
 *     sub_140855238 @ 0x140855238 (sub_140855238.c)
 *     sub_140926260 @ 0x140926260 (sub_140926260.c)
 *     sub_14092A77C @ 0x14092A77C (sub_14092A77C.c)
 *     sub_14092AC5C @ 0x14092AC5C (sub_14092AC5C.c)
 *     sub_1409A0CB8 @ 0x1409A0CB8 (sub_1409A0CB8.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 *     sub_140A5464C @ 0x140A5464C (sub_140A5464C.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B1A3F4 @ 0x140B1A3F4 (sub_140B1A3F4.c)
 *     sub_140B1CB28 @ 0x140B1CB28 (sub_140B1CB28.c)
 *     sub_140B2E584 @ 0x140B2E584 (sub_140B2E584.c)
 *     sub_140B52C84 @ 0x140B52C84 (sub_140B52C84.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_1407973D0 @ 0x1407973D0 (sub_1407973D0.c)
 *     sub_140882EB0 @ 0x140882EB0 (sub_140882EB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rcx

  if ( !RegHandle )
    return -1073741816;
  if ( (*(_BYTE *)(RegHandle + 98) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle, 1uLL, 0LL);
  if ( *(_QWORD *)(RegHandle + 40) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 416LL) = KeGetCurrentThread();
  }
  v3 = KeGetCurrentThread();
  --*((_WORD *)v3 + 242);
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = KeGetCurrentThread();
  v4 = *(_QWORD *)RegHandle;
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle
    || (v5 = *(_QWORD **)(RegHandle + 8), *v5 != RegHandle)
    || (*v5 = v4, *(_QWORD *)(v4 + 8) = v5, v6 = *(_QWORD *)(RegHandle + 16), *(_QWORD *)(v6 + 8) != RegHandle + 16)
    || (v7 = *(_QWORD **)(RegHandle + 24), *v7 != RegHandle + 16) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  KeLeaveCriticalRegion();
  v8 = *(_QWORD *)(RegHandle + 40);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 416) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(qword_140C15FA8, &stru_14000EA00) )
    sub_140882EB0(v9, &stru_14000EA00, v10, 1LL, 0LL, *(_QWORD *)(RegHandle + 32) + 40LL);
  sub_140796B04(*(PVOID *)(RegHandle + 32));
  v11 = *(void **)(RegHandle + 40);
  if ( v11 )
    sub_140796B04(v11);
  sub_1407973D0(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
