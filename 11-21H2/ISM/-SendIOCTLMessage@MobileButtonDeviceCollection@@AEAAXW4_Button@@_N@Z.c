/*
 * XREFs of ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800C5640
 * Callers:
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800C4AF0 (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1800B3850 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800B4970 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?ButtonToGPIOButtonMapping@MobileButtonDeviceCollection@@AEAAJW4_Button@@PEAW4GPIOBUTTONS_BUTTON_TYPE@@@Z @ 0x1800C4570 (-ButtonToGPIOButtonMapping@MobileButtonDeviceCollection@@AEAAJW4_Button@@PEAW4GPIOBUTTONS_BUTTON.c)
 *     ?OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ @ 0x1800C55D4 (-OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ.c)
 */

int __fastcall MobileButtonDeviceCollection::SendIOCTLMessage(__int64 a1, int a2, char a3)
{
  void *v5; // rax
  void **v6; // rbx
  void *v7; // rcx
  void *v9; // [rsp+40h] [rbp-18h] BYREF
  int InBuffer; // [rsp+48h] [rbp-10h] BYREF
  char v11; // [rsp+4Ch] [rbp-Ch]
  int v12; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v5) = MobileButtonDeviceCollection::ButtonToGPIOButtonMapping(a1, a2, &v12);
  if ( (int)v5 >= 0 )
  {
    v6 = (void **)(a1 + 2888);
    v7 = *v6;
    if ( (char *)*v6 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
LABEL_7:
      InBuffer = v12;
      v11 = a3;
      LODWORD(v5) = DeviceIoControl(v7, 0xB02A8u, &InBuffer, 8u, 0LL, 0, 0LL, 0LL);
      return (int)v5;
    }
    v5 = (void *)MobileButtonDeviceCollection::OpenMobileButtonDriver((MobileButtonDeviceCollection *)v7);
    if ( v5 != (void *)-1LL )
    {
      v9 = v5;
      if ( v6 != &v9 )
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          v6,
          v5);
        v9 = 0LL;
      }
      wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v9);
      v7 = *v6;
      goto LABEL_7;
    }
  }
  return (int)v5;
}
