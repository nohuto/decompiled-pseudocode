/*
 * XREFs of ??1InputConfigContextProvider@@EEAA@XZ @ 0x1800FA0EC
 * Callers:
 *     ??_EInputConfigContextProvider@@EEAAPEAXI@Z @ 0x1800FA174 (--_EInputConfigContextProvider@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180029A7C (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x180089DA0 (--1-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ.c)
 *     ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1800FA1C4 (-ClearConfigs@InputConfigContextProvider@@AEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 */

void __fastcall InputConfigContextProvider::~InputConfigContextProvider(InputConfigContextProvider *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx

  *(_QWORD *)this = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
  v2 = (char *)this + 232;
  *((_QWORD *)this + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
  InputConfigContextProvider::ClearConfigs(this, (char *)this + 232);
  InputConfigContextProvider::ClearConfigs(v3, (char *)this + 256);
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64)this + 256);
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64)v2);
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64)this + 88,
    v4);
  SystemContextProvider::~SystemContextProvider(this);
}
