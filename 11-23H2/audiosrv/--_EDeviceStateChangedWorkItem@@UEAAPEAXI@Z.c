/*
 * XREFs of ??_EDeviceStateChangedWorkItem@@UEAAPEAXI@Z @ 0x180001A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

DeviceStateChangedWorkItem *__fastcall DeviceStateChangedWorkItem::`vector deleting destructor'(
        DeviceStateChangedWorkItem *this,
        char a2)
{
  volatile signed __int32 *v4; // rdx

  v4 = (volatile signed __int32 *)(*((_QWORD *)this + 1) - 24LL);
  *(_QWORD *)this = &WorkItemBase::`vftable';
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
