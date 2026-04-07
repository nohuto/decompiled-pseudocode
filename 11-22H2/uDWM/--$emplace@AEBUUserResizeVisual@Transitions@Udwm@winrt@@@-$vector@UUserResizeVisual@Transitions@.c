/*
 * XREFs of ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1801009B8
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x180102310 (-InsertAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResi.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180056D18 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x1801005A0 (--$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@.c)
 *     ??$_Move_backward_unchecked@PEAUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@00@Z @ 0x180100894 (--$_Move_backward_unchecked@PEAUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@@std@@YAPEAUUs.c)
 *     ??_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z @ 0x180101174 (--_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::emplace<winrt::Udwm::Transitions::UserResizeVisual const &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4)
{
  winrt::Windows::Foundation::IUnknown *v4; // rsi
  winrt::Windows::Foundation::IUnknown *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rax
  _QWORD v13[2]; // [rsp+28h] [rbp-10h] BYREF

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
      v8 = (winrt::Windows::Foundation::IUnknown *)a1[1];
      *(_QWORD *)v4 = *a4;
      winrt::Windows::Foundation::IUnknown::add_ref(v8);
      a1[1] += 8LL;
    }
    else
    {
      v13[0] = *a4;
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)v13);
      v9 = *((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 1) = 0LL;
      *(_QWORD *)v4 = v9;
      a1[1] += 8LL;
      std::_Move_backward_unchecked<winrt::Udwm::Transitions::UserResizeVisual *,winrt::Udwm::Transitions::UserResizeVisual *>(
        a3,
        (__int64 *)v4 - 1,
        v4);
      if ( a3 != v13 )
      {
        if ( *a3 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a3);
        v11 = v13[0];
        v13[0] = 0LL;
        *a3 = v11;
      }
      winrt::Udwm::Transitions::UserResizeVisual::`scalar deleting destructor'(
        (winrt::Udwm::Transitions::UserResizeVisual *)v13,
        v10);
    }
    *a2 = a3;
  }
  return a2;
}
