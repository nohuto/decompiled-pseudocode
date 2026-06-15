/*
 * XREFs of ??$com_query_to_nothrow@UIAudioProcessingObject@@AEAPEAUIAudioProcessingObjectNotifications@@@wil@@YAJAEAPEAUIAudioProcessingObjectNotifications@@PEAPEAUIAudioProcessingObject@@@Z @ 0x1400293A4
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140029210 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140066420 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioProcessingObject,IAudioProcessingObjectNotifications * &>(
        _QWORD *a1,
        __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)v2);
  return v3;
}
