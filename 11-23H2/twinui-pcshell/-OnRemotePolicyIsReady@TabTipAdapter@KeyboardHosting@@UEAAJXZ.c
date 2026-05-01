/*
 * XREFs of ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1802DDB10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18018B018 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAUTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0PP@G$$QEAPEAUTabTipAdapter@KeyboardHosting@@@Z @ 0x18051E45C (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAUTabTipAdapter@Key.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180737B84 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnRemotePolicyIsReady(KeyboardHosting::TabTipAdapter *this)
{
  MessageProxyReconnectAdapter *v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-228h] BYREF
  wchar_t v8[256]; // [rsp+30h] [rbp-218h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  memset_0(v8, 0, 0x1FEuLL);
  GetDesktopUniqueName(L"System\\RemoteTabTipPolicy", v8);
  v2 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    MessageProxyReconnectAdapter::Dispose(v2);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 7);
  }
  *(_QWORD *)v7 = (char *)this - 8;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 7);
  v4 = ((__int64 (__fastcall *)(char *, __int64, wchar_t *, int *))Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[255],KeyboardHosting::TabTipAdapter *>)(
         (char *)this + 56,
         v3,
         v8,
         v7);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x84F,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
