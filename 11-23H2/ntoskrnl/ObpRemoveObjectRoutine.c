/*
 * XREFs of ObpRemoveObjectRoutine @ 0x140729770
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749540 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ObpFreeObject @ 0x140729850 (ObpFreeObject.c)
 */

__int64 __fastcall ObpRemoveObjectRoutine(__int64 a1, char a2)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v4 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  if ( (PVOID)v4 == ObpTypeObjectType )
    KeBugCheckEx(0xF4u, v4, a1 + 48, 0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *, _DWORD, _QWORD, _BYTE))(v4 + 152))(
      a1 + 48,
      2LL,
      0LL,
      0LL,
      0LL,
      &v6,
      0,
      0LL,
      0);
  if ( *(_QWORD *)(v4 + 136) )
  {
    if ( !a2 )
      *(_BYTE *)(a1 + 27) |= 0x80u;
    (*(void (__fastcall **)(__int64))(v4 + 136))(a1 + 48);
  }
  return ObpFreeObject(a1);
}
