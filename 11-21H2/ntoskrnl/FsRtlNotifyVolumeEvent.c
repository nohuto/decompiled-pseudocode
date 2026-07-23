/*
 * XREFs of FsRtlNotifyVolumeEvent @ 0x1407FC020
 * Callers:
 *     sub_14074BE9C @ 0x14074BE9C (sub_14074BE9C.c)
 *     sub_1407FBE14 @ 0x1407FBE14 (sub_1407FBE14.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     FsRtlNotifyVolumeEventEx @ 0x14074C800 (FsRtlNotifyVolumeEventEx.c)
 */

NTSTATUS __stdcall FsRtlNotifyVolumeEvent(PFILE_OBJECT FileObject, ULONG EventCode)
{
  struct _TARGET_DEVICE_CUSTOM_NOTIFICATION v3; // [rsp+20h] [rbp-38h] BYREF

  memset(&v3.Event, 0, 28);
  *(_DWORD *)v3.CustomDataBuffer = 0;
  *(_DWORD *)&v3.Version = 2359297;
  v3.NameBufferOffset = -1;
  return FsRtlNotifyVolumeEventEx(FileObject, EventCode, &v3);
}
