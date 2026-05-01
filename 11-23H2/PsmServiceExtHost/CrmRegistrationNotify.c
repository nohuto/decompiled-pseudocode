/*
 * XREFs of CrmRegistrationNotify @ 0x1800274BC
 * Callers:
 *     CrmRegistrationReadyQueueRemove @ 0x1800138C0 (CrmRegistrationReadyQueueRemove.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 * Callees:
 *     CrmLogRegistrationNotify @ 0x180027588 (CrmLogRegistrationNotify.c)
 */

__int64 __fastcall CrmRegistrationNotify(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 144) || *(_DWORD *)(a2 + 148) )
  {
    RtlAcquireSRWLockExclusive(a1);
    *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
    if ( v8 != *(_DWORD *)(a2 + 124) )
    {
      v4 = 1;
      v3 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 144), 0LL, &v8, 4LL, 0LL);
      *(_DWORD *)(a2 + 124) = v8;
    }
    *(_DWORD *)(a1 + 8) = 0;
    RtlReleaseSRWLockExclusive(a1);
    a3 = v8;
  }
  CrmLogRegistrationNotify(a1, v4, a3, v3);
  return v4;
}
