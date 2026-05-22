/*
 * XREFs of ?remove_Completed@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180065060
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x1800650E8 (-Remove@-$ContextEventSource@U-$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchComplet.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionScopedBatch::Api::remove_Completed(
        Windows::UI::Composition::CompositionScopedBatch::Api *this,
        struct EventRegistrationToken a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 22);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 168) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_5;
  }
  if ( *((_DWORD *)this - 16) != GetCurrentThreadId() )
  {
    v6 = -2147483634;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
      (const char *)0x8000000ELL);
    v8 = 2147483662LL;
    v9 = 353LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
      (const char *)v8);
    DoStackCaptureDirect(v6, 0xBEu);
    goto LABEL_5;
  }
  v5 = Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         (char *)this - 48,
         *((_QWORD *)this - 22),
         a2.value);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = (unsigned int)v5;
    v9 = 359LL;
    goto LABEL_9;
  }
  v6 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
