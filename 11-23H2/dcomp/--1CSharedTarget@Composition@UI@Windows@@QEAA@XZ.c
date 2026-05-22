/*
 * XREFs of ??1CSharedTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18010DA08
 * Callers:
 *     ?Release@CSharedTarget@Composition@UI@Windows@@UEAAKXZ @ 0x18010DB70 (-Release@CSharedTarget@Composition@UI@Windows@@UEAAKXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UIDCompositionDesktopDevicePartner@@@@YAXAEAPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x1800162F0 (--$ReleaseInterface@UIDCompositionDesktopDevicePartner@@@@YAXAEAPEAUIDCompositionDesktopDevicePa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CSharedTarget::~CSharedTarget(Windows::UI::Composition::CSharedTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &Windows::UI::Composition::CSharedTarget::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  ReleaseInterface<IDCompositionDesktopDevicePartner>((__int64 *)this + 4);
  CloseHandle(*((HANDLE *)this + 2));
}
