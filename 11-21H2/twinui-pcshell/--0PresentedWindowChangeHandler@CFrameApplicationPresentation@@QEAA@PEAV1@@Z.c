/*
 * XREFs of ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x18007735C
 * Callers:
 *     _lambda_3299b7567c8e16a49084b1350d61b7f6_::operator() @ 0x1800773D4 (_lambda_3299b7567c8e16a49084b1350d61b7f6_--operator().c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x180137454 (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CFrameApplicationPresentation::PresentedWindowChangeHandler *__fastcall CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
        CFrameApplicationPresentation::PresentedWindowChangeHandler *this,
        struct CFrameApplicationPresentation *a2)
{
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  v3 = (char *)(*(__int64 (__fastcall **)(struct CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)a2 + 64LL))(
                 a2,
                 &v8);
  v4 = 0LL;
  if ( &v9 != v3 )
  {
    v4 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0LL;
  }
  v5 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return this;
}
