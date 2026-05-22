/*
 * XREFs of ??1Visual@Composition@UI@Windows@@UEAA@XZ @ 0x1801116FC
 * Callers:
 *     ??_EInteropCursorVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18015C320 (--_EInteropCursorVisual@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 */

void __fastcall Windows::UI::Composition::Visual::~Visual(Windows::UI::Composition::Visual *this)
{
  char *v2; // rcx
  __int64 v3; // rdx

  v2 = (char *)*((_QWORD *)this + 36);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v3);
}
