/*
 * XREFs of ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@$$QEAPEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Z @ 0x14006A6AC
 * Callers:
 *     ?GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U_GUID@@PEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x14006C4DC (-GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F0D4 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F10C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAA@XZ @ 0x14006B664 (--0CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@PEAUIMMDevice@@@Z @ 0x140073574 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsHandler,CAudioSystemEffectsPropertyChangeNotificationsHandler,unsigned short *,_GUID &,IMMDevice * &>(
        CAudioSystemEffectsPropertyChangeNotificationsHandler **a1,
        const unsigned __int16 **a2,
        struct _GUID *a3,
        struct IMMDevice **a4)
{
  void *v8; // rax
  int v9; // edi
  CAudioSystemEffectsPropertyChangeNotificationsHandler *v10; // rbx
  CAudioSystemEffectsPropertyChangeNotificationsHandler *v12; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v13; // [rsp+30h] [rbp-28h] BYREF
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v14);
    return (unsigned int)v9;
  }
  v10 = CAudioSystemEffectsPropertyChangeNotificationsHandler::CAudioSystemEffectsPropertyChangeNotificationsHandler((CAudioSystemEffectsPropertyChangeNotificationsHandler *)v8);
  v12 = v10;
  v14 = 0LL;
  v13 = *a3;
  v9 = CAudioSystemEffectsPropertyChangeNotificationsHandler::RuntimeClassInitialize(v10, *a2, &v13, *a4);
  if ( v9 < 0 )
  {
    Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v12);
    goto LABEL_5;
  }
  if ( v10 )
    (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v10 + 8LL))(v10);
  *a1 = v10;
  if ( v10 )
    (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
