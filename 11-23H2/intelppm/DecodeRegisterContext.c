/*
 * XREFs of DecodeRegisterContext @ 0x1C0002270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DecodeRegisterContext(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  *a3 = *a1;
  *(_QWORD *)((char *)a3 + 4) = a2;
}
