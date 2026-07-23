/*
 * XREFs of sub_14081CFDC @ 0x14081CFDC
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 */

__int64 sub_14081CFDC()
{
  KeResetEvent(&stru_140C22AA8);
  _InterlockedExchange(&dword_140C22A20, 1);
  return sub_1402E2D20((unsigned __int64)&stru_140C22A28, -300000000LL, 0, 0, (__int64)&dword_140C22A68);
}
