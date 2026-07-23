/*
 * XREFs of sub_140937520 @ 0x140937520
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140937520(_QWORD *CallbackContext, int *Argument1, PVOID Argument2)
{
  __int64 v3; // rax

  v3 = CallbackContext[6];
  if ( (!v3 || v3 == *((_QWORD *)Argument1 + 7))
    && (*((_DWORD *)qword_14003B838 + Argument1[8]) & (_DWORD)CallbackContext[7]) != 0 )
  {
    sub_14042A5E0(*((_QWORD *)Argument1 + 7), CallbackContext[5]);
  }
}
