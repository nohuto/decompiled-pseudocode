/*
 * XREFs of ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x1805F40FC
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803A9758 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1805DBD08 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LaunchCortanaApp(const OLECHAR *a1, __int64 a2, char a3)
{
  HRESULT Instance; // ebx
  OLECHAR *v6; // rdi
  IUnknown *pUnk; // [rsp+58h] [rbp+20h] BYREF

  pUnk = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pUnk);
  Instance = CoCreateInstance(
               &GUID_24ac8f2b_4d4a_4c17_9607_6a4b14068f97,
               0LL,
               0x404u,
               &GUID_37c30b2c_2c34_45bc_bb87_62126979a511,
               (LPVOID *)&pUnk);
  if ( Instance >= 0 )
  {
    v6 = SysAllocString(a1);
    if ( v6 )
    {
      if ( a3 )
        CoAllowSetForegroundWindow(pUnk, 0LL);
      Instance = ((__int64 (__fastcall *)(IUnknown *, OLECHAR *))pUnk->lpVtbl[1].QueryInterface)(pUnk, v6);
      SysFreeString(v6);
    }
    else
    {
      Instance = -2147024882;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&pUnk);
  return (unsigned int)Instance;
}
