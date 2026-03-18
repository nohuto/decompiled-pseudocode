/*
 * XREFs of NtUserGetQueueStatus @ 0x1C00A4E20
 * Callers:
 *     <none>
 * Callees:
 *     xxxDrainQueueCompletions @ 0x1C00A5010 (xxxDrainQueueCompletions.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetQueueStatus(__int16 a1)
{
  __int64 v2; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v4; // r14d
  __int64 v5; // rbx
  unsigned int DLT; // eax
  int v7; // edi
  char *v8; // rbx
  tagDomLock *v9; // rcx
  int v10; // edi
  tagObjLock **v11; // rbx
  tagDomLock *v12; // rcx
  int v13; // edx
  unsigned int v14; // ebx
  tagDomLock *DomainLockRef; // [rsp+38h] [rbp-48h]
  char v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h]
  char v19; // [rsp+50h] [rbp-30h]
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  char v21; // [rsp+68h] [rbp-18h]

  EnterSharedCrit();
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( *(_QWORD *)(v2 + 1464) && (a1 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v4 = a1 & 0x5DFF;
  v5 = v2 + 392;
  DLT = DLT_THREADINFO::getDLT();
  v7 = 0;
  v20 = 0LL;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( v2 + 392 == gObjDummyLock )
    v5 = 0LL;
  *(_QWORD *)&v20 = v5;
  v8 = &v17;
  v17 = 0;
  v18 = gDomainDummyLock;
  v19 = 0;
  v21 = 0;
  do
  {
    v9 = (tagDomLock *)*((_QWORD *)v8 - 1);
    if ( v9 )
    {
      if ( *v8 )
        tagDomLock::LockExclusive(v9);
      else
        tagDomLock::LockShared(v9);
    }
    ++v7;
    v8 += 16;
  }
  while ( !v7 );
  v10 = 0;
  v11 = (tagObjLock **)&v20;
  do
  {
    if ( *v11 )
      tagObjLock::LockExclusive(*v11);
    ++v10;
    ++v11;
  }
  while ( !v10 );
  v12 = *(tagDomLock **)(v2 + 448);
  v21 = 1;
  v13 = *((_DWORD *)v12 + 1);
  _InterlockedAnd((volatile signed __int32 *)v12 + 1, ~v4);
  v14 = (unsigned __int16)(v4 & v13) | ((unsigned __int16)(v4 & (*(_WORD *)(*(_QWORD *)(v2 + 448) + 8LL) | *(_WORD *)(*(_QWORD *)(v2 + 448) + 12LL))) << 16);
  if ( v21 )
  {
    if ( (_QWORD)v20 )
      tagObjLock::UnLockExclusive((tagObjLock *)v20);
    v12 = DomainLockRef;
    if ( DomainLockRef )
    {
      if ( v17 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v14;
}
