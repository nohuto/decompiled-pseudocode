/*
 * XREFs of Create_SpatialAudioDevicePropertyWriter @ 0x1801439DC
 * Callers:
 *     MigrateSpatialProperties @ 0x18001997C (MigrateSpatialProperties.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1801425BC (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 */

__int64 __fastcall Create_SpatialAudioDevicePropertyWriter(
        const unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3,
        __int64 a4)
{
  int v5; // ebx
  const int *v6; // rdx
  int v7; // eax
  SpatialAudioDevicePropertyWriter *v9; // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v10; // [rsp+48h] [rbp-8h] BYREF
  const unsigned __int16 *v11; // [rsp+70h] [rbp+20h] BYREF
  struct IPropertyStore *v12; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+88h] [rbp+38h] BYREF

  v12 = a2;
  v11 = a1;
  v9 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v9);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyWriter,SpatialAudioDevicePropertyWriter,unsigned short const * &,IPropertyStore * &>(
           &v9,
           &v11,
           &v12);
    v5 = v7;
    if ( v7 < 0 )
    {
      if ( (unsigned int)dword_1801CD1E8 <= 2 )
        goto LABEL_10;
      v13 = v7;
      v6 = &dword_180195406;
      v14 = 85;
      goto LABEL_4;
    }
    v5 = (**(__int64 (__fastcall ***)(SpatialAudioDevicePropertyWriter *, GUID *, _QWORD *))v9)(
           v9,
           &GUID_7602d85e_c297_48f7_a2a4_778bd7712877,
           a3);
    if ( v5 < 0 )
      *a3 = 0LL;
  }
  else
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v13 = -2147024809;
      v6 = (const int *)&unk_1801953CC;
      v14 = 80;
LABEL_4:
      v10 = "Create_SpatialAudioDevicePropertyWriter";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)a1,
        (int)v6,
        (__int64)a3,
        a4,
        &v10,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
LABEL_10:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v5;
}
