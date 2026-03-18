/*
 * XREFs of SeSetSessionIdToken @ 0x1407530D0
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C6000 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C61B0 (SepCopyClientTokenAndSetSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C6320 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     MmGetSessionObjectById @ 0x1402DF7D8 (MmGetSessionObjectById.c)
 *     SepSetTokenSessionById @ 0x140672524 (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x1406965F4 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406AB17C (SepDereferenceLowBoxNumberEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  __int64 v2; // r8
  __int64 v3; // r9
  NTSTATUS v4; // esi
  void *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  bool v10; // zf
  __int64 v12; // rdx
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  SessionObjectById = 0LL;
  Object = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = MmGetSessionObjectById(SessionId, *(__int64 *)&SessionId, v2, v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v13, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v4 = -1073741525;
  }
  else
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      v12 = *((_QWORD *)Token + 135);
      if ( v12 )
      {
        SepDereferenceLowBoxNumberEntry(*((_DWORD *)Token + 30), v12);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      LOBYTE(v9) = 1;
      SepSetTokenSessionById((__int64)Token, SessionId, v9, (__int64)SessionObjectById, &Object);
      SessionObjectById = 0LL;
    }
    v10 = (*((_DWORD *)Token + 50) & 0x4000) == 0;
    *((_DWORD *)Token + 30) = SessionId;
    if ( !v10 )
      v4 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v13, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    ObfDereferenceObject(SessionObjectById);
  if ( Object )
    ObfDereferenceObject(Object);
  return v4;
}
