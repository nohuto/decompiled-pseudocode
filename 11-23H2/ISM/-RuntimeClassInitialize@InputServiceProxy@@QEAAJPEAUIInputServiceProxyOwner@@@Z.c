/*
 * XREFs of ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x18004545C
 * Callers:
 *     ??$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Z @ 0x18004533C (--$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@D.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180033838 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVInputServiceProxy@@@Z @ 0x18004573C (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProx.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InputServiceProxy::RuntimeClassInitialize(
        InputServiceProxy *this,
        struct IInputServiceProxyOwner *a2)
{
  _QWORD *v3; // rax
  int v4; // eax
  int v6[4]; // [rsp+20h] [rbp-238h] BYREF
  wchar_t v7[264]; // [rsp+30h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 13) = 0;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 4);
  v3 = operator new(0x30uLL);
  *(_BYTE *)v3 = 0;
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[3] = 0LL;
  *((_DWORD *)v3 + 8) = 0;
  *((_WORD *)v3 + 18) = 0;
  v3[5] = 0LL;
  *((_QWORD *)this + 7) = v3;
  memset_0(v7, 0, 0x208uLL);
  GetDesktopUniqueName(L"System\\RemoteTextInputProcessor", v7);
  *(_QWORD *)v6 = this;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],InputServiceProxy *>(
         (char *)this + 40,
         &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc,
         v7,
         v6);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
  return 0LL;
}
