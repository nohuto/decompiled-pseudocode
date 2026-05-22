/*
 * XREFs of ??$MakeAndInitialize@VCursorProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801B7304
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@CursorProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x180159438 (-RuntimeClassInitialize@CursorProcessor@@QEAAJV-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z.c)
 *     ??0CursorProcessor@@QEAA@XZ @ 0x1801B7D00 (--0CursorProcessor@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CursorProcessor,CursorProcessor,DWMInputRouter *>(
        __int64 **a1,
        __int64 *a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 *v6; // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v9);
    return (unsigned int)v5;
  }
  v6 = (__int64 *)CursorProcessor::CursorProcessor((CursorProcessor *)v4);
  v10 = v6;
  v9 = 0LL;
  v8 = *a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v8);
  v5 = CursorProcessor::RuntimeClassInitialize(v6, &v8);
  if ( v5 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
    goto LABEL_5;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
  *a1 = v6;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  return 0LL;
}
