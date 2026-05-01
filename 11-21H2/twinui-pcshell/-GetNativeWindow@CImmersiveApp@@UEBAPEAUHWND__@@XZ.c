/*
 * XREFs of ?GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ @ 0x18014C280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

HWND __fastcall CImmersiveApp::GetNativeWindow(CImmersiveApp *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 464) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 44) )
      return (HWND)(*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 43) + 32LL))(**((_QWORD **)this + 43));
  }
  return result;
}
