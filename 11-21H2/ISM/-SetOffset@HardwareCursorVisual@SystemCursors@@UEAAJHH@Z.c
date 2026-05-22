/*
 * XREFs of ?SetOffset@HardwareCursorVisual@SystemCursors@@UEAAJHH@Z @ 0x1800EE700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursors::HardwareCursorVisual::SetOffset(SystemCursors::HardwareCursorVisual *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
  return 0LL;
}
