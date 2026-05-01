/*
 * XREFs of ??$binary_search@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@std@@VString@Internal@Windows@@U?$less@X@2@@std@@YA_NV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@0@0AEBVString@Internal@Windows@@U?$less@X@0@@Z @ 0x1803D3E34
 * Callers:
 *     ?RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAV23@@Z @ 0x1803DAF30 (-RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal@W.c)
 * Callees:
 *     ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x1803D4BCC (--MInternal@Windows@@YA_NAEBVString@01@0@Z.c)
 */

char __fastcall std::binary_search<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Windows::Internal::String>>>,Windows::Internal::String,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  char v7; // si

  v5 = (a2 - a1) >> 3;
  v6 = a1;
  v7 = 0;
  while ( (__int64)v5 > 0 )
  {
    if ( (unsigned __int8)Windows::Internal::operator<(v6 + 8 * (v5 >> 1), a3) )
    {
      v6 += 8 * (v5 >> 1) + 8;
      v5 += -1LL - (v5 >> 1);
    }
    else
    {
      v5 >>= 1;
    }
  }
  if ( v6 != a2 && !(unsigned __int8)Windows::Internal::operator<(a3, v6) )
    return 1;
  return v7;
}
