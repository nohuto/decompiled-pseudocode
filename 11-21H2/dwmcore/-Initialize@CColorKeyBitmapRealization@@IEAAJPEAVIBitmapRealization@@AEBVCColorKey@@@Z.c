/*
 * XREFs of ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1802A2078
 * Callers:
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802A1BA0 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800681EC (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x1802A8600 (-Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::Initialize(
        CColorKeyBitmapRealization *this,
        struct IBitmapRealization *a2,
        const struct CColorKey *a3)
{
  struct CColorKeyBitmap **v3; // rbx
  __int64 v5; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi

  v3 = (struct CColorKeyBitmap **)((char *)this + 104);
  v5 = *((_QWORD *)this + 13);
  *v3 = 0LL;
  if ( v5 )
  {
    v8 = *(int *)(*(_QWORD *)(v5 + 8) + 4LL) + v5 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = CColorKeyBitmap::Create(a2, a3, v3);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x2Bu);
  else
    CD2DBitmapCache::InitializeCache(this, *v3);
  return v11;
}
