/*
 * XREFs of ??1LaunchUriService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800C39F0
 * Callers:
 *     ??_GLaunchUriService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800C3D40 (--_GLaunchUriService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CreativeFramework::Actions::LaunchUriService::~LaunchUriService(
        CreativeFramework::Actions::LaunchUriService *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *((_QWORD *)this + 12) >= 8uLL )
    operator delete(*((void **)this + 9));
  *((_QWORD *)this + 12) = 7LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 36) = 0;
  if ( *((_QWORD *)this + 8) >= 8uLL )
    operator delete(*((void **)this + 5));
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( *((_QWORD *)this + 4) >= 8uLL )
    operator delete(*((void **)this + 1));
  *((_QWORD *)this + 4) = 7LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 4) = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
