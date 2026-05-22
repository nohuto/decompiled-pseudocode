/*
 * XREFs of ?Initialize@ConsumerControlGenericDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D4A58
 * Callers:
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800D498C (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800D080C (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800D1374 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800D148C (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlGenericDevice::Initialize(ConsumerControlGenericDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v2; // rsi
  PnpDevice *v4; // rdi
  int InterfacePath; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<PnpDevice>::operator=((RefCountedObject **)this + 2, (volatile signed __int32 *)a2);
  v4 = *v2;
  WindowsDeleteString(*((HSTRING *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)v4, (HSTRING *)this + 3);
  if ( InterfacePath < 0 )
  {
    v6 = 37LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolgenericdevice.cpp",
      (const char *)(unsigned int)InterfacePath);
    return (unsigned int)InterfacePath;
  }
  InterfacePath = PnpDevice::OpenInterface(*v2);
  if ( InterfacePath < 0 )
  {
    v6 = 40LL;
    goto LABEL_3;
  }
  return 0LL;
}
