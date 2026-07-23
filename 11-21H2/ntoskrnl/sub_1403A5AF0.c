/*
 * XREFs of sub_1403A5AF0 @ 0x1403A5AF0
 * Callers:
 *     sub_1406C82F8 @ 0x1406C82F8 (sub_1406C82F8.c)
 *     sub_140810420 @ 0x140810420 (sub_140810420.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_14045F87C @ 0x14045F87C (sub_14045F87C.c)
 *     sub_1408104C0 @ 0x1408104C0 (sub_1408104C0.c)
 */

PSLIST_ENTRY __fastcall sub_1403A5AF0(__int64 a1)
{
  KIRQL v2; // dl
  signed __int32 v3; // edi
  KIRQL v4; // al
  __int64 v5; // r8
  _QWORD *v6; // rdx
  void *v7; // rcx
  __int64 v8; // r8
  _DWORD Object[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-20h] BYREF

  Object[1] = 0;
  Object[0] = 393217;
  v11[1] = v11;
  v11[0] = v11;
  sub_14045F87C();
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C16660);
  *(_QWORD *)(a1 + 40) = Object;
  _m_prefetchw((const void *)(a1 + 48));
  v3 = _InterlockedOr((volatile signed __int32 *)(a1 + 48), 0xA0000000);
  KeReleaseSpinLock(&qword_140C16660, v2);
  KeReleaseMutex(&::Object, 0);
  sub_1402E0164(a1);
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  sub_14045F87C();
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C16660);
  v5 = *(_QWORD *)a1;
  --dword_140C547BC;
  if ( *(_QWORD *)(v5 + 8) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KeReleaseSpinLock(&qword_140C16660, v4);
  KeReleaseMutex(&::Object, 0);
  if ( (v3 & 0x10000000) == 0 )
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
  v7 = *(void **)(a1 + 24);
  if ( v7 )
    ObfDereferenceObject(v7);
  sub_1408104C0(a1);
  return sub_140203D88((__int64)&unk_140CF5EC0, (_SLIST_ENTRY *)a1, v8);
}
