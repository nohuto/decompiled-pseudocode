/*
 * XREFs of ?SetPersistingStateName@WindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z @ 0x1804EC900
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800EBDE4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapperBase::SetPersistingStateName(WindowWrapperBase *this, HSTRING a2)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  HSTRING v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33), &SRWLock);
  v3 = Windows::Internal::String::Initialize((HSTRING *)this + 68, &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E6,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      v4);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
