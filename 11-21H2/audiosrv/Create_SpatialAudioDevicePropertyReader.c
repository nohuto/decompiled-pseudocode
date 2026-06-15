/*
 * XREFs of Create_SpatialAudioDevicePropertyReader @ 0x18004EB08
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180016890 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 *     ?Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18004EF4C (-Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x18013B080 (-LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z.c)
 *     ?GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@_KPEAI@Z @ 0x180149920 (-GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAud.c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x180149AE0 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180038528 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall Create_SpatialAudioDevicePropertyReader(
        const unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3,
        int a4)
{
  int v5; // eax
  int v6; // ebx
  void *v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-10h] BYREF
  const char *v10; // [rsp+48h] [rbp-8h] BYREF
  const unsigned __int16 *v11; // [rsp+70h] [rbp+20h] BYREF
  struct IPropertyStore *v12; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+88h] [rbp+38h] BYREF

  v12 = a2;
  v11 = a1;
  v9 = 0LL;
  if ( !a3 )
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_5;
    v13 = -2147024809;
    v8 = &unk_18018C3E2;
    v14 = 180;
LABEL_8:
    v10 = "Create_SpatialAudioDevicePropertyReader";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)a1,
      (_DWORD)v8,
      (_DWORD)a3,
      a4,
      (__int64)&v10,
      (__int64)&v14,
      (__int64)&v13);
    goto LABEL_5;
  }
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v9);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyReader,SpatialAudioDevicePropertyReader,unsigned short const * &,IPropertyStore * &>(
         &v9,
         &v11,
         &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_5;
    v13 = v5;
    v8 = &unk_18018C41C;
    v14 = 185;
    goto LABEL_8;
  }
  v6 = (**v9)(v9, &GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d, a3);
  if ( v6 < 0 )
    *a3 = 0LL;
LABEL_5:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v6;
}
