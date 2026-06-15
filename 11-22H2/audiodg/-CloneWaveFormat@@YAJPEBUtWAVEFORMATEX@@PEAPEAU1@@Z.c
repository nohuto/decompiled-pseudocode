/*
 * XREFs of ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400210E4
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x1400074C0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140013870 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140020F80 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140021070 (-GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400210A0 (-GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004F5DC (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14005F840 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x1400682EC (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 *     ?GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z @ 0x14006E9A0 (-GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x14006EB80 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ?GetFrameFormat@CBridgeSourceEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140079A10 (-GetFrameFormat@CBridgeSourceEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140079CDC (-RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMed.c)
 *     ?GetFrameFormat@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14009D6A0 (-GetFrameFormat@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 */

__int64 __fastcall CloneWaveFormat(const struct tWAVEFORMATEX *Src, struct tWAVEFORMATEX **a2)
{
  __int64 cbSize; // rsi
  struct tWAVEFORMATEX *v5; // rax
  unsigned int v6; // ebx
  struct tWAVEFORMATEX *v7; // rdi
  __int64 result; // rax

  cbSize = Src->cbSize;
  v5 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v6 = 0;
  v7 = v5;
  if ( v5 )
    memcpy_0(v5, Src, cbSize + 18);
  else
    v6 = -2147024882;
  result = v6;
  *a2 = v7;
  return result;
}
