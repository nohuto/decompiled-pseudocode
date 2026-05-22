/*
 * XREFs of ??1InputConfigContextProvider@@EEAA@XZ @ 0x1801160DC
 * Callers:
 *     ??_EInputConfigContextProvider@@EEAAPEAXI@Z @ 0x180116164 (--_EInputConfigContextProvider@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x1800315B0 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1800315D4 (-ClearConfigs@InputConfigContextProvider@@AEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x1800A0EC8 (--1-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ.c)
 */

void __fastcall InputConfigContextProvider::~InputConfigContextProvider(InputConfigContextProvider *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx

  *(_QWORD *)this = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
  v2 = (char *)this + 232;
  *((_QWORD *)this + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
  InputConfigContextProvider::ClearConfigs((__int64)this, (__int64 *)this + 29);
  InputConfigContextProvider::ClearConfigs(v3, (__int64 *)this + 32);
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64)this + 256);
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64)v2);
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64)this + 88,
    v4);
  SystemContextProvider::~SystemContextProvider(this);
}
