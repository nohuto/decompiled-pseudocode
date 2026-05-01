/*
 * XREFs of ??$MakeAndInitialize@VFrameWrapper@@UIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameWrapper@@$$QEAPEAUIApplicationFrame@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x18030A0C8
 * Callers:
 *     ?CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x18030A3F0 (-CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0FrameWrapper@@QEAA@XZ @ 0x18030A25C (--0FrameWrapper@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x18030AB5C (-RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOpe.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<FrameWrapper,IApplicationFrameWrapper,IApplicationFrame *,IPrivilegedPresentationOperations *>(
        _QWORD *a1,
        struct IApplicationFrame **a2,
        struct IPrivilegedPresentationOperations **a3)
{
  FrameWrapper *v6; // rax
  int v7; // esi
  FrameWrapper *v8; // rbx

  *a1 = 0LL;
  v6 = (FrameWrapper *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = FrameWrapper::FrameWrapper(v6);
    v7 = FrameWrapper::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(FrameWrapper *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_1404252c_1e59_462d_b5c1_9cbe30e85f19,
             a1);
    if ( v8 )
      (*(void (__fastcall **)(FrameWrapper *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
