/*
 * XREFs of ApiSetEditionEdgyProcessInertia @ 0x1C0205F94
 * Callers:
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C01E16A4 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionEdgyProcessInertia(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296B30;
  if ( qword_1C0296B30 )
  {
    result = (__int64 (*)(void))qword_1C0296B30();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296B38;
      if ( qword_1C0296B38 )
        return (__int64 (*)(void))qword_1C0296B38(a1);
    }
  }
  return result;
}
