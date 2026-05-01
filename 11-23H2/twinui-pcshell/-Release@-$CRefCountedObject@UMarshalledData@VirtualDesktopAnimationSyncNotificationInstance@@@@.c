/*
 * XREFs of ?Release@?$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@UEAAKXZ @ 0x180608BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1MarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@QEAA@XZ @ 0x180608760 (--1MarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@QEAA@XZ.c)
 */

__int64 __fastcall CRefCountedObject<VirtualDesktopAnimationSyncNotificationInstance::MarshalledData>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 12);
  if ( !v2 && a1 )
  {
    VirtualDesktopAnimationSyncNotificationInstance::MarshalledData::~MarshalledData((VirtualDesktopAnimationSyncNotificationInstance::MarshalledData *)(a1 + 2));
    operator delete((void *)a1);
  }
  return v2;
}
