/*
 * XREFs of std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_18f5db6963bdb451b262a69b713c7ee0___ @ 0x1800D53F0
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800D5CD8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1_Flist_node_remove_op@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D5908 (--1_Flist_node_remove_op@-$forward_list@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Micros.c)
 */

__int64 __fastcall std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_18f5db6963bdb451b262a69b713c7ee0___(
        __int64 **a1)
{
  __int64 *v1; // rbx
  __int64 **v2; // rdi
  bool v3; // si
  __int64 *v4; // rcx
  __int64 **v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = *a1;
  v2 = a1;
  v8 = &v7;
  v6 = a1;
  while ( v1 )
  {
    v9 = 0LL;
    v3 = (int)Microsoft::WRL::WeakRef::As<IInspectable>(v1 + 1, &v9) < 0 || !v9;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v9);
    if ( v3 )
    {
      v4 = *v2;
      v1 = (__int64 *)**v2;
      *v4 = 0LL;
      *v2 = v1;
      *v8 = (__int64)v4;
      v8 = v4;
    }
    else
    {
      v2 = (__int64 **)v1;
      v1 = (__int64 *)*v1;
    }
  }
  return std::forward_list<Microsoft::WRL::WeakRef>::_Flist_node_remove_op::~_Flist_node_remove_op(&v6);
}
