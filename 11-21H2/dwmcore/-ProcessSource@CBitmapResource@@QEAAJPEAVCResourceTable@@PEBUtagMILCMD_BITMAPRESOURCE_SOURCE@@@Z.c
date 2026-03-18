/*
 * XREFs of ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x1800663FC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800664C0 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapRealization@@@Z @ 0x180087F2C (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapReal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x180115F4A (-GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180277214 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CBitmapResource::ProcessSource(
        CBitmapResource *this,
        struct CResourceTable *a2,
        struct IWICBitmapSource **a3)
{
  struct IBitmapRealization **v3; // rsi
  __int64 v5; // r8
  struct IBitmapRealization *v7; // rdx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  struct IWICBitmapSource *v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int DefaultDevice; // eax
  unsigned int v16; // ecx
  struct IBitmapRealization *StockTransparentBitmap; // rax
  CD3DDevice *v18; // rcx
  CD3DDevice *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  v3 = (struct IBitmapRealization **)((char *)this + 72);
  v5 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v5 )
  {
    v13 = *(int *)(*(_QWORD *)(v5 + 8) + 4LL) + v5 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( a3[1] )
  {
    v7 = *v3;
    *v3 = 0LL;
    if ( v7 )
    {
      v14 = (__int64)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v8 = CWICBitmapRealization::Create(a3[1], v3);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18u, 0LL);
  }
  else
  {
    v19 = 0LL;
    DefaultDevice = CDeviceManager::GetDefaultDevice(this, &v19);
    v10 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, DefaultDevice, 0x1Fu, 0LL);
      v18 = v19;
      if ( !v19 )
        goto LABEL_8;
    }
    else
    {
      StockTransparentBitmap = CD3DDevice::GetStockTransparentBitmap(v19);
      wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(v3, StockTransparentBitmap);
      if ( !v19 )
        goto LABEL_8;
      v18 = v19;
    }
    CD3DDevice::Release(v18);
  }
LABEL_8:
  v11 = a3[1];
  if ( v11 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v11->lpVtbl->Release)(v11);
  (*(void (__fastcall **)(CBitmapResource *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return v10;
}
