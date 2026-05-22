/*
 * XREFs of ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800E56E4
 * Callers:
 *     ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800E537C (--1KeyboardOverriderDispatcher@@UEAA@XZ.c)
 *     ?OnDisconnected@KeyboardOverriderDispatcher@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800E5AA0 (-OnDisconnected@KeyboardOverriderDispatcher@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800E6750 (-SetOverriderState@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800E572C (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::DestroyOverriderProxy(KeyboardOverriderDispatcher *this)
{
  NtMITSetKeyboardOverriderState(0LL);
  if ( *((_QWORD *)this + 7) )
    KeyboardOverriderDispatcher::DrainMessageQueue(this);
  *((_BYTE *)this + 704) = 0;
  return NarratorProxy::DestroyNarratorProxy(
           (KeyboardOverriderDispatcher *)((char *)this + 440),
           (KeyboardOverriderDispatcher *)((char *)this + 8));
}
