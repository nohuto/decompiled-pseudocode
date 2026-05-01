/*
 * XREFs of ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180017040
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAKPEAUtagRECT@@@Z @ 0x180016D58 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18001718C (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForActivation(
        ShellPositionerManager *this,
        struct IShellPositionerPriority *a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        struct IUnknown *a5)
{
  HRESULT Service; // eax
  unsigned int v10; // ebx
  unsigned int i; // esi
  void *v12; // rbx
  int (__fastcall *v13)(void *, _QWORD, GUID *, __int64 **); // rdi
  bool v14; // zf
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-38h]
  __int64 *v18; // [rsp+30h] [rbp-28h] BYREF
  void *ppvOut[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(ppvOut);
  Service = IUnknown_QueryService(
              a4,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              ppvOut);
  v10 = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x467,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)Service,
      v17);
  }
  else
  {
    for ( i = 0; i < 0xA; ++i )
    {
      if ( i > 1 )
      {
        v18 = 0LL;
        v12 = ppvOut[0];
        v13 = *(int (__fastcall **)(void *, _QWORD, GUID *, __int64 **))(*(_QWORD *)ppvOut[0] + 24LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
        if ( v13(v12, i, &GUID_ee010e17_919a_4068_868b_675acf787303, &v18) >= 0 )
        {
          v14 = (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 32LL))(
                  a2,
                  i) == 0;
          v15 = *v18;
          if ( v14 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64 *, struct IApplicationView *, struct IUnknown *))(v15 + 24))(
                   v18,
                   a3,
                   a5) )
            {
              (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, i);
            }
          }
          else if ( !(*(unsigned int (__fastcall **)(__int64 *, struct IApplicationView *, struct IUnknown *))(v15 + 24))(
                       v18,
                       a3,
                       a5) )
          {
            (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, i);
          }
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
      }
    }
    ShellPositionerManager::PersistPositionerPriority(this, a3);
    v10 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(ppvOut);
  return v10;
}
