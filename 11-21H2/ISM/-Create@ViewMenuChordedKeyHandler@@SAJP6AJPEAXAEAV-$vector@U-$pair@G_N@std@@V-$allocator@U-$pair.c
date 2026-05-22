/*
 * XREFs of ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x18017B464
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017705C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ViewMenuChordedKeyHandler@@IEAA@XZ @ 0x18017AEF0 (--0ViewMenuChordedKeyHandler@@IEAA@XZ.c)
 *     ?Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@@Z @ 0x18017B538 (-Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewMenuChordedKeyHandler::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ViewMenuChordedKeyHandler **a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  ViewMenuChordedKeyHandler *v9; // rax
  __int64 v10; // rdx
  ViewMenuChordedKeyHandler *v11; // rdi
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ViewMenuChordedKeyHandler *v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0LL;
  if ( a4 )
  {
    v9 = (ViewMenuChordedKeyHandler *)RefCountedObject::operator new(0x68uLL);
    v15 = v9;
    if ( v9 )
      v11 = ViewMenuChordedKeyHandler::ViewMenuChordedKeyHandler(v9);
    else
      v11 = 0LL;
    v15 = v11;
    if ( v11 )
    {
      v12 = ViewMenuChordedKeyHandler::Initialize(v11, v10, a2);
      v6 = v12;
      if ( v12 >= 0 )
      {
        v15 = 0LL;
        *a4 = v11;
        v6 = 0;
        goto LABEL_12;
      }
      v7 = (unsigned int)v12;
      v8 = 48LL;
    }
    else
    {
      v6 = -2147024882;
      v7 = 2147942414LL;
      v8 = 42LL;
    }
  }
  else
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 36LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
    (const char *)v7);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
  return v6;
}
