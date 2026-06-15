/*
 * XREFs of ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x180009630
 * Callers:
 *     ?Release@CSaDeviceProxy@@W7EAAKXZ @ 0x18006B600 (-Release@CSaDeviceProxy@@W7EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBA@EAAKXZ @ 0x18006B620 (-Release@CSaDeviceProxy@@WBA@EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBI@EAAKXZ @ 0x18006B640 (-Release@CSaDeviceProxy@@WBI@EAAKXZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F72FC (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSaDeviceProxy::Release(CSaDeviceProxy *this)
{
  signed __int64 v2; // rdx
  signed __int32 i; // ecx
  unsigned int v4; // ebx
  bool v6; // zf
  signed __int64 v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)this + 14) + 72LL))(
    *((_QWORD *)this + 14),
    &lpCriticalSection);
  v2 = *((_QWORD *)this + 5);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
    {
      v4 = 2147483646;
      goto LABEL_7;
    }
    v4 = v2 - 1;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v2 - 1, v2);
    v6 = v2 == v7;
    v2 = v7;
    if ( v6 )
      goto LABEL_6;
  }
  for ( i = *(_DWORD *)(2 * v2 + 0x10); i != 0x7FFFFFFF; i = *(_DWORD *)(2 * v2 + 0x10) )
  {
    if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v2 + 16), i - 1, i) )
      break;
  }
  v4 = i - 1;
LABEL_6:
  if ( !v4 )
  {
    (*(void (__fastcall **)(CSaDeviceProxy *, __int64))(*(_QWORD *)this + 48LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
LABEL_7:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
