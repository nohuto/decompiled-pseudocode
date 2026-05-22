/*
 * XREFs of ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800D0DF0
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800CF984 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x1800CFB0C (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800D080C (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800D0848 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800D0EE0 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConsumerControlManager::QueueAddRemoveDevice(
        ConsumerControlManager *this,
        struct PnpDevice *a2,
        unsigned __int8 a3)
{
  int v3; // esi
  _QWORD *v6; // rax
  ULONG_PTR v7; // rbx
  ConsumerControlManager *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (ULONG_PTR)v6;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v6[4] = 0LL;
    v8 = (ConsumerControlManager *)v6[3];
    if ( v8 != this )
    {
      if ( this )
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 2);
        v8 = (ConsumerControlManager *)v6[3];
      }
      v6[3] = this;
      if ( v8 )
        ConsumerControlManager::Release((ULONG_PTR)v8);
    }
    Microsoft::WRL::ComPtr<PnpDevice>::operator=((RefCountedObject **)(v7 + 32), (volatile signed __int32 *)a2);
    *(_DWORD *)(v7 + 16) = v3 ^ 1;
    if ( !QueueUserAPC((PAPCFUNC)ConsumerControlManager::AddRemoveDeviceCommandApc, *((HANDLE *)this + 12), v7) )
      ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
