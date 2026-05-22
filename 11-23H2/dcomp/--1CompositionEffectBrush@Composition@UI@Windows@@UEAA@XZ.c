/*
 * XREFs of ??1CompositionEffectBrush@Composition@UI@Windows@@UEAA@XZ @ 0x180061CE0
 * Callers:
 *     ??_GCompositionEffectBrush@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180061D50 (--_GCompositionEffectBrush@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180085594 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionEffectBrush::~CompositionEffectBrush(
        Windows::UI::Composition::CompositionEffectBrush *this)
{
  char *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  __int64 v4; // rdx
  char *v5; // rbx

  v2 = (char *)*((_QWORD *)this + 22);
  if ( v2 )
  {
    v5 = v2 - 8;
    `vector destructor iterator'(
      v2,
      8uLL,
      *((_QWORD *)v2 - 1),
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBrush>::~RefPtr<Windows::UI::Composition::CompositionBrush>);
    operator delete(v5, 8LL * *(_QWORD *)v5 + 8);
  }
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 21);
  if ( v3 )
  {
    *((_QWORD *)this + 21) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v4);
}
