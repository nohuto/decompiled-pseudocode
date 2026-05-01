/*
 * XREFs of ?GetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x180171520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetSizeConstraintsForDpi(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v8; // rsi
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = this + 6;
  AcquireSRWLockShared(this + 6);
  (*(void (__fastcall **)(PVOID, _QWORD *, _QWORD))(*(_QWORD *)this[28].Ptr + 24LL))(this[28].Ptr, v10, a2);
  if ( a3 )
    *a3 = (struct tagSIZE)v10[0];
  if ( a4 )
    *a4 = (struct tagSIZE)v10[1];
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return 0LL;
}
