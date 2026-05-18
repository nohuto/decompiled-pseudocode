/*
 * XREFs of sub_18003684C @ 0x18003684C
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 *     sub_1800385C0 @ 0x1800385C0 (sub_1800385C0.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_180039234 @ 0x180039234 (sub_180039234.c)
 *     sub_1800394BC @ 0x1800394BC (sub_1800394BC.c)
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 *     sub_18003AD18 @ 0x18003AD18 (sub_18003AD18.c)
 *     sub_18003B3FC @ 0x18003B3FC (sub_18003B3FC.c)
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 *     sub_18005F684 @ 0x18005F684 (sub_18005F684.c)
 *     sub_180070B80 @ 0x180070B80 (sub_180070B80.c)
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18003684C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 976);
  }
  *a2 = *(_QWORD *)(a1 + 968);
  result = a2;
  a2[1] = v2;
  return result;
}
