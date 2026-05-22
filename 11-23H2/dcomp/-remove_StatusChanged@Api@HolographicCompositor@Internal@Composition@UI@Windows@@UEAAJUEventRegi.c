/*
 * XREFs of ?remove_StatusChanged@Api@HolographicCompositor@Internal@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1801189E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180113158 (-Remove@-$EventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U-$InvokeModeOptions@$0-.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositor::Api::remove_StatusChanged(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         this + 2,
         (struct IUnknown *)a2.value);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtholographiccompositor.cpp",
    (const char *)(unsigned int)v2);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCF,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtholographiccompositor.cpp",
    (const char *)v3);
  return v3;
}
