/*
 * XREFs of ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18000235C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4cab80f0fc0214a242ccd3c88452a090__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call @ 0x180002330 (std--_Func_impl_no_alloc__lambda_4cab80f0fc0214a242ccd3c88452a090__void__MIT_KEYBOARD_INPUT_ATTE.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18019A990 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ @ 0x18019B230 (-ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_d996afdc272f919756ffd34e8729d8d0__void__MIT_POINTER_INPUT_DOWN_MESSAGE_const___::_Do_call @ 0x18019BE70 (std--_Func_impl_no_alloc__lambda_d996afdc272f919756ffd34e8729d8d0__void__MIT_POINTE_ea_18019BE70.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x180086E8C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1800EFA20 (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputAttemptedTargetManager::ProcessInputAttempt(InputAttemptedTargetManager *this, unsigned int a2)
{
  unsigned int *v4; // rdi
  unsigned int *v5; // rdi
  int *i; // r15
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rbp
  int v10; // eax
  int *v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v12; // [rsp+28h] [rbp-30h]
  unsigned int *v13; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  if ( *((_QWORD *)this + 2) != *((_QWORD *)this + 3) && a2 )
  {
    ViewHierarchyWithWindowManager::GetAllAncestors(*(_QWORD *)this, &v11, a2);
    v4 = v12;
    if ( v12 == v13 )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(&v11, v12, &v15);
      v5 = v12;
    }
    else
    {
      *v12 = a2;
      v5 = v4 + 1;
      v12 = v5;
    }
    for ( i = v11; i != (int *)v5; ++i )
    {
      v7 = *i;
      v8 = *((_QWORD *)this + 2);
      v9 = *((_QWORD *)this + 3);
      while ( v8 != v9
           && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 32LL))(*(_QWORD *)v8 + 8LL) != v7 )
        v8 += 8LL;
      if ( v8 != *((_QWORD *)this + 3) )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 24LL))(*(_QWORD *)v8 + 8LL);
        if ( v10 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x32,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattemptedtargetmanager.cpp",
            (const char *)(unsigned int)v10,
            (int)v11);
      }
    }
    std::vector<Windows::UI::Color>::_Tidy(&v11);
  }
}
