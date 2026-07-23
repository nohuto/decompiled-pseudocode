/*
 * XREFs of sub_140373F2C @ 0x140373F2C
 * Callers:
 *     sub_140373E1C @ 0x140373E1C (sub_140373E1C.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     sub_1403867F4 @ 0x1403867F4 (sub_1403867F4.c)
 */

__int64 __fastcall sub_140373F2C(__int64 a1)
{
  __int64 v2; // rcx

  if ( KeQueryPriorityThread(KeGetCurrentThread()) >= 16 )
    return 0LL;
  v2 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
  _InterlockedOr((volatile signed __int32 *)(a1 + 188), 4u);
  return sub_1403867F4(v2, 1024LL);
}
