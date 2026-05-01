/*
 * XREFs of ?SetRect@CSnapAssistViewController@@UEAAXPEAUtagRECT@@@Z @ 0x180184EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSnapAssistViewController::SetRect(CSnapAssistViewController *this, struct tagRECT *a2)
{
  LONG top; // r8d
  LONG right; // r9d
  LONG bottom; // r10d

  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  *((_DWORD *)this + 8) = a2->left;
  *((_DWORD *)this + 9) = top;
  *((_DWORD *)this + 10) = right;
  *((_DWORD *)this + 11) = bottom;
}
