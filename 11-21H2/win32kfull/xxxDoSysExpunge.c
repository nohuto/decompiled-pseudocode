/*
 * XREFs of xxxDoSysExpunge @ 0x1C00781A4
 * Callers:
 *     xxxDoSysExpungeIfNeeded @ 0x1C015D208 (xxxDoSysExpungeIfNeeded.c)
 * Callees:
 *     ClientFreeLibrary @ 0x1C0077D70 (ClientFreeLibrary.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C00783CC (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01593E0 (__report_rangecheckfailure.c)
 */

void __fastcall xxxDoSysExpunge(__int64 a1)
{
  int v2; // r14d
  int v3; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  int v17; // esi
  char *v18; // rdi
  tagDomLock *v19; // rcx
  tagDomLock *v20; // [rsp+20h] [rbp-68h]
  char v21; // [rsp+28h] [rbp-60h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h]
  char v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-48h]
  char v25; // [rsp+48h] [rbp-40h]

  LockRefactorStagingAssertOwned(gDomainClientLibLock);
  v2 = 0;
  v3 = catomSysTableEntries;
  *(_DWORD *)(*(_QWORD *)(a1 + 424) + 400LL) = gcSysExpunge;
  if ( v3 > 0 )
  {
    v4 = 0LL;
    v5 = 408LL;
    v6 = 0LL;
    do
    {
      if ( !*(_DWORD *)((char *)&acatomSysDepends + v6) )
      {
        if ( *(_WORD *)((char *)&aatomSysLoaded + v4) )
        {
          LockRefactorStagingAssertOwned(gDomainClientLibLock);
          v7 = *(_QWORD *)(a1 + 424);
          if ( ((1 << v2) & *(_DWORD *)(v7 + 404)) != 0 )
          {
            v8 = *(_QWORD *)(v5 + v7);
            LockRefactorStagingAssertOwned(gDomainClientLibLock);
            v13 = ~(1 << v2);
            *(_QWORD *)(v5 + *(_QWORD *)(a1 + 424)) = 0LL;
            *(_DWORD *)(*(_QWORD *)(a1 + 424) + 404LL) &= v13;
            if ( (*(_DWORD *)((char *)&acatomSysUse + v6))-- == 1 )
            {
              UserDeleteAtomFromAtomTable(
                UserLibmgmtAtomTableHandle,
                *(unsigned __int16 *)((char *)&aatomSysLoaded + v4),
                v11,
                v12,
                (_DWORD)v20);
              if ( v4 >= 0x40 )
                _report_rangecheckfailure();
              *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy &= v13;
              *(_WORD *)((char *)&aatomSysLoaded + v4) = 0;
            }
            DLT = DLT_CLIENTLIB::getDLT(v10, v9, v11, v12);
            DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
            v22 = gDomainDummyLock;
            v20 = DomainLockRef;
            v21 = 1;
            v23 = 0;
            v24 = 0LL;
            v25 = 0;
            if ( DomainLockRef )
              tagDomLock::UnLockExclusive(DomainLockRef);
            v25 = 1;
            ClientFreeLibrary(v8);
            if ( v25 )
            {
              v17 = 0;
              v18 = &v21;
              do
              {
                v19 = (tagDomLock *)*((_QWORD *)v18 - 1);
                if ( v19 )
                {
                  if ( *v18 )
                    tagDomLock::LockExclusive(v19);
                  else
                    tagDomLock::LockShared(v19);
                }
                ++v17;
                v18 += 16;
              }
              while ( !v17 );
            }
          }
        }
      }
      ++v2;
      v5 += 8LL;
      v6 += 4LL;
      v4 += 2LL;
    }
    while ( v2 < catomSysTableEntries );
  }
}
