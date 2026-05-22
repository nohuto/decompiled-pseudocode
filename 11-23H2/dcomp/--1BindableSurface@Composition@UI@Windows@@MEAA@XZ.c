/*
 * XREFs of ??1BindableSurface@Composition@UI@Windows@@MEAA@XZ @ 0x180061000
 * Callers:
 *     ??1InvalidatableSurface@Composition@UI@Windows@@MEAA@XZ @ 0x180061078 (--1InvalidatableSurface@Composition@UI@Windows@@MEAA@XZ.c)
 *     ??_EBindableSurface@Composition@UI@Windows@@MEAAPEAXI@Z @ 0x180123400 (--_EBindableSurface@Composition@UI@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::BindableSurface::~BindableSurface(
        Windows::UI::Composition::BindableSurface *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  *(_QWORD *)this = &Windows::UI::Composition::BindableSurface::`vftable';
  v2 = *((_QWORD *)this + 16);
  if ( v2 != *((_QWORD *)this + 17) )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 18) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v3);
}
