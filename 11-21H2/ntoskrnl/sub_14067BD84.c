/*
 * XREFs of sub_14067BD84 @ 0x14067BD84
 * Callers:
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140863DA8 @ 0x140863DA8 (sub_140863DA8.c)
 */

void __fastcall sub_14067BD84(PPRIVILEGE_SET Privileges)
{
  volatile signed __int64 *v1; // rdi
  signed __int64 v3; // rax
  signed __int64 i; // rcx
  signed __int64 v5; // rtt
  __int64 v6; // rcx
  __int64 v7; // rcx
  PPRIVILEGE_SET *Luid; // rdx

  v1 = *(volatile signed __int64 **)&Privileges->Privilege[0].Attributes;
  _m_prefetchw(&Privileges[1].Control);
  v3 = *(_QWORD *)&Privileges[1].Control;
  for ( i = v3 - 1; i > 0; i = v3 - 1 )
  {
    v5 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)&Privileges[1].Control, i, v3);
    if ( v5 == v3 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)&Privileges[1].Control);
  if ( v6 > 0 )
  {
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    sub_1402AFC00((ULONG_PTR)v1);
  }
  else
  {
    if ( v6 )
      __fastfail(0xEu);
    v7 = *(_QWORD *)&Privileges->PrivilegeCount;
    if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) != Privileges
      || (Luid = (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid, *Luid != Privileges) )
    {
      __fastfail(3u);
    }
    *Luid = (PPRIVILEGE_SET)v7;
    *(_QWORD *)(v7 + 8) = Luid;
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    sub_1402AFC00((ULONG_PTR)v1);
    sub_140863DA8(Privileges);
    SeFreePrivileges(Privileges);
  }
}
