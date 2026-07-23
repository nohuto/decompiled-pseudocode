/*
 * XREFs of PoFxRegisterComponentPerfStates @ 0x14098CD20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_14098DCC4 @ 0x14098DCC4 (sub_14098DCC4.c)
 */

__int64 __fastcall PoFxRegisterComponentPerfStates(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    sub_1405CAE6C(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * (unsigned int)BugCheckParameter3) + 424LL) )
    sub_1405CAE6C(0x600uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  return sub_14098DCC4(BugCheckParameter2, a5, a6);
}
