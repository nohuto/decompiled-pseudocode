/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x18009B080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ResultException@wil@@UEAA@XZ @ 0x18009AEA0 (--1ResultException@wil@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall wil::ResultException::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, volatile signed __int32 **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
