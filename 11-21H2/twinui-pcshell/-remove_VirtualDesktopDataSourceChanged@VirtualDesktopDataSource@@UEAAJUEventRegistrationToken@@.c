/*
 * XREFs of ?remove_VirtualDesktopDataSourceChanged@VirtualDesktopDataSource@@UEAAJUEventRegistrationToken@@@Z @ 0x18003E0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18003E118 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall VirtualDesktopDataSource::remove_VirtualDesktopDataSourceChanged(
        VirtualDesktopDataSource *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         (char *)this + 88,
         a2.value);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109,
      (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v2,
      v5);
  return v3;
}
