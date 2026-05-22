/*
 * XREFs of ??$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGesturesProcessor@@@Z @ 0x18003ED54
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18003C0B4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ @ 0x180038DE4 (-RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ.c)
 *     ??0ShellGesturesProcessor@@QEAA@XZ @ 0x18003EDE0 (--0ShellGesturesProcessor@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellGesturesProcessor,ShellGesturesProcessor,>(
        ShellGesturesProcessor **a1)
{
  ShellGesturesProcessor *v2; // rax
  ShellGesturesProcessor *v3; // rdi
  int v4; // ebx
  ShellGesturesProcessor *v6; // [rsp+40h] [rbp+8h] BYREF
  ShellGesturesProcessor *v7; // [rsp+48h] [rbp+10h] BYREF
  ShellGesturesProcessor *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (ShellGesturesProcessor *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v6 = v2;
  if ( v2 )
  {
    v8 = v2;
    v3 = ShellGesturesProcessor::ShellGesturesProcessor(v2);
    v6 = v3;
    v7 = 0LL;
    v4 = ShellGesturesProcessor::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v6);
      *a1 = v3;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v6);
      return 0LL;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v7);
  return (unsigned int)v4;
}
