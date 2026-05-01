/*
 * XREFs of ?SetWindowBand@WindowWrapperBase@@UEAAJK@Z @ 0x18013FC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowWrapperBase::SetWindowBand(WindowWrapperBase *this, unsigned int a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35), &SRWLock);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  *((_DWORD *)this + 127) = a2;
  v4 = *((int *)this + 74);
  if ( *((_DWORD *)this + 74) )
  {
    if ( a2 )
    {
      v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 152LL))(
                       *((_QWORD *)this + 35),
                       &v7);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, v4, 0LL, a2);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
