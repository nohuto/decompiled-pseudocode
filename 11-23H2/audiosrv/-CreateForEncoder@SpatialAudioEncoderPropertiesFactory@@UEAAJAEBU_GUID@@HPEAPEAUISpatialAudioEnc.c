/*
 * XREFs of ?CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEncoderProperties@@@Z @ 0x180146340
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x180145618 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 */

__int64 __fastcall SpatialAudioEncoderPropertiesFactory::CreateForEncoder(
        SpatialAudioEncoderPropertiesFactory *this,
        const struct _GUID *a2,
        __int64 a3,
        struct ISpatialAudioEncoderProperties **a4)
{
  int v6; // ebx
  const int *v7; // rdx
  int v8; // eax
  int v10; // [rsp+40h] [rbp-20h] BYREF
  SpatialAudioEncoderProperties *v11; // [rsp+48h] [rbp-18h] BYREF
  const CHAR *v12; // [rsp+50h] [rbp-10h] BYREF
  int v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+88h] [rbp+28h] BYREF

  v13 = a3;
  v11 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v11);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioEncoderProperties,SpatialAudioEncoderProperties,_GUID const &,int &>(
           &v11,
           a2,
           &v13);
    v6 = v8;
    if ( v8 < 0 )
    {
      if ( (unsigned int)dword_1801CD1E8 <= 2 )
        goto LABEL_10;
      v14 = v8;
      v7 = &dword_1801953CC;
      v10 = 121;
      goto LABEL_4;
    }
    v6 = (**(__int64 (__fastcall ***)(SpatialAudioEncoderProperties *, GUID *, struct ISpatialAudioEncoderProperties **))v11)(
           v11,
           &GUID_b090ccfb_2d8c_416b_bfef_598bca3c91a9,
           a4);
    if ( v6 < 0 )
      *a4 = 0LL;
  }
  else
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v14 = -2147024809;
      v7 = (const int *)&unk_1801953FE;
      v10 = 116;
LABEL_4:
      v12 = "SpatialAudioEncoderPropertiesFactory::CreateForEncoder";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)this,
        (int)v7,
        a3,
        (__int64)a4,
        &v12,
        (__int64)&v10,
        (__int64)&v14);
    }
  }
LABEL_10:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v6;
}
