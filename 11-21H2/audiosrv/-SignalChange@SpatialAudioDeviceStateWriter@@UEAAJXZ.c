/*
 * XREFs of ?SignalChange@SpatialAudioDeviceStateWriter@@UEAAJXZ @ 0x180138460
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18013A5A4 (-SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall SpatialAudioDeviceStateWriter::SignalChange(SpatialAudioDeviceStateWriter *this)
{
  struct _tagpropertykey v2; // [rsp+20h] [rbp-48h] BYREF
  struct tagPROPVARIANT v3; // [rsp+40h] [rbp-28h] BYREF

  memset(&v3, 0, sizeof(v3));
  v3.vt = 2;
  v3.iVal = 0;
  v2.pid = 2;
  v2.fmtid = (GUID)PKEY_SpatialAudio_Signaling_Key;
  return SpatialAudioIO::SetPropertyValue((SpatialAudioDeviceStateWriter *)((char *)this - 568), &v2, &v3);
}
