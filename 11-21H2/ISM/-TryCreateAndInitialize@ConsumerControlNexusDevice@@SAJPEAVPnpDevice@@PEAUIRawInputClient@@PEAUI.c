/*
 * XREFs of ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800D46A0
 * Callers:
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800D0B80 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x18002D674 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z @ 0x1800BEF7C (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMessageSession@@@Z.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D3850 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800D3BB8 (-NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConsumerControlNexusDevice::TryCreateAndInitialize(
        struct PnpDevice *a1,
        struct IRawInputClient *a2,
        struct IMessageSession *a3,
        struct IRawInputProvider *a4,
        struct ConsumerControlNexusDevice **a5)
{
  __int64 *v9; // rax
  __int64 *v10; // rbx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v9 = (__int64 *)RefCountedObject::operator new(0x90uLL);
  v10 = v9;
  if ( v9 )
  {
    *v9 = (__int64)&RefCountedObject::`vftable';
    *((_DWORD *)v9 + 2) = 1;
    *v9 = (__int64)&ConsumerControlNexusDevice::`vftable';
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
    v9[8] = 0LL;
    v9[7] = (__int64)(v9 + 6);
    v9[6] = (__int64)(v9 + 6);
    v9[11] = 0LL;
    v9[10] = (__int64)(v9 + 9);
    v9[9] = (__int64)(v9 + 9);
    *((_BYTE *)v9 + 104) = 0;
    v9[14] = 0LL;
    v9[15] = 0LL;
    v9[16] = 0LL;
    *((_BYTE *)v9 + 136) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v10 + 14, (__int64)a2);
  Microsoft::WRL::ComPtr<IMessageSession>::operator=(v10 + 15, (__int64)a3);
  v12 = ConsumerControlNexusDevice::Initialize((ConsumerControlNexusDevice *)v10, a1);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v12);
    RefCountedObject::Release((RefCountedObject *)v10);
    return v13;
  }
  v14 = ConsumerControlNexusDevice::NotifyDeviceAttach((ConsumerControlNexusDevice *)v10, a4);
  v13 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v14);
    RefCountedObject::Release((RefCountedObject *)v10);
    return v13;
  }
  *a5 = (struct ConsumerControlNexusDevice *)v10;
  return 0LL;
}
