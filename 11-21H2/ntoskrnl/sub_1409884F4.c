/*
 * XREFs of sub_1409884F4 @ 0x1409884F4
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 *     sub_140989028 @ 0x140989028 (sub_140989028.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1405C6550 @ 0x1405C6550 (sub_1405C6550.c)
 *     sub_1405C6648 @ 0x1405C6648 (sub_1405C6648.c)
 *     sub_1406BF0AC @ 0x1406BF0AC (sub_1406BF0AC.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14084F9EC @ 0x14084F9EC (sub_14084F9EC.c)
 *     sub_14085075C @ 0x14085075C (sub_14085075C.c)
 *     sub_1409881B4 @ 0x1409881B4 (sub_1409881B4.c)
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 *     sub_140A484F0 @ 0x140A484F0 (sub_140A484F0.c)
 */

__int64 __fastcall sub_1409884F4(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rdx
  int SystemThread; // esi
  HANDLE v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v3 = a3;
  DestinationString = 0LL;
  if ( (a3 & 1) != 0 && (xmmword_140C54344 & 1) == 0 )
    v3 = a3 & 0xFFFFFFFE;
  if ( (v3 & 2) != 0 && (xmmword_140C54344 & 1) == 0 && (_DWORD)qword_140C54360 != 1 && HIDWORD(qword_140C54360) != 1 )
    v3 &= ~2u;
  if ( (v3 & 1) != 0 )
  {
    SystemThread = sub_1409881B4(a1 + 24, 0x8000u, 8u, 0x424C6650u);
    if ( SystemThread < 0 )
      goto LABEL_17;
    SystemThread = sub_1409881B4(a1 + 64, 0x14028u, 2u, 0x54456650u);
    if ( SystemThread < 0 )
      goto LABEL_17;
    SystemThread = PsCreateSystemThreadEx(
                     (int)&Handle,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)sub_140882180,
                     a1 + 104,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
      goto LABEL_17;
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v7 = Handle;
    *(_QWORD *)(a1 + 104) = Object;
    ObCloseHandle(v7, 0);
  }
  if ( (v3 & 3) != 0 && !*(_QWORD *)(a1 + 616) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchTracesReady");
    SystemThread = sub_14085075C(&DestinationString, SynchronizationEvent, (PVOID *)(a1 + 616));
    if ( SystemThread < 0 )
    {
LABEL_17:
      sub_1409882B4(a1, v5);
      sub_14084F9EC((_QWORD *)a1, v8, 1);
      return (unsigned int)SystemThread;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    sub_1405C6648(a1 + 352, 0x100000);
    sub_1405C6550(v9, ((_DWORD)dword_140D06884 + 2) << 12, 2 * dword_140D06884 + 4);
  }
  if ( (v3 & 2) != 0 )
  {
    sub_1405C6648(a1 + 224, 0x1000000);
    sub_1405C6550(v10, ((_DWORD)dword_140D06884 + 7) << 15, 2 * dword_140D06884 + 14);
  }
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 540) = HIDWORD(xmmword_140C54344);
    if ( dword_140C4EB78 < (unsigned int)dword_140C4EB7C )
      sub_140A484F0(a1, &qword_140CF5E00, 2LL);
  }
  if ( (v3 & 2) != 0 )
    *(_DWORD *)(a1 + 548) = DWORD2(xmmword_140C54344);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 8) |= v3;
  if ( (v3 & 1) != 0 )
  {
    _InterlockedOr(v12, 0);
    sub_1406BF0AC((__int64)sub_1407DB510, 0LL);
    sub_140A484F0(a1, &qword_140CF5E00, 1LL);
  }
  return 0;
}
