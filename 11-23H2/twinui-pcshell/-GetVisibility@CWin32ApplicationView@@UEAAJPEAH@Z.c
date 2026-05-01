/*
 * XREFs of ?GetVisibility@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18004FF50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

HRESULT __fastcall CWin32ApplicationView::GetVisibility(CWin32ApplicationView *this, int *a2)
{
  int v2; // ebx
  HWND v4; // rax
  HRESULT result; // eax
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0;
  v4 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  result = DwmGetWindowAttribute(v4, 0xEu, &pvAttribute, 4u);
  if ( result >= 0 )
  {
    LOBYTE(v2) = pvAttribute == 0;
    result = 0;
    *a2 = v2;
  }
  return result;
}
