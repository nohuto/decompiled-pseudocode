/*
 * XREFs of ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0BC@$$CBG@Z @ 0x18009B710
 * Callers:
 *     ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180072290 (-AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChange.c)
 *     ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1803ED6F8 (-FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrappe.c)
 *     ?UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F7500 (-UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedE.c)
 * Callees:
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@Z @ 0x18009B75C (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@Y.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ @ 0x180142B1C (-InternalRelease@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const (&)[18]>(
        _QWORD *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const (&)[18]>(
         a1,
         L"FrameworkViewType");
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v2,
      1);
  return a1;
}
