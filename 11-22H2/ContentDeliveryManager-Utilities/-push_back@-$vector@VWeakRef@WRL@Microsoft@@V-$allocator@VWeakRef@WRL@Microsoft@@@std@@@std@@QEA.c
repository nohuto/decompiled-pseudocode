/*
 * XREFs of ?push_back@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVWeakRef@WRL@Microsoft@@@Z @ 0x18006BDFC
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180069BF0 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18006B7B0 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

char __fastcall std::vector<Microsoft::WRL::WeakRef>::push_back(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 *v9; // rcx

  LOBYTE(v4) = (unsigned __int64)a2 < a1[1] && *a1 <= (unsigned __int64)a2;
  v5 = a1[2];
  if ( (_BYTE)v4 )
  {
    v6 = ((__int64)a2 - *a1) >> 3;
    if ( a1[1] == v5 )
      std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
    v7 = (__int64 *)a1[1];
    v4 = *a1;
    *v7 = 0LL;
    v8 = (__int64 *)(v4 + 8 * v6);
    if ( v7 != v8 )
    {
      v4 = *v8;
      *v7 = *v8;
      *v8 = 0LL;
    }
  }
  else
  {
    if ( a1[1] == v5 )
      LOBYTE(v4) = std::vector<Microsoft::WRL::WeakRef>::_Reserve((__int64)a1);
    v9 = (__int64 *)a1[1];
    *v9 = 0LL;
    if ( v9 != a2 )
    {
      v4 = *a2;
      *v9 = *a2;
      *a2 = 0LL;
    }
  }
  a1[1] += 8LL;
  return v4;
}
