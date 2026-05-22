/*
 * XREFs of ??$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorSuppressionProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801C4B04
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18003C0B4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x180166A1C (-RuntimeClassInitialize@CursorSuppressionProcessor@@QEAAJV-$ComPtr@UISystemInputRouter@@@WRL@Mic.c)
 *     ??0CursorSuppressionProcessor@@QEAA@XZ @ 0x1801C5488 (--0CursorSuppressionProcessor@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CursorSuppressionProcessor,CursorSuppressionProcessor,DWMInputRouter *>(
        CursorSuppressionProcessor **a1,
        __int64 *a2)
{
  void *v4; // rax
  int v5; // edi
  CursorSuppressionProcessor *v6; // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+50h] [rbp+18h] BYREF
  CursorSuppressionProcessor *v10; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v9);
    return (unsigned int)v5;
  }
  v6 = CursorSuppressionProcessor::CursorSuppressionProcessor((CursorSuppressionProcessor *)v4);
  v10 = v6;
  v9 = 0LL;
  v8 = *a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v8);
  v5 = CursorSuppressionProcessor::RuntimeClassInitialize((__int64)v6, &v8);
  if ( v5 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
    goto LABEL_5;
  }
  if ( v6 )
    (*(void (__fastcall **)(CursorSuppressionProcessor *))(*(_QWORD *)v6 + 8LL))(v6);
  *a1 = v6;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  return 0LL;
}
