/*
 * XREFs of xxxDoSysExpungeIfNeeded @ 0x1C013D81C
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0125FC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxDoSysExpunge @ 0x1C007119C (xxxDoSysExpunge.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void __fastcall xxxDoSysExpungeIfNeeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int DLT; // eax
  char *v6; // rbx
  int v7; // edi
  tagDomLock *v8; // rcx
  __int64 v9; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  char v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  char v15; // [rsp+48h] [rbp-20h]

  DLT = DLT_CLIENTLIB::getDLT(a1, a2, a3, a4, DomainLockRef);
  v11 = 1;
  v6 = &v11;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v12 = gDomainDummyLock;
  v14 = 0LL;
  v7 = 0;
  v15 = 0;
  v13 = 0;
  do
  {
    v8 = (tagDomLock *)*((_QWORD *)v6 - 1);
    if ( v8 )
    {
      if ( *v6 )
        tagDomLock::LockExclusive(v8);
      else
        tagDomLock::LockShared(v8);
    }
    ++v7;
    v6 += 16;
  }
  while ( !v7 );
  v9 = *(_QWORD *)(a1 + 424);
  v15 = 1;
  if ( *(_DWORD *)(v9 + 392) == gcSysExpunge )
    goto LABEL_11;
  *(_DWORD *)(v9 + 392) = gcSysExpunge;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 396LL) & gdwSysExpungeMask) != 0 )
    xxxDoSysExpunge(a1);
  if ( v15 )
  {
LABEL_11:
    if ( DomainLockRef )
    {
      if ( v11 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
}
