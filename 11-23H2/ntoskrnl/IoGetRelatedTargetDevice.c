/*
 * XREFs of IoGetRelatedTargetDevice @ 0x14079478C
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x1407946B0 (FsRtlNotifyVolumeEventEx.c)
 *     PiPagePathSetState @ 0x140853F48 (PiPagePathSetState.c)
 *     NtSetVolumeInformationFile @ 0x140881B10 (NtSetVolumeInformationFile.c)
 *     NtGetDevicePowerState @ 0x14098B480 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x140322928 (PnpGetRelatedTargetDevice.c)
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
