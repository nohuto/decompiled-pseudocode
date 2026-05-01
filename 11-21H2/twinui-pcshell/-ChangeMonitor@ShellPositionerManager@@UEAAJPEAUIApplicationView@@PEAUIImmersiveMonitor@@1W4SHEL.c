/*
 * XREFs of ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x1804EAB00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800C4E48 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800C4F58 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1804EB39C (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1805EFA6C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::ChangeMonitor(
        __int64 a1,
        ApplicationViewHelpers *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v8; // edi
  struct IImmersiveApplication *ApplicationFromView; // rbx
  ShellPositionerManager *v11; // r14
  __int64 *AddressOf; // rax
  int PositionerPriorityForView; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // r12d
  unsigned int v17; // r15d
  int v18; // eax
  int v19; // eax
  __int64 v20[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+50h] BYREF

  v23 = a3;
  if ( a2 )
  {
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, a2);
    v20[0] = (__int64)ApplicationFromView;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
    if ( ApplicationFromView )
    {
      v22 = 0LL;
      v11 = (ShellPositionerManager *)(a1 - 88);
      AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v22);
      PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                    v11,
                                    (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))a2,
                                    (struct IShellPositionerPriority **)AddressOf);
      v8 = PositionerPriorityForView;
      if ( PositionerPriorityForView >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22);
        v17 = a5;
        if ( v16 != a5 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 40LL))(v22, a5);
          ShellPositionerManager::PersistPositionerPriority(v11, a2);
        }
        if ( v23
          || (v18 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v23),
              v8 = v18,
              v18 >= 0) )
        {
          (*(void (__fastcall **)(struct IImmersiveApplication *, __int64, _QWORD))(*(_QWORD *)ApplicationFromView
                                                                                  + 224LL))(
            ApplicationFromView,
            a4,
            0LL);
          v19 = ShellPositionerManager::PerformPositionerHandoff(v11, a2, v23, a4, 0LL, v16, v17);
          v8 = v19;
          if ( v19 >= 0 )
          {
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x347,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v19);
          v14 = v8;
          v15 = 453LL;
        }
        else
        {
          v14 = (unsigned int)v18;
          v15 = 441LL;
        }
      }
      else
      {
        v14 = (unsigned int)PositionerPriorityForView;
        v15 = 429LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)v14);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    }
    else
    {
      v8 = -2147467263;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)0x80004001LL);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20);
    return v8;
  }
  if ( a3 )
  {
    v8 = -2147467263;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A2,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)0x80004001LL);
    return v8;
  }
  return 0LL;
}
