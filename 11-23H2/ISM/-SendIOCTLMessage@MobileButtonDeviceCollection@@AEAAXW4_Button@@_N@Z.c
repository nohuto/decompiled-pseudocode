/*
 * XREFs of ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800DE748
 * Callers:
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800DDBE4 (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180053D00 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?ButtonToGPIOButtonMapping@MobileButtonDeviceCollection@@AEAAJW4_Button@@PEAW4GPIOBUTTONS_BUTTON_TYPE@@@Z @ 0x1800DD630 (-ButtonToGPIOButtonMapping@MobileButtonDeviceCollection@@AEAAJW4_Button@@PEAW4GPIOBUTTONS_BUTTON.c)
 *     ?OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ @ 0x1800DE6DC (-OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ.c)
 */

int __fastcall MobileButtonDeviceCollection::SendIOCTLMessage(__int64 a1, int a2, char a3)
{
  void *v5; // rax
  MobileButtonDeviceCollection *v6; // rcx
  void **v7; // rbx
  void *v8; // rcx
  int InBuffer; // [rsp+40h] [rbp-18h] BYREF
  char v11; // [rsp+44h] [rbp-14h]
  char v12; // [rsp+48h] [rbp-10h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v5) = MobileButtonDeviceCollection::ButtonToGPIOButtonMapping(a1, a2, &v13);
  if ( (int)v5 >= 0 )
  {
    v7 = (void **)(a1 + 2888);
    if ( (((unsigned __int64)*v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
LABEL_8:
      v8 = *v7;
      InBuffer = v13;
      v11 = a3;
      LODWORD(v5) = DeviceIoControl(v8, 0xB02A8u, &InBuffer, 8u, 0LL, 0, 0LL, 0LL);
      return (int)v5;
    }
    v5 = (void *)MobileButtonDeviceCollection::OpenMobileButtonDriver(v6);
    if ( v5 != (void *)-1LL )
    {
      if ( v7 == (void **)&v12 )
      {
        if ( v5 )
          CloseHandle(v5);
      }
      else
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          v7,
          v5);
      }
      goto LABEL_8;
    }
  }
  return (int)v5;
}
