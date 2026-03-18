/*
 * XREFs of ??1CWindowBackgroundTreatment@@EEAA@XZ @ 0x1800D4844
 * Callers:
 *     ??_ECWindowBackgroundTreatment@@EEAAPEAXI@Z @ 0x1800D4800 (--_ECWindowBackgroundTreatment@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800D530C (-InvalidateBitmapRealization@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800D5368 (-InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CWindowBackgroundTreatment::~CWindowBackgroundTreatment(CWindowBackgroundTreatment *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CWindowBackgroundTreatment::`vftable'{for `IDeviceResourceNotify'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  CWindowBackgroundTreatment::InvalidateBitmapRealization(this);
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(this);
  v2 = *((_QWORD *)this + 41);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 43) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 80);
  CResource::~CResource(this);
}
