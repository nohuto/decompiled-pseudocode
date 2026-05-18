/*
 * XREFs of sub_1800340DC @ 0x1800340DC
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 *     sub_1800354F0 @ 0x1800354F0 (sub_1800354F0.c)
 *     sub_1800356DC @ 0x1800356DC (sub_1800356DC.c)
 *     sub_180035D2C @ 0x180035D2C (sub_180035D2C.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_1800363BC @ 0x1800363BC (sub_1800363BC.c)
 *     sub_180037050 @ 0x180037050 (sub_180037050.c)
 *     sub_180037578 @ 0x180037578 (sub_180037578.c)
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 *     sub_1800671B0 @ 0x1800671B0 (sub_1800671B0.c)
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800340DC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a2 = *(_QWORD *)(a1 + 968);
  a2[1] = *(_QWORD *)(a1 + 976);
  return a2;
}
