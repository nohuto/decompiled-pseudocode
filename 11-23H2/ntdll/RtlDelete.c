/*
 * XREFs of RtlDelete @ 0x180063000
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x180062AF0 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x1800B1F06 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800F20B0 (PfxRemovePrefix.c)
 * Callees:
 *     RtlSubtreePredecessor @ 0x1800630A0 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x1800630C8 (SwapSplayLinks.c)
 */

_QWORD *__fastcall RtlDelete(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx

  if ( a1[1] && a1[2] )
  {
    v2 = RtlSubtreePredecessor();
    SwapSplayLinks(v2, a1);
  }
  result = (_QWORD *)a1[1];
  if ( result || (result = (_QWORD *)a1[2]) != 0LL )
  {
    v4 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 != a1 )
    {
      v5 = 1LL;
      if ( (_QWORD *)v4[1] != a1 )
        v5 = 2LL;
      v4[v5] = result;
      v6 = (_QWORD *)*a1;
      *result = *a1;
      return RtlSplay(v6);
    }
    *result = result;
  }
  else
  {
    v6 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 != a1 )
    {
      v7 = 1LL;
      if ( (_QWORD *)v6[1] != a1 )
        v7 = 2LL;
      v6[v7] = 0LL;
      return RtlSplay(v6);
    }
    return 0LL;
  }
  return result;
}
