/*
 * XREFs of ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180737E8C
 * Callers:
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAUTabTipAdapter@KeyboardHosting@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0PP@G$$QEAPEAUTabTipAdapter@KeyboardHosting@@@Z @ 0x18051E45C (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0PP@GPEAUTabTipAdapter@Key.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180192AE0 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18073789C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180738030 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::RuntimeClassInitialize(
        MessageProxyReconnectAdapter *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner *a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int started; // eax
  __int64 v11; // rdx
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const wchar_t *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  if ( a3 )
  {
    if ( !a4 )
    {
      v6 = 62LL;
      goto LABEL_3;
    }
    *(struct _GUID *)((char *)this + 24) = *a2;
    v7 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(
           (MessageProxyReconnectAdapter *)((char *)this + 88),
           &v15);
    if ( v7 < 0 )
    {
      v6 = 65LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 6) = a4;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
    v7 = CoreUICreate((char *)this + 72);
    if ( v7 < 0 )
    {
      v6 = 68LL;
      goto LABEL_4;
    }
    v13[0] = 0LL;
    v8 = *((_QWORD *)this + 9);
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
    started = v9(v8, v13);
    v7 = started;
    if ( started >= 0 )
    {
      started = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 56LL))(v13[0]);
      v7 = started;
      if ( started >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
        started = CoreUIFactoryCreate((char *)this + 56);
        v7 = started;
        if ( started >= 0 )
        {
          started = MessageProxyReconnectAdapter::AttemptPullProxy(this);
          v7 = started;
          if ( started >= 0 )
          {
            if ( *((_QWORD *)this + 8)
              || (started = MessageProxyReconnectAdapter::StartConnectionRetryTimer(this), v7 = started, started >= 0) )
            {
              v7 = 0;
              goto LABEL_24;
            }
            v11 = 83LL;
          }
          else
          {
            v11 = 79LL;
          }
        }
        else
        {
          v11 = 77LL;
        }
      }
      else
      {
        v11 = 75LL;
      }
    }
    else
    {
      v11 = 74LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)started);
LABEL_24:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
    return (unsigned int)v7;
  }
  v6 = 61LL;
LABEL_3:
  v7 = -2147024809;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
