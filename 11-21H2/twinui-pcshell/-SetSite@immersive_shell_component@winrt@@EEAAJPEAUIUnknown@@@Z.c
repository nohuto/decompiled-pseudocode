/*
 * XREFs of ?SetSite@immersive_shell_component@winrt@@EEAAJPEAUIUnknown@@@Z @ 0x180138470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::immersive_shell_component::SetSite(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rdi
  int AgileReference; // eax
  void *v6; // rax
  PVOID v7; // rcx
  PVOID Ptr; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  if ( a2 )
  {
    v12 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_00000000_0000_0000_c000_000000000046, a2, &v12);
    if ( AgileReference < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x68D,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)AgileReference,
        v10);
    v6 = v12;
    v7 = 0LL;
    v12 = 0LL;
    Ptr = this[9].Ptr;
    this[9].Ptr = v6;
    if ( Ptr )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      v7 = v12;
    }
  }
  else
  {
    v7 = this[9].Ptr;
    this[9].Ptr = 0LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
