/*
 * XREFs of ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x1800A11D4
 * Callers:
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x18009EE00 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009EC60 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 */

void __fastcall CAccentAcrylicBlurBehind::ReleaseResources(CAccentAcrylicBlurBehind *this)
{
  __int64 v2; // rbx
  void (__fastcall *v3)(__int64, __int64 *); // rdi
  CBaseObject *v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 38);
  *((_DWORD *)this + 94) = 0;
  v6 = 0LL;
  if ( *((_QWORD *)this + 40)
    && (int)Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 40,
              &v6) >= 0 )
  {
    v5 = 0LL;
    v2 = v6;
    v3 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 360LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
    v3(v2, &v5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
  v4 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 36) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
}
