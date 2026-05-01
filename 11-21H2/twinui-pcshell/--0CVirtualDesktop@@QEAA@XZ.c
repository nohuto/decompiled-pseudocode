/*
 * XREFs of ??0CVirtualDesktop@@QEAA@XZ @ 0x18011310C
 * Callers:
 *     ?CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180110A5C (-CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock.c)
 * Callees:
 *     ??0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z @ 0x18011318C (--0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z.c)
 */

CVirtualDesktop *__fastcall CVirtualDesktop::CVirtualDesktop(CVirtualDesktop *this)
{
  RPC_STATUS v2; // eax
  struct _GUID v3; // xmm0
  UUID Uuid; // [rsp+20h] [rbp-28h] BYREF
  struct _GUID v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = UuidCreate(&Uuid);
  if ( !v2 || v2 == 1824 )
  {
    v3 = Uuid;
  }
  else
  {
    v3 = GUID_NULL;
    Uuid = GUID_NULL;
  }
  v6 = v3;
  CVirtualDesktop::CVirtualDesktop(this, &v6);
  *(_QWORD *)this = &CVirtualDesktop::`vftable';
  *((_QWORD *)this + 1) = &CVirtualDesktop::`vftable'{for `IVirtualDesktop'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktop,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &CVirtualDesktop::`vftable'{for `IVirtualDesktopPrivate'};
  *((_QWORD *)this + 4) = &CVirtualDesktop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
