/*
 * XREFs of ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140058484
 * Callers:
 *     ??$com_query_to@UIStreamInstanceInternal@@AEAPEAUIStreamInstance@@@wil@@YAXAEAPEAUIStreamInstance@@PEAPEAUIStreamInstanceInternal@@@Z @ 0x14002E3F8 (--$com_query_to@UIStreamInstanceInternal@@AEAPEAUIStreamInstance@@@wil@@YAXAEAPEAUIStreamInstanc.c)
 *     ??$com_query_to@UIAudioDeviceEndpoint2@@AEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@wil@@@wil@@YAXAEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@0@PEAPEAUIAudioDeviceEndpoint2@@@Z @ 0x140056DC4 (--$com_query_to@UIAudioDeviceEndpoint2@@AEAV-$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_po.c)
 *     ?CoInitializeEx@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x140064E90 (-CoInitializeEx@wil@@YA-AV-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@1@K@Z.c)
 *     ??$com_weak_query@AEAPEAVCAPOEndpointNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x1400714BC (--$com_weak_query@AEAPEAVCAPOEndpointNotificationsHandler@@@wil@@YA-AV-$com_ptr_t@UIWeakReferenc.c)
 *     ??$com_weak_query@AEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x1400729E4 (--$com_weak_query@AEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@wil@@YA-AV-$com.c)
 *     ??$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCDeviceOrientationNotificationsHandler@@@Z @ 0x140076764 (--$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA-AV-$com_ptr_t@UIWeakRefer.c)
 *     ??$com_weak_query@AEAPEAVCMicBoostNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x140077D8C (--$com_weak_query@AEAPEAVCMicBoostNotificationsHandler@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@.c)
 * Callees:
 *     ??$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z @ 0x140056A40 (--$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_Hr(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<0>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
