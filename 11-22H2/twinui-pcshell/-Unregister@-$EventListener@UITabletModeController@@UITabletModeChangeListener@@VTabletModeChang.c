/*
 * XREFs of ?Unregister@?$EventListener@UITabletModeController@@UITabletModeChangeListener@@VTabletModeChangeRegistration@@@EventRegistrationHelpers@@QEAAXXZ @ 0x18007FA18
 * Callers:
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18007F830 (--1TaskViewHost@@UEAA@XZ.c)
 *     ??1TabletModeChangeListener@@QEAA@XZ @ 0x180562898 (--1TabletModeChangeListener@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>::Unregister(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    return Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v1);
  }
  return result;
}
