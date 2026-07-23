/*
 * XREFs of SeSetSessionIdToken @ 0x1407F1444
 * Callers:
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9560 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C9710 (SepCopyClientTokenAndSetSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C9860 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     MmGetSessionObjectById @ 0x1402C0DF0 (MmGetSessionObjectById.c)
 *     SepSetTokenSessionById @ 0x1406B7B10 (SepSetTokenSessionById.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1407EF49C (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x1407F4A1C (SepSetTokenLowboxNumber.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  void *SessionObjectById; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v7; // zf
  __int64 v9; // rdx
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  Object = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = MmGetSessionObjectById(SessionId, *(__int64 *)&SessionId);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v10, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v2 = -1073741525;
  }
  else
  {
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      v9 = *((_QWORD *)Token + 135);
      if ( v9 )
      {
        SepDereferenceLowBoxNumberEntry(*((_DWORD *)Token + 30), v9);
        *((_QWORD *)Token + 135) = 0LL;
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      SepSetTokenSessionById((__int64)Token, SessionId, 1, (__int64)SessionObjectById, &Object);
      SessionObjectById = 0LL;
    }
    v7 = (*((_DWORD *)Token + 50) & 0x4000) == 0;
    *((_DWORD *)Token + 30) = SessionId;
    if ( !v7 )
      v2 = SepSetTokenLowboxNumber(Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v10, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    ObfDereferenceObject(SessionObjectById);
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
