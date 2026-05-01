/*
 * XREFs of ?GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z @ 0x180433F74
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1804347A0 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::GetFrameForMonitor(
        XamlAllUpViewHost *this,
        struct IImmersiveMonitor *a2,
        struct MonitorFrame **a3)
{
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 (__fastcall *v8)(struct IImmersiveMonitor *, __int64, int *); // rdi
  __int64 v9; // rbx
  int v10; // eax
  char v11; // bl
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  *a3 = 0LL;
  v6 = *((_QWORD *)this + 41);
  v7 = *((_QWORD *)this + 42);
  while ( 1 )
  {
    if ( v6 == v7 )
      return 2147647531LL;
    v8 = *(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64, int *))(*(_QWORD *)a2 + 96LL);
    v15 = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
    v9 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    v5 |= 1u;
    v10 = v8(a2, v9, &v14);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2F9,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v10);
LABEL_4:
      v11 = 0;
      goto LABEL_5;
    }
    if ( !v14 )
      goto LABEL_4;
    v11 = 1;
LABEL_5:
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    }
    if ( v11 )
      break;
    v6 += 8LL;
  }
  *a3 = *(struct MonitorFrame **)v6;
  return 0LL;
}
