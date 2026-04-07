/*
 * XREFs of ?Release@CAnimationResource@@UEAAKXZ @ 0x1800ABE80
 * Callers:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180042E48 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F7558 (--1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F87F8 (-reset@-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAnimationResource@@IEAA@XZ @ 0x1800AB9B4 (--1CAnimationResource@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationResource::Release(CAnimationResource *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
  {
    CAnimationResource::~CAnimationResource(this);
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimationResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v2;
}
