/*
 * XREFs of ??1CompositionPath@Composition@UI@Windows@@MEAA@XZ @ 0x180012994
 * Callers:
 *     ??_GCompositionPath@Composition@UI@Windows@@MEAAPEAXI@Z @ 0x180012950 (--_GCompositionPath@Composition@UI@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionPath::~CompositionPath(
        Windows::UI::Composition::CompositionPath *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &Windows::UI::Composition::CompositionPath::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 11) - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL2::NestableRuntimeClass::~NestableRuntimeClass(this);
}
