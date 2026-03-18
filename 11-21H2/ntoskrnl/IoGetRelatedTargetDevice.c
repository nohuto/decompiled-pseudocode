/*
 * XREFs of IoGetRelatedTargetDevice @ 0x14074C9D8
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x14074C800 (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x14084BB98 (PiPagePathSetState.c)
 *     NtGetDevicePowerState @ 0x140997410 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x1402D2E74 (PnpGetRelatedTargetDevice.c)
 */

__int64 __fastcall IoGetRelatedTargetDevice(struct _FILE_OBJECT *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = PnpGetRelatedTargetDevice(a1, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = *(_QWORD *)(v4 + 32);
  }
  return result;
}
