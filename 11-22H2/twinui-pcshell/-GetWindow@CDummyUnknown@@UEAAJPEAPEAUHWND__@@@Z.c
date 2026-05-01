/*
 * XREFs of ?GetWindow@CDummyUnknown@@UEAAJPEAPEAUHWND__@@@Z @ 0x18060E160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyUnknown::GetWindow(CDummyUnknown *this, HWND *a2)
{
  *a2 = (HWND)*((_QWORD *)this + 4);
  return *((_QWORD *)this + 4) == 0LL ? 0x80004001 : 0;
}
