/*
 * XREFs of ?SetNavigationLevelOverride@UwpWindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1804F1B20
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A06F0 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall UwpWindowWrapperBase::SetNavigationLevelOverride(__int64 a1, int a2)
{
  int v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  char v7; // bl
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 264) + 208LL))(*(_QWORD *)(a1 + 264), &SRWLock);
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 164) &= 0xFFFFFFC7;
    goto LABEL_10;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v6 = *(_DWORD *)(a1 + 164);
    if ( (v6 & 0x18) != 0 )
    {
      v7 = 0;
      goto LABEL_11;
    }
    v5 = v6 | 8;
    goto LABEL_7;
  }
  if ( v4 == 1 )
  {
    v5 = *(_DWORD *)(a1 + 164) & 0xFFFFFFE7 | 0x10;
LABEL_7:
    *(_DWORD *)(a1 + 164) = v5;
  }
LABEL_10:
  UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((UwpWindowWrapperBase *)(a1 - 16));
  v7 = 1;
LABEL_11:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v7;
}
