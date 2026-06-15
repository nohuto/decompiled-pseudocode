/*
 * XREFs of Create_SpatialAudioDeviceStateReader @ 0x18002E218
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18002146C (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18002DDFC (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18002E2D4 (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Create_SpatialAudioDeviceStateReader(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rcx
  const int *v9; // rdx
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v11; // [rsp+48h] [rbp-8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF
  int v15; // [rsp+88h] [rbp+38h] BYREF

  v13 = a2;
  v12 = a1;
  v10 = 0LL;
  if ( !a3 )
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801CD1E8 <= 2 )
      goto LABEL_5;
    v14 = -2147024809;
    v15 = 48;
    v9 = (const int *)&unk_1801953FE;
    goto LABEL_10;
  }
  *a3 = 0LL;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateReader,SpatialAudioDeviceStateReader,unsigned short const * &,IPropertyStore * &>(
         &v10,
         &v12,
         &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_1801CD1E8 <= 2 )
      goto LABEL_5;
    v14 = v5;
    v15 = 53;
    v9 = &dword_1801953CC;
LABEL_10:
    v11 = "Create_SpatialAudioDeviceStateReader";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      (int)v9,
      (__int64)a3,
      a4,
      &v11,
      (__int64)&v15,
      (__int64)&v14);
    goto LABEL_5;
  }
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))(v10 + 568))(
         v10 + 568,
         &GUID_10002311_cdcb_40d4_9791_eb7aa089009e,
         a3);
  if ( v6 < 0 )
    *a3 = 0LL;
LABEL_5:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 568) + 16LL))(v7 + 568);
  }
  return (unsigned int)v6;
}
