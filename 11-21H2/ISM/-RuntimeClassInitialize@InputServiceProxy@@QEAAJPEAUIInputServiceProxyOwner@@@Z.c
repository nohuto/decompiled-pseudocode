/*
 * XREFs of ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x180030D04
 * Callers:
 *     ??$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Z @ 0x180030A50 (--$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@D.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180030ED4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x180030F78 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     ?GetSessionID@@YAKXZ @ 0x180031080 (-GetSessionID@@YAKXZ.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVInputServiceProxy@@@Z @ 0x1800310CC (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProx.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InputServiceProxy::RuntimeClassInitialize(
        InputServiceProxy *this,
        struct IInputServiceProxyOwner *a2)
{
  InputServiceProxy *v3; // rax
  unsigned int v4; // edx
  int v5; // eax
  __int64 v7; // rdx
  wchar_t *v8; // rcx
  wchar_t v9; // ax
  wchar_t *v10; // [rsp+20h] [rbp-458h]
  InputServiceProxy *v11; // [rsp+30h] [rbp-448h] BYREF
  wchar_t Buffer[264]; // [rsp+40h] [rbp-438h] BYREF
  wchar_t v13[264]; // [rsp+250h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+478h] [rbp+0h]

  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 13) = 0;
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 4);
  v3 = (InputServiceProxy *)operator new(0x30uLL);
  v11 = v3;
  *(_BYTE *)v3 = 0;
  *((_QWORD *)v3 + 1) = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_DWORD *)v3 + 8) = 0;
  *((_WORD *)v3 + 18) = 0;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)this + 7) = v3;
  memset_0(Buffer, 0, 0x208uLL);
  v13[0] = 0;
  if ( GetSessionID() == -1 || !(unsigned int)GetThreadDesktopName(v13, v4) )
  {
    v7 = 260LL;
    v8 = Buffer;
    while ( v7 != -2147483386 )
    {
      v9 = *(wchar_t *)((char *)v8 + (char *)L"System\\RemoteTextInputProcessor" - (char *)Buffer);
      if ( v9 )
      {
        *v8++ = v9;
        if ( --v7 )
          continue;
      }
      if ( !v7 )
        --v8;
      break;
    }
    *v8 = 0;
  }
  else
  {
    v10 = v13;
    StringCchPrintfW(Buffer, 0x104uLL, L"%s%s%d", L"System\\RemoteTextInputProcessor");
  }
  v11 = this;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],InputServiceProxy *>(
         (char *)this + 40,
         &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc,
         Buffer,
         &v11);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v5,
      (int)v10);
  return 0LL;
}
