/*
 * XREFs of ?VisualRedirectMouseToHwnd@CDevice@DirectComposition@@QEAAJIPEAUHWND__@@KK@Z @ 0x1800F6BCC
 * Callers:
 *     ?RedirectMouseToHwnd@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUHWND__@@KK@Z @ 0x1800F3BA0 (-RedirectMouseToHwnd@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAA.c)
 *     ?AttachMouseDragToHwnd@Partner@Visual@Composition@UI@Windows@@UEAAJ_JE@Z @ 0x18010AE00 (-AttachMouseDragToHwnd@Partner@Visual@Composition@UI@Windows@@UEAAJ_JE@Z.c)
 *     ?AttachMouseWheelToHwnd@Partner@Visual@Composition@UI@Windows@@UEAAJ_JE@Z @ 0x18010AEC0 (-AttachMouseWheelToHwnd@Partner@Visual@Composition@UI@Windows@@UEAAJ_JE@Z.c)
 * Callees:
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ @ 0x180058C20 (-NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     IsGetRoutingInfoForWindowHandlePresent @ 0x180097008 (IsGetRoutingInfoForWindowHandlePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxpqq_EventWriteTransfer @ 0x1800F70F0 (McTemplateU0qqxpqq_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CDevice::VisualRedirectMouseToHwnd(
        DirectComposition::CDevice *this,
        unsigned int a2,
        HWND a3,
        int a4,
        unsigned int a5)
{
  int LastError; // edi
  __int64 v6; // r14
  _BYTE *v10; // rbx
  _DWORD *v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  void *v17; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v18[40]; // [rsp+48h] [rbp-60h] BYREF

  LastError = 0;
  v6 = a2;
  if ( a2 )
  {
    v10 = 0LL;
    if ( IsGetRoutingInfoForWindowHandlePresent() )
    {
      if ( (unsigned int)GetRoutingInfoForWindowHandle(a3, v18) )
      {
        v10 = v18;
      }
      else
      {
        LastError = GetLastError();
        if ( LastError < 0 )
          return (unsigned int)LastError;
      }
    }
    DirectComposition::CDevice::BeginKernelCommand(this, 0x48u, &v17, 0);
    v11 = v17;
    *(_DWORD *)v17 = 18;
    v11[1] = v6;
    *((_QWORD *)v11 + 1) = a3;
    v11[4] = a4;
    v11[5] = a5;
    if ( v10 )
    {
      *((_OWORD *)v11 + 2) = *(_OWORD *)v10;
      *((_OWORD *)v11 + 3) = *((_OWORD *)v10 + 1);
      *((_QWORD *)v11 + 8) = *((_QWORD *)v10 + 4);
      v11[6] = 1;
    }
    else
    {
      v11[6] = 0;
    }
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
    {
      v12 = v6 | ((unsigned __int64)(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 8LL))(*((_QWORD *)this + 20)) << 32) | 0x8000000000000000uLL;
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 8LL))(*((_QWORD *)this + 20));
      McTemplateU0qqxpqq_EventWriteTransfer(v15, v14, v13, v6, v12, (char)a3, a4, a5);
    }
    LastError = DirectComposition::CDevice::TryFlushKernelCommands(this, 0);
    DirectComposition::CDevice::NotifyDeviceOwnerOfChange(this);
  }
  return (unsigned int)LastError;
}
