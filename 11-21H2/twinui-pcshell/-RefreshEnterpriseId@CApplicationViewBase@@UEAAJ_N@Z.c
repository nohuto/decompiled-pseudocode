/*
 * XREFs of ?RefreshEnterpriseId@CApplicationViewBase@@UEAAJ_N@Z @ 0x18013AE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::RefreshEnterpriseId(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  v5 = this - 3;
  if ( a2 )
    LOBYTE(v5[7].Ptr) = 1;
  v6 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 64))(v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v6);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)v7);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v7;
}
