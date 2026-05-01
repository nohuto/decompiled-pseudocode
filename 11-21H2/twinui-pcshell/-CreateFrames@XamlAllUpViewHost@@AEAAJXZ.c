/*
 * XREFs of ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x180432ED4
 * Callers:
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1804384F0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 * Callees:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180017ADC (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180017B0C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804324F4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall XamlAllUpViewHost::CreateFrames(XamlAllUpViewHost *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  struct IImmersiveMonitor *v9; // rbx
  int FrameForMonitor; // eax
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+28h] [rbp-38h]
  unsigned int v14; // [rsp+30h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v15[2]; // [rsp+38h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF
  __int64 v20; // [rsp+88h] [rbp+28h] BYREF
  struct IImmersiveMonitor *v21; // [rsp+90h] [rbp+30h] BYREF

  v20 = 0LL;
  v2 = *((_QWORD *)this + 29);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 112LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  v4 = v3(v2, &v20);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 697LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_17;
  }
  v7 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 22);
  if ( v7 )
  {
    v19 = 0LL;
    v8 = **v7;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    v8(v7, &GUID_7f331592_08ca_41ff_a77d_f2138806e857, &v19);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 24LL))(v20, (char *)this + 712);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 709LL;
    goto LABEL_7;
  }
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    (__int64)&v12,
    v20);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v14,
    (__int64)&v12,
    0);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v16,
    (__int64)&v12,
    v13);
  while ( 1 )
  {
    if ( v14 == v16 && v15[1] == (struct IImmersiveMonitor *)v17[1] )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v17);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      v5 = 0;
      goto LABEL_17;
    }
    v9 = v15[0];
    v21 = v15[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, &v19) >= 0 )
    {
      if ( (_DWORD)v19 )
      {
        FrameForMonitor = XamlAllUpViewHost::CreateFrameForMonitor(this, v9);
        v5 = FrameForMonitor;
        if ( FrameForMonitor < 0 )
          break;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
    ++v14;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v14);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2CC,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
    (const char *)(unsigned int)FrameForMonitor);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v17);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
LABEL_17:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  return v5;
}
