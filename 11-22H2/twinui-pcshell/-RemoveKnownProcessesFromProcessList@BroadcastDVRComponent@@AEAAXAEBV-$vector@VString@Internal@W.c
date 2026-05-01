/*
 * XREFs of ?RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAV23@@Z @ 0x1803DAF30
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ??$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEAV123@00@Z @ 0x1803D3418 (--$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEA.c)
 *     ??$binary_search@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@std@@VString@Internal@Windows@@U?$less@X@2@@std@@YA_NV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@0@0AEBVString@Internal@Windows@@U?$less@X@0@@Z @ 0x1803D3E34 (--$binary_search@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@VString@Internal@Wind.c)
 */

void __fastcall BroadcastDVRComponent::RemoveKnownProcessesFromProcessList(__int64 a1, __int64 *a2, HSTRING **a3)
{
  HSTRING *v3; // rbx
  HSTRING v6; // rcx

  v3 = *a3;
  while ( v3 != a3[1] )
  {
    if ( std::binary_search<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Windows::Internal::String>>>,Windows::Internal::String,std::less<void>>(
           *a2,
           a2[1],
           (__int64)v3) )
    {
      std::_Move_unchecked<Windows::Internal::String *,Windows::Internal::String *>(v3 + 1, a3[1], v3);
      v6 = *(a3[1] - 1);
      if ( v6 )
        WindowsDeleteString(v6);
      --a3[1];
    }
    else
    {
      ++v3;
    }
  }
}
