/*
 * XREFs of ?DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x18021F644
 * Callers:
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x18021F780 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 *     _lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const_&_ @ 0x180656348 (_lambda_e0b0b8eaa13602b9fabc447bd0975459_--operator()_winrt--Windows--System--Threading--ThreadP.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_InitCoro$2 @ 0x18021F114 (TouchEdgeGripperHost--DismissGripperWindowAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall TouchEdgeGripperHost::DismissGripperWindowAsync(__int64 a1, _BYTE *a2, char a3)
{
  void *v5; // rax
  int v7; // [rsp+158h] [rbp+10h] BYREF
  char v8; // [rsp+160h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x10BuLL);
  v7 = 0;
  TouchEdgeGripperHost::DismissGripperWindowAsync__InitCoro_2(&v7, (__int64)v5, a2, &v8, a1);
  return a2;
}
