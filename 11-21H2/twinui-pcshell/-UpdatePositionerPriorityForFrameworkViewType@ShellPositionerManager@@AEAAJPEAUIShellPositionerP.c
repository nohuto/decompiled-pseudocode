/*
 * XREFs of ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1804ECC54
 * Callers:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18002B36C (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800C4E48 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForFrameworkViewType(
        ShellPositionerManager *a1,
        __int64 a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        unsigned int a5)
{
  HRESULT Service; // eax
  unsigned int v10; // ebx
  unsigned int i; // esi
  void *v12; // rbx
  int (__fastcall *v13)(void *, _QWORD, GUID *, __int64 **); // rdi
  bool v14; // zf
  __int64 v15; // rax
  __int64 *v17; // [rsp+30h] [rbp-28h] BYREF
  void *ppvOut[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              a4,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              ppvOut);
  v10 = Service;
  if ( Service >= 0 )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      if ( i > 1 )
      {
        v17 = 0LL;
        v12 = ppvOut[0];
        v13 = *(int (__fastcall **)(void *, _QWORD, GUID *, __int64 **))(*(_QWORD *)ppvOut[0] + 24LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
        if ( v13(v12, i, &GUID_ee010e17_919a_4068_868b_675acf787303, &v17) >= 0 )
        {
          v14 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, i) == 0;
          v15 = *v17;
          if ( v14 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD))(v15 + 56))(v17, a3, a5) )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, i);
          }
          else if ( !(*(unsigned int (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD))(v15 + 56))(
                       v17,
                       a3,
                       a5) )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, i);
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
      }
    }
    ShellPositionerManager::PersistPositionerPriority(a1, a3);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x470,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)Service);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppvOut);
  return v10;
}
