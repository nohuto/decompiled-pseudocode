/*
 * XREFs of ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800FC714
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1800FD9F0 (-InsertAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResi.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800126F8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAAEAUUserResizeVisual@Transitions@Udwm@winrt@@AEBU2345@@Z @ 0x1800FC15C (--$_Emplace_back_with_unused_capacity@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUs.c)
 *     ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800FC294 (--$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@.c)
 *     ??$_Move_backward_unchecked@PEAUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@00@Z @ 0x1800FC588 (--$_Move_backward_unchecked@PEAUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@@std@@YAPEAUUs.c)
 *     ??_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z @ 0x1800FCC84 (--_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::emplace<winrt::Udwm::Transitions::UserResizeVisual const &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4)
{
  winrt::Windows::Foundation::IUnknown *v4; // r14
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  _QWORD v12[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = (winrt::Windows::Foundation::IUnknown *)a1[1];
  if ( v4 == (winrt::Windows::Foundation::IUnknown *)a1[2] )
  {
    *a2 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_reallocate<winrt::Udwm::Transitions::UserResizeVisual const &>(
            a1,
            (__int64)a3,
            a4);
  }
  else
  {
    if ( a3 == (__int64 *)v4 )
    {
      std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_back_with_unused_capacity<winrt::Udwm::Transitions::UserResizeVisual const &>(
        (__int64)a1,
        a4);
    }
    else
    {
      v12[0] = *a4;
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)v12);
      v8 = *((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 1) = 0LL;
      *(_QWORD *)v4 = v8;
      a1[1] += 8LL;
      std::_Move_backward_unchecked<winrt::Udwm::Transitions::UserResizeVisual *,winrt::Udwm::Transitions::UserResizeVisual *>(
        a3,
        (__int64 *)v4 - 1,
        v4);
      if ( a3 != v12 )
      {
        if ( *a3 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a3);
        v10 = v12[0];
        v12[0] = 0LL;
        *a3 = v10;
      }
      winrt::Udwm::Transitions::UserResizeVisual::`scalar deleting destructor'(
        (winrt::Udwm::Transitions::UserResizeVisual *)v12,
        v9);
    }
    *a2 = a3;
  }
  return a2;
}
