/*
 * XREFs of ?StopSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x1400704F4
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14006DC90 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x14007031C (-ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ.c)
 */

__int64 __fastcall CAPOProcessingHostObject::StopSendingNotifications(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 1;
  EnterCriticalSection(this + 1);
  if ( this[2].DebugInfo
    && (v3 = CAPOProcessingHostObject::ShutdownWorkQueue((CAPOProcessingHostObject *)this), v4 = v3, v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)(unsigned int)v3);
    if ( v1 )
      LeaveCriticalSection(v1);
    return v4;
  }
  else
  {
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
}
