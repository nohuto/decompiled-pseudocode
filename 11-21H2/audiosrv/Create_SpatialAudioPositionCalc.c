/*
 * XREFs of Create_SpatialAudioPositionCalc @ 0x180038824
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180038720 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18013A15C (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x1800388B0 (--$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Micr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180129A28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall Create_SpatialAudioPositionCalc(_QWORD *a1, __int64 a2, int a3, int a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  void *v8; // rdx
  int v9; // [rsp+60h] [rbp+20h] BYREF
  int v10; // [rsp+68h] [rbp+28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  const char *v12; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0LL;
  if ( !a1 )
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801C0258 <= 2 )
      goto LABEL_4;
    v9 = -2147024809;
    v8 = &unk_18018C3E2;
    v10 = 151;
    goto LABEL_9;
  }
  *a1 = 0LL;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioPositionCalc,ISpatialAudioPositionCalc,>(&v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v11)(
           v11,
           &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
           a1);
    goto LABEL_4;
  }
  if ( (unsigned int)dword_1801C0258 > 2 )
  {
    v9 = v5;
    v8 = &unk_18018C41C;
    v10 = 156;
LABEL_9:
    v12 = "Create_SpatialAudioPositionCalc";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)a1,
      (_DWORD)v8,
      a3,
      a4,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v9);
  }
LABEL_4:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v6;
}
