/*
 * XREFs of ?SetRotationAngle@HardwareCursorVisual@SystemCursors@@UEAAJM@Z @ 0x1800EE740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursors::HardwareCursorVisual::SetRotationAngle(
        SystemCursors::HardwareCursorVisual *this,
        float a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5));
  return 0LL;
}
