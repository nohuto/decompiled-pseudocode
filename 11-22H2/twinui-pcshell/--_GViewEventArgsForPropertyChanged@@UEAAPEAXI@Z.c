/*
 * XREFs of ??_GViewEventArgsForPropertyChanged@@UEAAPEAXI@Z @ 0x1801901B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180190204 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIVi.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

ViewEventArgsForPropertyChanged *__fastcall ViewEventArgsForPropertyChanged::`scalar deleting destructor'(
        ViewEventArgsForPropertyChanged *this,
        char a2)
{
  HSTRING v4; // rcx

  v4 = (HSTRING)*((_QWORD *)this + 12);
  if ( v4 )
    WindowsDeleteString(v4);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
