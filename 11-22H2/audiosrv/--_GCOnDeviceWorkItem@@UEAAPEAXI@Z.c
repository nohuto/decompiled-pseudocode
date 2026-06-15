/*
 * XREFs of ??_GCOnDeviceWorkItem@@UEAAPEAXI@Z @ 0x180008C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

COnDeviceWorkItem *__fastcall COnDeviceWorkItem::`scalar deleting destructor'(COnDeviceWorkItem *this, char a2)
{
  volatile signed __int32 *v4; // rdx

  v4 = (volatile signed __int32 *)(*((_QWORD *)this + 1) - 24LL);
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x20uLL);
  return this;
}
