/*
 * XREFs of Create_SpatialAudioEncoderProperties @ 0x18013A4B4
 * Callers:
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x180011C78 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$MakeAndInitialize@VSpatialAudioEncoderPropertiesFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderPropertiesFactory@@@Z @ 0x1801388F8 (--$MakeAndInitialize@VSpatialAudioEncoderPropertiesFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 */

__int64 __fastcall Create_SpatialAudioEncoderProperties(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  unsigned __int8 *v7; // rdx
  int v8; // eax
  const CHAR *v10; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+78h] [rbp+28h] BYREF
  int v12; // [rsp+80h] [rbp+30h] BYREF
  SpatialAudioEncoderPropertiesFactory *v13; // [rsp+88h] [rbp+38h] BYREF

  v11 = a2;
  v13 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v13);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioEncoderPropertiesFactory,SpatialAudioEncoderPropertiesFactory,>(&v13);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(SpatialAudioEncoderPropertiesFactory *, __int64, _QWORD, _QWORD *))(*(_QWORD *)v13 + 24LL))(
             v13,
             a1,
             0LL,
             a3);
      goto LABEL_9;
    }
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v11 = v8;
      v7 = byte_18018C41C;
      v12 = 146;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801C0258 > 2 )
    {
      v11 = -2147024809;
      v7 = byte_18018C3E2;
      v12 = 141;
LABEL_4:
      v10 = "Create_SpatialAudioEncoderProperties";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        a1,
        v7,
        (__int64)a3,
        a4,
        &v10,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
LABEL_9:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v13);
  return v6;
}
