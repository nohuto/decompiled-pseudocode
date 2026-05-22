/*
 * XREFs of ?SendKeyboardInput@GameInputServerProxy@@UEAAXIPEBU_KEYBOARD_INPUT_DATA@@K@Z @ 0x1800FC670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall GameInputServerProxy::SendKeyboardInput(
        RTL_SRWLOCK *this,
        unsigned int a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        unsigned int a4)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 4) )
  {
    Ptr = this[5].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, _QWORD, const struct _KEYBOARD_INPUT_DATA *, _QWORD))(*(_QWORD *)Ptr + 32LL))(
        Ptr,
        a2,
        a3,
        a4);
    ReleaseSRWLockShared(this + 4);
  }
}
