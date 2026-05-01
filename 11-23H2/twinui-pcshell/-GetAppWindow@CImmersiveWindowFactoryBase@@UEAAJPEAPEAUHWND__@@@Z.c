/*
 * XREFs of ?GetAppWindow@CImmersiveWindowFactoryBase@@UEAAJPEAPEAUHWND__@@@Z @ 0x1801C5B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactoryBase::GetAppWindow(CImmersiveWindowFactoryBase *this, HWND *a2)
{
  *a2 = (HWND)*((_QWORD *)this + 3);
  return 0LL;
}
