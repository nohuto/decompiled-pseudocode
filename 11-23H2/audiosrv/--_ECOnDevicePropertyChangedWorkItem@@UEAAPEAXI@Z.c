/*
 * XREFs of ??_ECOnDevicePropertyChangedWorkItem@@UEAAPEAXI@Z @ 0x180036530
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

COnDevicePropertyChangedWorkItem *__fastcall COnDevicePropertyChangedWorkItem::`vector deleting destructor'(
        COnDevicePropertyChangedWorkItem *this,
        char a2)
{
  __int64 v3; // rdx
  volatile signed __int32 *v5; // rdx

  v3 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  v5 = (volatile signed __int32 *)(v3 - 24);
  if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
