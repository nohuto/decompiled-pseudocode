/*
 * XREFs of Create_SpatialAudioDeviceStateWriter @ 0x1800216E0
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18002146C (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x18013B5D8 (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800217F0 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x1800476EC (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioDeviceStateWriter(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v5; // eax
  int v6; // ebx
  const int *v8; // rdx
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v10; // [rsp+48h] [rbp-8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+88h] [rbp+38h] BYREF

  v12 = a2;
  v11 = a1;
  v9 = 0LL;
  if ( !a3 )
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 <= 2 )
      goto LABEL_5;
    v13 = -2147024809;
    v8 = (const int *)&unk_1801953CC;
    v14 = 63;
LABEL_8:
    v10 = "Create_SpatialAudioDeviceStateWriter";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      (int)v8,
      (__int64)a3,
      a4,
      &v10,
      (__int64)&v14,
      (__int64)&v13);
    goto LABEL_5;
  }
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v9);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateWriter,SpatialAudioDeviceStateWriter,unsigned short const * &,IPropertyStore * &>(
         &v9,
         &v11,
         &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 <= 2 )
      goto LABEL_5;
    v13 = v5;
    v8 = &dword_180195406;
    v14 = 68;
    goto LABEL_8;
  }
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))(v9 + 568))(
         v9 + 568,
         &GUID_3927b438_dd02_4ef9_b08d_f52d17592a32,
         a3);
  if ( v6 < 0 )
    *a3 = 0LL;
LABEL_5:
  Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v9);
  return (unsigned int)v6;
}
