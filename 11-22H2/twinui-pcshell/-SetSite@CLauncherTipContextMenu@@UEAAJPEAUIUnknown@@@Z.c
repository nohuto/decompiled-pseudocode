/*
 * XREFs of ?SetSite@CLauncherTipContextMenu@@UEAAJPEAUIUnknown@@@Z @ 0x180186C70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800E1C0C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLauncherTipContextMenu::SetSite(CLauncherTipContextMenu *this, struct IUnknown *a2)
{
  __int64 *v2; // rbp
  char v5; // di
  LANGID ThreadUILanguage_0; // ax
  __int64 *v8; // r14
  HMENU v9; // rcx
  HMENU v10; // rcx
  HWND v11; // rcx

  v2 = (__int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || !a2 )
  {
    v5 = 0;
    if ( *v2 && !a2 )
    {
      v8 = (__int64 *)((char *)this + 136);
      if ( *((_QWORD *)this + 17) )
      {
        *((_BYTE *)this + 322) = 1;
        (*(void (__fastcall **)(__int64, GUID *, __int64, _QWORD))(*(_QWORD *)*v8 + 32LL))(*v8, &GUID_NULL, -1LL, 0LL);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v8);
      }
      v9 = (HMENU)*((_QWORD *)this + 41);
      if ( v9 )
      {
        DestroyMenu(v9);
        *((_QWORD *)this + 41) = 0LL;
      }
      v10 = (HMENU)*((_QWORD *)this + 42);
      if ( v10 )
      {
        DestroyMenu(v10);
        *((_QWORD *)this + 42) = 0LL;
      }
      v11 = (HWND)*((_QWORD *)this + 16);
      v5 = 0;
      if ( v11 )
      {
        DestroyWindow(v11);
        *((_QWORD *)this + 16) = 0LL;
      }
    }
  }
  else
  {
    v5 = 1;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=(v2, (__int64)a2);
  if ( v5 )
  {
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    *((_BYTE *)this + 344) = (unsigned int)IsBiDiLocale(ThreadUILanguage_0) != 0;
  }
  return 0LL;
}
