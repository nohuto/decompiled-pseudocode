/*
 * XREFs of ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x18009B804
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@Z @ 0x18009B75C (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@Y.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0M@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@Z @ 0x1803DC910 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0M@$$CBG@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEBQEBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEBQEBG@Z @ 0x1803DC9DC (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEBQEBG@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18009C284 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180171840 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 */

__int64 __fastcall ViewEventArgsForPropertyChanged::RuntimeClassInitialize(
        ViewEventArgsForPropertyChanged *this,
        const unsigned __int16 *a2)
{
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 12) = 5;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((char *)this + 56, 0LL);
  if ( !a2 )
  {
    v4 = -2147467261;
    goto LABEL_5;
  }
  v4 = Windows::Internal::String::_InitializeHelper((ViewEventArgsForPropertyChanged *)((char *)this + 96), a2);
  if ( v4 < 0 )
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
      (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
