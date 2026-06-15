/*
 * XREFs of Create_SpatialAudioMetadataDictionaryFromData @ 0x180148080
 * Callers:
 *     ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x180143B70 (-CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudio.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x180147144 (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Create_SpatialAudioMetadataDictionaryFromData(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  const int *v6; // rdx
  int v7; // eax
  int v9; // [rsp+40h] [rbp-20h] BYREF
  SpatialAudioMetadataDictionary *v10; // [rsp+48h] [rbp-18h] BYREF
  const CHAR *v11; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+98h] [rbp+38h] BYREF

  v10 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    v11 = 0LL;
    v12 = 1;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionary,SpatialAudioMetadataDictionary,enum DictionaryLoadKind,_GUID const &,unsigned short &,std::nullptr_t,unsigned char * &,unsigned int &>(
           &v10,
           (unsigned int *)&v12,
           (__int64)&GUID_00000000_0000_0000_0000_000000000000);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(SpatialAudioMetadataDictionary *, GUID *, _QWORD *))v10)(
             v10,
             &GUID_7175fd87_aec9_42ed_ad43_364817a8ed7a,
             a4);
      goto LABEL_9;
    }
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v12 = v7;
      v9 = 115;
      v6 = &dword_1801953CC;
      goto LABEL_4;
    }
  }
  else
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 > 2 )
    {
      v12 = -2147024809;
      v9 = 110;
      v6 = (const int *)&unk_1801953FE;
LABEL_4:
      v11 = "Create_SpatialAudioMetadataDictionaryFromData";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        a1,
        (int)v6,
        a3,
        (__int64)a4,
        &v11,
        (__int64)&v9,
        (__int64)&v12);
    }
  }
LABEL_9:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
  return v5;
}
