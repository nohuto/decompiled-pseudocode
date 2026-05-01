/*
 * XREFs of ?_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB020
 * Callers:
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1805DAE2C (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1805DBD08 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLauncherTipContextMenu::_EnsureScheduler(CLauncherTipContextMenu *this)
{
  HRESULT Instance; // edi
  LPVOID *ppv; // rbx

  Instance = 0;
  ppv = (LPVOID *)((char *)this + 136);
  if ( !*((_QWORD *)this + 17) )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 17);
    Instance = CoCreateInstance(&CLSID_ShellTaskScheduler, 0LL, 1u, &GUID_6ccb7be0_6807_11d0_b810_00c04fd706ec, ppv);
    if ( Instance < 0
      || (Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)*ppv + 48LL))(
                       *ppv,
                       1LL,
                       4294967294LL),
          Instance < 0) )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)ppv);
    }
  }
  return (unsigned int)Instance;
}
