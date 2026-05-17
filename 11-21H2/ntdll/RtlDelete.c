/*
 * XREFs of RtlDelete @ 0x18006A780
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x18006A220 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x1800B1D36 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800F10A0 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x18006A8D0 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x18006A9E0 (RtlSubtreePredecessor.c)
 */

_QWORD *__fastcall RtlDelete(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx

  result = (_QWORD *)a1[1];
  if ( result && (!a1[2] || (v3 = RtlSubtreePredecessor(), SwapSplayLinks(v3, a1), (result = (_QWORD *)a1[1]) != 0LL))
    || (result = (_QWORD *)a1[2]) != 0LL )
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
