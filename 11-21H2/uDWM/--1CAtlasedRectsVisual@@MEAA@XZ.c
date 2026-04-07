/*
 * XREFs of ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18002477C
 * Callers:
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x18000E5B0 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x18000FCB0 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??1CButton@@MEAA@XZ @ 0x18001FA0C (--1CButton@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::~CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &CAtlasedRectsVisual::`vftable';
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 68); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 31) + 8 * i);
    *(_QWORD *)(v3 + 80) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
  }
  *((_DWORD *)this + 68) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 248, 8u);
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 35));
  if ( *((_QWORD *)this + 31) != *((_QWORD *)this + 32) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 31) = 0LL;
  }
  CVisual::~CVisual(this);
}
