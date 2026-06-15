/*
 * XREFs of ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@AEAPEBGAEAU_GUID@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAPEBGAEAU_GUID@@AEAPEAUIMMDevice@@@Z @ 0x140064264
 * Callers:
 *     ?GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevice@@U_GUID@@PEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x1400656BC (-GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevic.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAA@XZ @ 0x140064AA4 (--0CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@PEAUIMMDevice@@@Z @ 0x14006AF48 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsHandler,CAudioSystemEffectsPropertyChangeNotificationsHandler,unsigned short const * &,_GUID &,IMMDevice * &>(
        CAudioSystemEffectsPropertyChangeNotificationsHandler **a1,
        const unsigned __int16 **a2,
        struct _GUID *a3,
        struct IMMDevice **a4)
{
  CAudioSystemEffectsPropertyChangeNotificationsHandler *v8; // rax
  int v9; // edi
  CAudioSystemEffectsPropertyChangeNotificationsHandler *v10; // rbx
  struct _GUID v12; // [rsp+30h] [rbp-28h] BYREF

  *a1 = 0LL;
  v8 = (CAudioSystemEffectsPropertyChangeNotificationsHandler *)operator new(
                                                                  0xC0uLL,
                                                                  (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CAudioSystemEffectsPropertyChangeNotificationsHandler::CAudioSystemEffectsPropertyChangeNotificationsHandler(v8);
    v12 = *a3;
    v9 = CAudioSystemEffectsPropertyChangeNotificationsHandler::RuntimeClassInitialize(v10, *a2, &v12, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v9 = 0;
    }
    if ( v10 )
      (*(void (__fastcall **)(CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
