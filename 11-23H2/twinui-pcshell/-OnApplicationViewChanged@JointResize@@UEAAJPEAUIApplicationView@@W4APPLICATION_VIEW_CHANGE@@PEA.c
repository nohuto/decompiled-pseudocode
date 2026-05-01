/*
 * XREFs of ?OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805E35E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x1802E6DC2 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x1805E3920 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointResize::OnApplicationViewChanged(__int64 a1, struct IUnknown *a2, int a3)
{
  int v5; // r8d
  bool v6; // r14
  HWND ForegroundWindow; // r15
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, HWND, struct IUnknown **); // rbx
  JointResize *v10; // rcx
  struct IUnknown **v11; // rbx
  struct IUnknown **v12; // r14
  struct IUnknown *v14[2]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3 - 1;
  if ( v5 )
  {
    if ( v5 == 8 && *(_BYTE *)(a1 + 160) && (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 96)) )
    {
      v6 = 1;
      ForegroundWindow = GetForegroundWindow();
      if ( !ForegroundWindow )
        goto LABEL_9;
      v14[0] = 0LL;
      v8 = *(_QWORD *)(a1 + 48);
      v9 = *(int (__fastcall **)(__int64, HWND, struct IUnknown **))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v14);
      if ( v9(v8, ForegroundWindow, v14) >= 0 )
        v6 = (unsigned int)SHIsSameObject(v14[0], *(struct IUnknown **)(a1 + 96)) == 0;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v14);
      if ( v6 )
      {
LABEL_9:
        v10 = (JointResize *)(a1 - 96);
LABEL_17:
        v14[0] = 0LL;
        LOBYTE(v14[1]) = 0;
        JointResize::OnArrangedWindowJointResizeCompleted(v10, 0LL, v14);
      }
    }
  }
  else
  {
    if ( (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 96)) )
    {
LABEL_16:
      v10 = (JointResize *)(a1 - 96);
      if ( !*(_BYTE *)(a1 + 160) )
      {
        JointResize::OnArrangedWindowBorderExit(v10);
        return 0LL;
      }
      goto LABEL_17;
    }
    v11 = *(struct IUnknown ***)(a1 + 104);
    v12 = *(struct IUnknown ***)(a1 + 112);
    while ( v11 != v12 )
    {
      if ( (unsigned int)SHIsSameObject(a2, *v11) )
        goto LABEL_16;
      v11 += 12;
    }
  }
  return 0LL;
}
