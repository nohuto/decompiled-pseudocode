/*
 * XREFs of ?SetFrameworkKind@UwpWindowWrapperBase@@UEAAJW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A20E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A04F0 (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetFrameworkKind(__int64 a1, int a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 264) + 208LL))(*(_QWORD *)(a1 + 264), &SRWLock);
  *(_DWORD *)(a1 + 452) = a2;
  UwpWindowReadyState::FrameworkKindChanged((UwpWindowReadyState *)(a1 + 344), a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
