/*
 * XREFs of ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x1800E2FDC
 * Callers:
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x1800E32E0 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800E3450 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@KPEAX@std@@@1@AEBK@Z @ 0x18006915C (--$_Find_lower_bound@K@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        struct AugmentedInputCacheState *a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v3 = (_QWORD *)((char *)this + 2760);
  std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 345,
    (__int64)&v8,
    &v10);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || a2 < *(_DWORD *)(v9 + 28) || v9 == *v3 )
    return 2147500037LL;
  *(_QWORD *)v5 = *(_QWORD *)(v9 + 32);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v6 + 40);
  return 0LL;
}
