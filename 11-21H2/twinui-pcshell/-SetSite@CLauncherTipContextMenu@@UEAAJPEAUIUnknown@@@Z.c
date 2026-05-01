/*
 * XREFs of ?SetSite@CLauncherTipContextMenu@@UEAAJPEAUIUnknown@@@Z @ 0x180171E30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     GetThreadUILanguage_0 @ 0x18018A13C (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLauncherTipContextMenu::SetSite(CLauncherTipContextMenu *this, struct IUnknown *a2)
{
  bool v4; // di
  LANGID ThreadUILanguage_0; // ax
  __int64 *v7; // rdi
  HMENU v8; // rcx
  HMENU v9; // rcx
  HWND v10; // rcx

  if ( *((_QWORD *)this + 2) )
  {
    v4 = 0;
    if ( !a2 )
    {
      v7 = (__int64 *)((char *)this + 136);
      if ( *((_QWORD *)this + 17) )
      {
        *((_BYTE *)this + 322) = 1;
        (*(void (__fastcall **)(__int64, GUID *, __int64, _QWORD))(*(_QWORD *)*v7 + 32LL))(*v7, &GUID_NULL, -1LL, 0LL);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v7);
      }
      v8 = (HMENU)*((_QWORD *)this + 41);
      if ( v8 )
      {
        DestroyMenu(v8);
        *((_QWORD *)this + 41) = 0LL;
      }
      v9 = (HMENU)*((_QWORD *)this + 42);
      if ( v9 )
      {
        DestroyMenu(v9);
        *((_QWORD *)this + 42) = 0LL;
      }
      v10 = (HWND)*((_QWORD *)this + 16);
      v4 = 0;
      if ( v10 )
      {
        DestroyWindow(v10);
        *((_QWORD *)this + 16) = 0LL;
      }
    }
  }
  else
  {
    v4 = a2 != 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 2, (__int64)a2);
  if ( v4 )
  {
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    *((_BYTE *)this + 344) = (unsigned int)IsBiDiLocale(ThreadUILanguage_0) != 0;
  }
  return 0LL;
}
