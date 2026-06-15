/*
 * XREFs of wil::details::lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___::_lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___ @ 0x180033160
 * Callers:
 *     _CreateLowRightsRegistryKey_::_1_::dtor$0 @ 0x180046380 (_CreateLowRightsRegistryKey_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___::_lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___(
        _BYTE *a1)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(void **)(*(_QWORD *)a1 + 8LL);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = 0LL;
  }
}
