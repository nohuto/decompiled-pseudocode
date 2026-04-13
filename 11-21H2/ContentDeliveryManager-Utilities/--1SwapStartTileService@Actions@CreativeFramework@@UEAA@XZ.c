/*
 * XREFs of ??1SwapStartTileService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800BD674
 * Callers:
 *     ??_GSwapStartTileService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800BDF20 (--_GSwapStartTileService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CreativeFramework::Actions::SwapStartTileService::~SwapStartTileService(
        CreativeFramework::Actions::SwapStartTileService *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 33);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *((_QWORD *)this + 32) >= 8uLL )
    operator delete(*((void **)this + 29));
  *((_QWORD *)this + 32) = 7LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_WORD *)this + 116) = 0;
  if ( *((_QWORD *)this + 28) >= 8uLL )
    operator delete(*((void **)this + 25));
  *((_QWORD *)this + 28) = 7LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_WORD *)this + 100) = 0;
  if ( *((_QWORD *)this + 24) >= 8uLL )
    operator delete(*((void **)this + 21));
  *((_QWORD *)this + 24) = 7LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_WORD *)this + 84) = 0;
  if ( *((_QWORD *)this + 20) >= 8uLL )
    operator delete(*((void **)this + 17));
  *((_QWORD *)this + 20) = 7LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_WORD *)this + 68) = 0;
  if ( *((_QWORD *)this + 16) >= 8uLL )
    operator delete(*((void **)this + 13));
  *((_QWORD *)this + 16) = 7LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_WORD *)this + 52) = 0;
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
