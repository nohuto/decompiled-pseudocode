/*
 * XREFs of sub_1409BEBB0 @ 0x1409BEBB0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1409BE97C @ 0x1409BE97C (sub_1409BE97C.c)
 */

void __fastcall sub_1409BEBB0(PVOID *P)
{
  KeWaitForSingleObject(P[2], Executive, 0, 0, 0LL);
  sub_1409BE97C(P);
  _InterlockedExchange(&dword_140C1BBF0, 0);
}
