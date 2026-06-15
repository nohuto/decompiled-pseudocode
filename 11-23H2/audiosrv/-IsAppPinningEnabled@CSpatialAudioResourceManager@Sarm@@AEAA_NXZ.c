/*
 * XREFs of ?IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x1800443D0
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1800441C0 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x180044468 (-IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

bool __fastcall Sarm::CSpatialAudioResourceManager::IsAppPinningEnabled(Sarm::CSpatialAudioResourceManager *this)
{
  bool v1; // bl
  BOOL v3; // [rsp+30h] [rbp-58h] BYREF
  CLSID pClsid; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+48h] [rbp-40h] BYREF
  BOOL *v6; // [rsp+68h] [rbp-20h]
  int v7; // [rsp+70h] [rbp-18h]
  int v8; // [rsp+74h] [rbp-14h]

  v1 = 0;
  if ( Sarm::CSpatialAudioResourceManager::IsHolographicSpaceAvailable(this) )
    v1 = CoGetPSClsid(&GUID_5849e670_4969_44de_8904_75ed892b627e, &pClsid) >= 0;
  if ( (unsigned int)dword_1801CD178 > 4 )
  {
    v8 = 0;
    v3 = v1;
    v7 = 4;
    v6 = &v3;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801CD178,
      (unsigned __int8 *)dword_180194883,
      0LL,
      0LL,
      3u,
      &v5);
  }
  return v1;
}
