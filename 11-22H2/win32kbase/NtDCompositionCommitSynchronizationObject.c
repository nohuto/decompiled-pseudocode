/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x1C0209410
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C002602C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0032288 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C020AF14 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v7; // rdi
  struct _ERESOURCE *v8; // rbx
  PVOID v9; // rcx
  unsigned int v10; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( UserIsCurrentProcessDwm((__int64)a1, a2, a3)
    || (LOBYTE(Object) = 0,
        DestinationString = 0LL,
        RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
        (int)RtlCapabilityCheck(0LL, &DestinationString, &Object) >= 0)
    && (_BYTE)Object )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v5);
    v7 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v8 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v8, 1u);
      Object = 0LL;
      v4 = DirectComposition::SynchronizationObject::ResolveHandle(
             a1,
             2u,
             1,
             (struct DirectComposition::SynchronizationObject **)&Object);
      if ( v4 >= 0 )
      {
        v9 = Object;
        *((_BYTE *)Object + 33) = 1;
        ObfDereferenceObject(v9);
      }
      ExReleaseResourceLite(v7[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v7, v10);
    }
    else
    {
      v4 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v4;
}
