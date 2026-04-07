/*
 * XREFs of ??_GCCrossFade@@UEAAPEAXI@Z @ 0x1800D4CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CStoryboard@@UEAA@XZ @ 0x1800D499C (--1CStoryboard@@UEAA@XZ.c)
 */

CCrossFade *__fastcall CCrossFade::`scalar deleting destructor'(CCrossFade *this, char a2)
{
  CStoryboard::~CStoryboard(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CCrossFade *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
