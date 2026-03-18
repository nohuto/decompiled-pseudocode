/*
 * XREFs of ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800AE470
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180014520 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800260CC (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x1800A0770 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1800A15CC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x1800A2018 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x1800AE3F4 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x1800E4010 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1802B02AC (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802B0890 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802B2830 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802B2D20 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802B2FF0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 *     ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802B3050 (-UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x1800BCEBC (--1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E359C (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ @ 0x1800F82E0 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::InitializeCache(CD2DBitmapCache *this, struct ID2DBitmapCacheSource *a2)
{
  CD2DBitmapCache::CCachedBitmap **v2; // r14
  CD2DBitmapCache::CCachedBitmap **i; // rdi
  __int64 v6; // rdi
  char *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  bool v10; // zf
  void (__fastcall ***v11)(_QWORD, GUID *, char *); // rcx
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  CD2DBitmapCache::CCachedBitmap *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CD2DBitmapCache::CCachedBitmap **)*((_QWORD *)this + 7);
  for ( i = (CD2DBitmapCache::CCachedBitmap **)*((_QWORD *)this + 6); i != v2; ++i )
  {
    v13 = *i;
    if ( *i )
    {
      CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(*i);
      operator delete(v13, 0x10uLL);
    }
  }
  *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
  v6 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
  {
    v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  if ( v6 )
  {
    v8 = v6 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((char *)this + 32);
  v9 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v9 )
    CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease();
  v10 = *((_QWORD *)this + 3) == 0LL;
  *((_BYTE *)this + 72) = 0;
  if ( !v10 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((char *)this + 32);
    v11 = (void (__fastcall ***)(_QWORD, GUID *, char *))(*((_QWORD *)this + 3)
                                                        + 8LL
                                                        + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL));
    (**v11)(v11, &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5, (char *)this + 32);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3)) )
    {
      v15 = 0LL;
      v12 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 3)
                                                            + 8LL
                                                            + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL));
      if ( (**v12)(v12, &IID_IWICDecoderBitmapSource, &v15) >= 0 )
      {
        v14 = v15;
        *((_BYTE *)this + 72) = 1;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
}
