/*
 * XREFs of ??1CAtlasedImage@@MEAA@XZ @ 0x180025EAC
 * Callers:
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18000F0A0 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180020DA0 (--_GCAtlasButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::~CAtlasedImage(CAtlasedImage *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CAtlasedImage::`vftable';
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    *((_QWORD *)this + 11) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
