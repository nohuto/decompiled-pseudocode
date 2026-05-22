/*
 * XREFs of ??1AnimationPropertyInfo@Composition@UI@Windows@@UEAA@XZ @ 0x180061FDC
 * Callers:
 *     ??_EAnimationPropertyInfo@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180062030 (--_EAnimationPropertyInfo@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::AnimationPropertyInfo::~AnimationPropertyInfo(
        Windows::UI::Composition::AnimationPropertyInfo *this)
{
  __int64 v2; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock((char *)this + 168);
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v2);
}
