/*
 * XREFs of ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x1800BAE00
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800BB180 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??$_Emplace@AEAKAEAUAugmentedInputCacheState@@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@_N@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x1800BAB8C (--$_Emplace@AEAKAEAUAugmentedInputCacheState@@@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheStat.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@@1@AEBK@Z @ 0x1800BAC68 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$all.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::AddDeviceToCache(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        __int16 a3,
        __int16 a4,
        unsigned __int16 a5)
{
  int v7; // esi
  __int64 *v8; // r10
  __int64 v9; // r11
  unsigned int v11; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[16]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  _BYTE v14[16]; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-28h]
  __int16 v16; // [rsp+54h] [rbp-24h]
  __int16 v17; // [rsp+56h] [rbp-22h]
  __int16 v18; // [rsp+58h] [rbp-20h]
  unsigned __int16 v19; // [rsp+5Ah] [rbp-1Eh]

  v11 = a2;
  _InterlockedExchange(
    &MPCInputInfoHelper::m_nextSpectrumId,
    (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
  v7 = MPCInputInfoHelper::m_nextSpectrumId;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 345,
    (__int64)v12,
    &v11);
  if ( !*(_BYTE *)(v13 + 25) && v11 >= *(_DWORD *)(v13 + 28) && v13 != *(_QWORD *)(v9 + 2760) )
    return 2147500037LL;
  v16 = 0;
  v19 = a5;
  v15 = v7;
  v17 = a3;
  v18 = a4;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Emplace<unsigned long &,AugmentedInputCacheState &>(
    v8,
    (__int64)v14);
  return 0LL;
}
