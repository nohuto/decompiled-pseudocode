/*
 * XREFs of ?EnsurePositionOffset@CTaskWindow@@UEAAJXZ @ 0x18014A0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CTaskWindow::EnsurePositionOffset(CTaskWindow *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
    *((_QWORD *)this + 6),
    &GUID_9230a21d_831d_414f_87f1_f0131a16a75a,
    &v4);
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v1;
}
