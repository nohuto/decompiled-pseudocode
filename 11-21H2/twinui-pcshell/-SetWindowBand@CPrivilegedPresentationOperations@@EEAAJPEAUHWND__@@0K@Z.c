/*
 * XREFs of ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x18012B140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowBand(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        HWND a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  bool i; // zf
  signed __int32 v9; // eax
  wil::details *v10; // rcx
  unsigned int LastErrorFailHr; // edi
  signed __int32 v12; // edx

  v4 = *((_QWORD *)this + 6);
  for ( i = v4 == 0; !i; i = v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 36), v9 + 1, v9) )
  {
    v9 = *(_DWORD *)(v4 + 36);
    if ( v9 == 0x7FFFFFFF )
      break;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v4 + 48));
  EnableIAMAccess(*(_QWORD *)(v4 + 40), 1LL);
  if ( (unsigned int)SetWindowBand(a2, a3, a4) )
    LastErrorFailHr = 0;
  else
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v10);
  EnableIAMAccess(*(_QWORD *)(v4 + 40), 0LL);
  ReleaseSRWLockExclusive((PSRWLOCK)(v4 + 48));
  do
    v12 = *(_DWORD *)(v4 + 36);
  while ( v12 != 0x7FFFFFFF && v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 36), v12 - 1, v12) );
  if ( v12 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return LastErrorFailHr;
}
