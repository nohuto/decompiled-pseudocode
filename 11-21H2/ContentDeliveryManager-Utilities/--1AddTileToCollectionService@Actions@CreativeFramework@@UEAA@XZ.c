/*
 * XREFs of ??1AddTileToCollectionService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800BD29C
 * Callers:
 *     ??_EAddTileToCollectionService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800BDEA0 (--_EAddTileToCollectionService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::~AddTileToCollectionService(
        CreativeFramework::Actions::AddTileToCollectionService *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 22);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *((_QWORD *)this + 21) >= 8uLL )
    operator delete(*((void **)this + 18));
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  if ( *((_QWORD *)this + 17) >= 8uLL )
    operator delete(*((void **)this + 14));
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 56) = 0;
  if ( *((_QWORD *)this + 13) >= 8uLL )
    operator delete(*((void **)this + 10));
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 40) = 0;
  if ( *((_QWORD *)this + 9) >= 8uLL )
    operator delete(*((void **)this + 6));
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 24) = 0;
  if ( *((_QWORD *)this + 5) >= 8uLL )
    operator delete(*((void **)this + 2));
  *((_QWORD *)this + 5) = 7LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 8) = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
