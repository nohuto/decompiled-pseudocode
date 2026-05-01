/*
 * XREFs of ?RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1803BADB0
 * Callers:
 *     ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1803B5E64 (--$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VUTMIconLoader@Discover@PenWorkspace@@V123@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVUTMIconLoader@Discover@PenWorkspace@@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1803BA798 (--$MakeAndInitialize@VUTMIconLoader@Discover@PenWorkspace@@V123@AEAPEAUIUnifiedTile@UnifiedTile@.c)
 *     ??4?$ComPtr@UIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1803BA860 (--4-$ComPtr@UIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::RuntimeClassInitialize(
        PenWorkspace::Discover::UTMRecentItem *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  Microsoft::WRL::FtmBase *v5; // rbx
  Microsoft::WRL::FtmBase *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v9; // [rsp+38h] [rbp+10h] BYREF
  Microsoft::WRL::FtmBase *v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTile>::operator=(
      (__int64 *)this + 7,
      (__int64)a2);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v10);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMIconLoader,PenWorkspace::Discover::UTMIconLoader,WindowsInternal::Shell::UnifiedTile::IUnifiedTile * &>(
           &v10,
           &v9);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v5 = v10;
      v6 = (Microsoft::WRL::FtmBase *)*((_QWORD *)this + 6);
      if ( v6 != v10 )
      {
        if ( v10 )
        {
          (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v10 + 8LL))(v10);
          v6 = (Microsoft::WRL::FtmBase *)*((_QWORD *)this + 6);
        }
        *((_QWORD *)this + 6) = v5;
        if ( v6 )
          (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v6 + 16LL))(v6);
      }
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
        (const char *)(unsigned int)v4);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    v3 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
      (const char *)0x80004003LL);
  }
  return v3;
}
