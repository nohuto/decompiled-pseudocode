/*
 * XREFs of ?VisualSetInputSink@CDevice@DirectComposition@@QEAAJIPEAX@Z @ 0x180035648
 * Callers:
 *     ?SetInput@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAX@Z @ 0x18000F9A0 (-SetInput@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAX@Z.c)
 *     ?SetInputSinkHandle@Visual@Composition@UI@Windows@@QEAAJPEAX@Z @ 0x180035C98 (-SetInputSinkHandle@Visual@Composition@UI@Windows@@QEAAJPEAX@Z.c)
 *     ?SetInput@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAX@Z @ 0x1800F5530 (-SetInput@-$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ @ 0x180058C20 (-NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xp_EventWriteTransfer @ 0x1800F732C (McTemplateU0xp_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CDevice::VisualSetInputSink(
        DirectComposition::CDevice *this,
        unsigned int a2,
        void *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  _DWORD *v7; // rax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( a2 )
  {
    DirectComposition::CDevice::BeginKernelCommand(this, 0x10u, (void **)&v12, 0);
    v7 = v12;
    *v12 = 19;
    v7[1] = v4;
    *((_QWORD *)v7 + 1) = a3;
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 8LL))(*((_QWORD *)this + 20));
      McTemplateU0xp_EventWriteTransfer(v11, v10, v4 | ((unsigned __int64)v9 << 32) | 0x8000000000000000uLL, a3);
    }
    v3 = DirectComposition::CDevice::TryFlushKernelCommands(this, 0);
    DirectComposition::CDevice::NotifyDeviceOwnerOfChange(this);
  }
  return v3;
}
