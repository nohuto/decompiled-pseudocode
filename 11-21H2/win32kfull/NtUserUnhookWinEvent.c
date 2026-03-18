/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C00E5900
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _UnhookWinEvent @ 0x1C00E5A2C (_UnhookWinEvent.c)
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C00E6220 (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  int v2; // esi
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  char *v5; // rbx
  int v6; // edi
  tagDomLock *v7; // rcx
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-40h] BYREF
  tagDomLock *v14; // [rsp+28h] [rbp-38h]
  char v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  char v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]
  char v19; // [rsp+50h] [rbp-10h]

  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(v13, 6LL, 0LL);
  v2 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v15 = 1;
  v5 = &v15;
  v14 = DomainLockRef;
  v16 = gDomainDummyLock;
  v18 = 0LL;
  v6 = 0;
  v19 = 0;
  v17 = 0;
  do
  {
    v7 = (tagDomLock *)*((_QWORD *)v5 - 1);
    if ( v7 )
    {
      if ( *v5 )
        tagDomLock::LockExclusive(v7);
      else
        tagDomLock::LockShared(v7);
    }
    ++v6;
    v5 += 16;
  }
  while ( !v6 );
  v19 = 1;
  v8 = (void *)HMValidateHandle(a1, 0xFu);
  if ( v8 )
    v2 = UnhookWinEvent(v8);
  if ( v19 && v14 )
  {
    if ( v15 )
      tagDomLock::UnLockExclusive(v14);
    else
      tagDomLock::UnLockShared(v14);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13, v9, v10);
  UserSessionSwitchLeaveCrit(v11);
  return v2;
}
