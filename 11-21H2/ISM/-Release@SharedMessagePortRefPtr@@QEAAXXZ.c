/*
 * XREFs of ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1801D55D8
 * Callers:
 *     ??1HotKeyProcessor@@UEAA@XZ @ 0x1801D2060 (--1HotKeyProcessor@@UEAA@XZ.c)
 *     ??1SharedMessagePortRefPtr@@QEAA@XZ @ 0x1801D5398 (--1SharedMessagePortRefPtr@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SharedMessagePortRefPtr::Release(SharedMessagePortRefPtr *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = *(_QWORD *)this;
  v2 = *((_QWORD *)this + 1);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
