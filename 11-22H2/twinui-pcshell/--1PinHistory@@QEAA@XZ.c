/*
 * XREFs of ??1PinHistory@@QEAA@XZ @ 0x18069EB84
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinManager_::_1_::dtor$2 @ 0x1802B4663 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinManager_--_1_--dtor$2.c)
 *     ??1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18069EC6C (--1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@@std@@YAXPEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@0@QEAU10@AEAV?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@0@@Z @ 0x18069B90C (--$_Destroy_range@V-$allocator@U-$pair@V-$shared_ptr@VPinRequestContext@@@std@@V-$time_point@Ust.c)
 *     ??1?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA@XZ @ 0x18069E5DC (--1-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@chrono@.c)
 */

void __fastcall PinHistory::~PinHistory(PinHistory *this)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // rcx

  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::~deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>((__int64)this + 104);
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::~deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>((__int64)this + 64);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 6);
    while ( v2 != v3 )
    {
      v4 = *(std::_Ref_count_base **)(v2 + 8);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v2 += 24LL;
    }
    std::_Deallocate<16,0>(*((void **)this + 5), 8 * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 5)) >> 3));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>>(
      v5,
      *((_QWORD *)this + 3));
    std::_Deallocate<16,0>(*((void **)this + 2), 8 * ((__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) >> 3));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
