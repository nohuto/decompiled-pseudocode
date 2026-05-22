/*
 * XREFs of ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x1800E2DF0
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E3160 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@KPEAX@std@@@1@AEBK@Z @ 0x18006915C (--$_Find_lower_bound@K@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@.c)
 *     ??$_Emplace@AEAKAEAUAugmentedInputCacheState@@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@_N@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x1800E2C10 (--$_Emplace@AEAKAEAUAugmentedInputCacheState@@@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheStat.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::AddDeviceToCache(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 a5)
{
  int v6; // edi
  __int64 *v7; // r10
  __int16 v8; // r11
  unsigned int v10; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v11[16]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h]
  _BYTE v13[16]; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+50h] [rbp-20h]
  __int16 v15; // [rsp+54h] [rbp-1Ch]
  __int16 v16; // [rsp+56h] [rbp-1Ah]
  __int16 v17; // [rsp+58h] [rbp-18h]
  unsigned __int16 v18; // [rsp+5Ah] [rbp-16h]

  v10 = a2;
  _InterlockedExchange(
    &MPCInputInfoHelper::m_nextSpectrumId,
    (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
  v6 = MPCInputInfoHelper::m_nextSpectrumId;
  std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 345,
    (__int64)v11,
    &v10);
  if ( !*(_BYTE *)(v12 + 25) && v10 >= *(_DWORD *)(v12 + 28) && v12 != *v7 )
    return 2147500037LL;
  v15 = 0;
  v18 = a5;
  v14 = v6;
  v16 = v8;
  v17 = a4;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Emplace<unsigned long &,AugmentedInputCacheState &>(
    v7,
    (__int64)v13,
    &v10);
  return 0LL;
}
