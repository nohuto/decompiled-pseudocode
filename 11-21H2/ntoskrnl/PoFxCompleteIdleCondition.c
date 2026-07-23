/*
 * XREFs of PoFxCompleteIdleCondition @ 0x14024E680
 * Callers:
 *     sub_1403DED10 @ 0x1403DED10 (sub_1403DED10.c)
 *     sub_14051DFE0 @ 0x14051DFE0 (sub_14051DFE0.c)
 *     sub_1406191B0 @ 0x1406191B0 (sub_1406191B0.c)
 * Callees:
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_140355534 @ 0x140355534 (sub_140355534.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall PoFxCompleteIdleCondition(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2
                                                                                                 + 832)
                                                                                     + 8LL
                                                                                     * (unsigned int)BugCheckParameter3)
                                                                         + 136LL));
  if ( (_DWORD)result )
  {
    if ( (int)result < 0 )
      sub_1405CAE6C(0x613uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  }
  else
  {
    sub_140355058(*(_QWORD *)(BugCheckParameter2 + 48), (unsigned int)BugCheckParameter3, 13LL);
    return sub_140355534(BugCheckParameter2);
  }
  return result;
}
