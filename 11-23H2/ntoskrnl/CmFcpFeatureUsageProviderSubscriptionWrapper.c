/*
 * XREFs of CmFcpFeatureUsageProviderSubscriptionWrapper @ 0x14067F990
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402C20C0 (MmGetSessionById.c)
 *     MmDetachSession @ 0x140356450 (MmDetachSession.c)
 *     MmAttachSession @ 0x1403564F0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __fastcall CmFcpFeatureUsageProviderSubscriptionWrapper(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _KPROCESS *v5; // rdi
  signed __int32 v6; // ett
  _KPROCESS *SessionById; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-78h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v9; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 72);
  memset(&v9, 0, sizeof(v9));
  v5 = 0LL;
  _m_prefetchw((const void *)(a1 + 88));
  do
    v6 = *(_DWORD *)(a1 + 88);
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 88), (v6 & 0xFFFFFFFC) + 4, v6) );
  if ( (*(_DWORD *)(a1 + 80) & 1) == 0 )
    goto LABEL_6;
  SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(a1 + 84));
  v5 = SessionById;
  if ( !SessionById )
    goto LABEL_9;
  if ( (int)MmAttachSession(SessionById, (__int64)&v9) >= 0 )
  {
LABEL_6:
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 64))(1LL, 0LL, a2);
    if ( !v5 )
      goto LABEL_9;
    MmDetachSession((__int64)v5, &v9);
  }
  ObfDereferenceObject(v5);
LABEL_9:
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 88), 4u);
  _InterlockedOr(v8, 0);
  if ( *(_QWORD *)(a1 + 96) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 96), 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 1740), 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v8, 0);
    if ( *(_QWORD *)(v2 + 1328) )
      ExfUnblockPushLock((volatile __int64 *)(v2 + 1328), 0LL);
  }
}
