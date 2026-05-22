/*
 * XREFs of ??1CaptureControllerBase@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180122E24
 * Callers:
 *     ??_GCaptureController@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801235A0 (--_GCaptureController@Internal@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GCaptureControllerBase@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801235F0 (--_GCaptureControllerBase@Internal@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_ESharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124580 (--_ESharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::~CaptureControllerBase(
        Windows::UI::Composition::Internal::CaptureControllerBase *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 22);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)this + 19,
    v2);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v3);
}
