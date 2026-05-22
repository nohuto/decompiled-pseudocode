/*
 * XREFs of ?InteractionCapturePointer@CDevice@DirectComposition@@QEAAJIII_K@Z @ 0x1800F2170
 * Callers:
 *     ?CapturePointer@CInteractionProxy@DirectComposition@@UEAAJI@Z @ 0x1800F8EA0 (-CapturePointer@CInteractionProxy@DirectComposition@@UEAAJI@Z.c)
 *     ?CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@Z @ 0x18015327C (-CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@.c)
 * Callees:
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ @ 0x180058C20 (-NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqqx_EventWriteTransfer @ 0x1800F71AC (McTemplateU0qqxqqx_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CDevice::InteractionCapturePointer(
        DirectComposition::CDevice *this,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v10; // rbx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // rax
  void *v16; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0;
  if ( a2 )
  {
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
    {
      v10 = a2 | ((unsigned __int64)(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 8LL))(*((_QWORD *)this + 20)) << 32) | 0x8000000000000000uLL;
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 8LL))(*((_QWORD *)this + 20));
      McTemplateU0qqxqqx_EventWriteTransfer(v13, v12, v11, a2, v10, a3, a4, a5);
    }
    DirectComposition::CDevice::BeginKernelCommand(this, 0x18u, &v16, 0);
    v14 = v16;
    *(_DWORD *)v16 = 5;
    v14[1] = a2;
    v14[2] = a3;
    v14[3] = a4;
    *((_QWORD *)v14 + 2) = a5;
    v5 = DirectComposition::CDevice::TryFlushKernelCommands(this, 0);
    DirectComposition::CDevice::NotifyDeviceOwnerOfChange(this);
  }
  return v5;
}
