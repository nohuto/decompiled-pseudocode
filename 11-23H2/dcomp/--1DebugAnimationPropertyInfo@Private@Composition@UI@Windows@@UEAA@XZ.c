/*
 * XREFs of ??1DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@UEAA@XZ @ 0x18019C930
 * Callers:
 *     ??_EDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18019CCD0 (--_EDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::Private::DebugAnimationPropertyInfo::~DebugAnimationPropertyInfo(
        Windows::UI::Composition::Private::DebugAnimationPropertyInfo *this)
{
  __int64 v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  __int64 v4; // rdx

  v2 = *((_QWORD *)this + 22);
  if ( v2 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  WindowsDeleteString(*((HSTRING *)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    *((_QWORD *)this + 18) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v4);
}
