/*
 * XREFs of ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18001AA84
 * Callers:
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18001A79C (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateFormatConverterToPBGRA(struct IWICBitmapSource *a1, struct IWICBitmap **a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 80LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v6 = v5(v4, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = (unsigned int)v6;
    v12 = 17LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)v11);
    goto LABEL_6;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v14 + 64LL))(
         v14,
         a1,
         &GUID_WICPixelFormat32bppPBGRA,
         0LL,
         0LL,
         0LL,
         0);
  v7 = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
    v12 = 26LL;
    goto LABEL_11;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 30)
                                                                                 + 144LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
         v14,
         2LL,
         a2);
  v7 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 28LL;
    goto LABEL_11;
  }
  if ( !*a2 )
  {
    v7 = -2147024882;
    v11 = 2147942414LL;
    v12 = 29LL;
    goto LABEL_11;
  }
  v7 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v7;
}
