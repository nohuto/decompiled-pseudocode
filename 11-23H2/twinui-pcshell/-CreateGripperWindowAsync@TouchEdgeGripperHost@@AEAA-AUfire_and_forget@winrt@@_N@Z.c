/*
 * XREFs of ?CreateGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x18021F0A0
 * Callers:
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180220060 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_InitCoro$2 @ 0x18021EADC (TouchEdgeGripperHost--CreateGripperWindowAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall TouchEdgeGripperHost::CreateGripperWindowAsync(__int64 a1, _BYTE *a2, char a3)
{
  void *v5; // rax
  int v7; // [rsp+178h] [rbp+10h] BYREF
  char v8; // [rsp+180h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x12BuLL);
  v7 = 0;
  TouchEdgeGripperHost::CreateGripperWindowAsync__InitCoro_2(&v7, (__int64)v5, a2, &v8, a1);
  return a2;
}
