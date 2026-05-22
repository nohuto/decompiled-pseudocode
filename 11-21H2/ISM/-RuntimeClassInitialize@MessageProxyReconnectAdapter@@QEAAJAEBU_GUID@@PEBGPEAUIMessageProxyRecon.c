/*
 * XREFs of ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1800313B0
 * Callers:
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVInputServiceProxy@@@Z @ 0x1800310CC (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVInputServiceProx.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BA@$$CBGPEAVHotkeyRegistrationForwarder@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BA@$$CBG$$QEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x1800312DC (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BA@$$CBGPEAVHotkeyRegistr.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVCursorManager@@@Z @ 0x180155D30 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Det.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVTextInputStateAdapter@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVTextInputStateAdapter@@@Z @ 0x1801D5760 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVTextInputStateAd.c)
 * Callees:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180031560 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180031630 (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MessageProxyReconnectAdapter::RuntimeClassInitialize(
        MessageProxyReconnectAdapter *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner *a4)
{
  HSTRING *v7; // r14
  unsigned __int64 v8; // rbx
  unsigned int String; // ebx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  int started; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v22; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 )
  {
    String = -2147024809;
    v18 = 61LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)String,
      v20);
    return String;
  }
  if ( !a4 )
  {
    String = -2147024809;
    v18 = 62LL;
    goto LABEL_33;
  }
  *(struct _GUID *)((char *)this + 24) = *a2;
  v7 = (HSTRING *)((char *)this + 88);
  v8 = -1LL;
  do
    ++v8;
  while ( a3[v8] );
  if ( v8 > 0xFFFFFFFF )
  {
    String = -2147024362;
    goto LABEL_32;
  }
  WindowsDeleteString(*v7);
  *v7 = 0LL;
  String = WindowsCreateString(a3, v8, v7);
  if ( (String & 0x80000000) != 0 )
  {
LABEL_32:
    v18 = 65LL;
    goto LABEL_33;
  }
  *((_QWORD *)this + 6) = a4;
  v10 = (_QWORD *)((char *)this + 72);
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = CoreUICreate((char *)this + 72);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v22 = 0LL;
    started = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 40LL))(*v10, &v22);
    String = started;
    if ( started < 0 )
    {
      v19 = 74LL;
    }
    else
    {
      started = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 56LL))(v22);
      String = started;
      if ( started < 0 )
      {
        v19 = 75LL;
      }
      else
      {
        v15 = *((_QWORD *)this + 7);
        if ( v15 )
        {
          *((_QWORD *)this + 7) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        started = CoreUIFactoryCreate((char *)this + 56);
        String = started;
        if ( started < 0 )
        {
          v19 = 77LL;
        }
        else
        {
          started = MessageProxyReconnectAdapter::AttemptPullProxy(this);
          String = started;
          if ( started < 0 )
          {
            v19 = 79LL;
          }
          else
          {
            if ( *((_QWORD *)this + 8)
              || (started = MessageProxyReconnectAdapter::StartConnectionRetryTimer(this), String = started,
                                                                                           started >= 0) )
            {
              String = 0;
              goto LABEL_19;
            }
            v19 = 83LL;
          }
        }
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)started,
      v20);
LABEL_19:
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return String;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x44,
    (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)(unsigned int)v12,
    v20);
  return v13;
}
