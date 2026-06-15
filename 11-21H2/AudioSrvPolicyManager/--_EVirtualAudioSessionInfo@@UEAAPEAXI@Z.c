/*
 * XREFs of ??_EVirtualAudioSessionInfo@@UEAAPEAXI@Z @ 0x180009360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LPVOID *__fastcall VirtualAudioSessionInfo::`vector deleting destructor'(LPVOID *this, char a2)
{
  LPVOID v4; // rcx

  CoTaskMemFree(this[3]);
  this[3] = 0LL;
  v4 = this[2];
  if ( v4 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v4 + 16LL))(v4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
