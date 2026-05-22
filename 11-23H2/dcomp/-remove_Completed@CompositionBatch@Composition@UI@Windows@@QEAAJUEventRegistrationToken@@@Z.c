/*
 * XREFs of ?remove_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJUEventRegistrationToken@@@Z @ 0x180197A1C
 * Callers:
 *     ?remove_Completed@Api@CompositionCommitBatch@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180197BD0 (-remove_Completed@Api@CompositionCommitBatch@Composition@UI@Windows@@UEAAJUEventRegistrationToke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x1800650E8 (-Remove@-$ContextEventSource@U-$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchComplet.c)
 *     ?ValidateOnOwningThread@CompositionBatch@Composition@UI@Windows@@AEAAJXZ @ 0x1801979CC (-ValidateOnOwningThread@CompositionBatch@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionBatch::remove_Completed(
        Windows::UI::Composition::CompositionBatch *this,
        struct EventRegistrationToken a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::CompositionBatch::ValidateOnOwningThread(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::UI::Composition::CompositionBatchCompletedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           (RTL_SRWLOCK *)this + 19,
           *((_QWORD *)this + 3),
           (struct IUnknown *)a2.value);
    v8 = v7;
    if ( v7 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x167,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
