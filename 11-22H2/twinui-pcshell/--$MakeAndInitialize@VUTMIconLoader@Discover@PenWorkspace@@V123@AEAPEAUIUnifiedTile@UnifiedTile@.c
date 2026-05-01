/*
 * XREFs of ??$MakeAndInitialize@VUTMIconLoader@Discover@PenWorkspace@@V123@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVUTMIconLoader@Discover@PenWorkspace@@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1804936D8
 * Callers:
 *     ?RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180493CF0 (-RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@S.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18012F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1804937A0 (--4-$ComPtr@UIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMIconLoader,PenWorkspace::Discover::UTMIconLoader,WindowsInternal::Shell::UnifiedTile::IUnifiedTile * &>(
        Microsoft::WRL::FtmBase **a1,
        _QWORD *a2)
{
  unsigned int v4; // ebx
  Microsoft::WRL::FtmBase *v5; // rax
  Microsoft::WRL::FtmBase *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL::FtmBase *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (Microsoft::WRL::FtmBase *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>(v5);
    *(_QWORD *)v6 = &PenWorkspace::Discover::UTMIconLoader::`vftable';
    *((_QWORD *)v6 + 5) = 0LL;
    v9 = v6;
    if ( *a2 )
    {
      Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTile>::operator=((char *)v6 + 40, *a2);
      (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
    }
    else
    {
      v4 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\iconloader.cpp",
        (const char *)0x80004003LL);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
