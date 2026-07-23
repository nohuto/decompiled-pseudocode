/*
 * XREFs of sub_14022B0A0 @ 0x14022B0A0
 * Callers:
 *     sub_14022A6DC @ 0x14022A6DC (sub_14022A6DC.c)
 *     sub_14022A8D0 @ 0x14022A8D0 (sub_14022A8D0.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 *     sub_14041A870 @ 0x14041A870 (sub_14041A870.c)
 *     sub_140460192 @ 0x140460192 (sub_140460192.c)
 *     sub_140630ACC @ 0x140630ACC (sub_140630ACC.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_14022B0A0(signed __int64 *a1)
{
  signed __int64 v1; // r10
  signed __int64 *v2; // r9
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = *a1;
  v2 = (signed __int64 *)a1[1];
  _m_prefetchw(v2);
  result = *v2;
  if ( (v1 ^ (unsigned __int64)*v2) >= 0xF )
  {
LABEL_4:
    result = *a1;
    _InterlockedDecrement((volatile signed __int32 *)(*a1 + 12));
  }
  else
  {
    while ( 1 )
    {
      v4 = result;
      result = _InterlockedCompareExchange64(v2, result + 1, result);
      if ( v4 == result )
        break;
      if ( (v1 ^ (unsigned __int64)result) >= 0xF )
        goto LABEL_4;
    }
  }
  return result;
}
