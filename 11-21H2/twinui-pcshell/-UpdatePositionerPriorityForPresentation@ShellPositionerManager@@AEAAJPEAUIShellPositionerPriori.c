/*
 * XREFs of ?UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIInspectable@@@Z @ 0x1804ECE2C
 * Callers:
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804EB570 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForPresentation(
        ShellPositionerManager *this,
        struct IShellPositionerPriority *a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        struct IInspectable *a5)
{
  char v8; // bp
  HRESULT Service; // eax
  unsigned int v10; // ebx
  unsigned int v11; // esi
  void *v12; // rbx
  int (__fastcall *v13)(void *, _QWORD, GUID *, ShellPositionerManager **); // rdi
  bool v14; // zf
  __int64 v15; // rax
  void *ppvOut[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  ShellPositionerManager *v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = this;
  v8 = 0;
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
    v11 = 0;
    while ( 1 )
    {
      v19 = 0LL;
      v12 = ppvOut[0];
      v13 = *(int (__fastcall **)(void *, _QWORD, GUID *, ShellPositionerManager **))(*(_QWORD *)ppvOut[0] + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      if ( v13(v12, v11, &GUID_ee010e17_919a_4068_868b_675acf787303, &v19) >= 0 )
      {
        v14 = (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 32LL))(
                a2,
                v11) == 0;
        v15 = *(_QWORD *)v19;
        if ( !v14 )
        {
          if ( !(*(unsigned int (__fastcall **)(ShellPositionerManager *, struct IApplicationView *, struct IInspectable *))(v15 + 72))(
                  v19,
                  a3,
                  a5) )
          {
            if ( v11 > 1 )
              (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, v11);
            goto LABEL_12;
          }
          goto LABEL_11;
        }
        if ( (*(unsigned int (__fastcall **)(ShellPositionerManager *, struct IApplicationView *, struct IInspectable *))(v15 + 72))(
               v19,
               a3,
               a5) )
        {
          (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, v11);
LABEL_11:
          v8 = 1;
        }
      }
LABEL_12:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      if ( ++v11 >= 0xA )
      {
        v10 = v8 == 0 ? 0x80070005 : 0;
        goto LABEL_14;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A6,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)Service);
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppvOut);
  return v10;
}
