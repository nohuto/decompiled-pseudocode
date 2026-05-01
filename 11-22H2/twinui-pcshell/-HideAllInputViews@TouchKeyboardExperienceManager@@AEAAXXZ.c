/*
 * XREFs of ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802DB4DC
 * Callers:
 *     _lambda_4efd027938208ec783bf057b80dc7741_::operator() @ 0x180207794 (_lambda_4efd027938208ec783bf057b80dc7741_--operator().c)
 *     ?OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18020AA5C (-OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Copy_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00@Z @ 0x18014B6B0 (--$_Copy_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@UKBViewIn.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18051C598 (-_Clear_and_reserve_geometric@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_p.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchKeyboardExperienceManager::HideAllInputViews(TouchKeyboardExperienceManager *this)
{
  RTL_SRWLOCK *v2; // r15
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int128 v5; // rdi
  __int64 i; // rbx
  std::_Ref_count_base *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]

  v8 = 0LL;
  v9 = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 424);
  AcquireSRWLockShared((PSRWLOCK)this + 53);
  v3 = 0LL;
  if ( &v8 == (__int128 *)((char *)this + 432) )
  {
    *((_QWORD *)&v5 + 1) = *((_QWORD *)&v8 + 1);
    goto LABEL_9;
  }
  v4 = *((_QWORD *)this + 55);
  *((_QWORD *)&v5 + 1) = *((_QWORD *)this + 54);
  if ( !((v4 - *((_QWORD *)&v5 + 1)) >> 4) )
  {
    v3 = 0LL;
    std::_Copy_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *>(
      *((_QWORD *)this + 54),
      *((_QWORD *)this + 55),
      0LL);
    *((_QWORD *)&v5 + 1) = 0LL;
    *((_QWORD *)&v8 + 1) = 0LL;
LABEL_9:
    *(_QWORD *)&v5 = v8;
    goto LABEL_10;
  }
  std::vector<std::shared_ptr<KBViewInfo>>::_Clear_and_reserve_geometric(&v8, (v4 - *((_QWORD *)&v5 + 1)) >> 4);
  *(_QWORD *)&v5 = v8;
  std::_Copy_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *>(
    *((__int64 *)&v5 + 1),
    *((__int64 *)&v5 + 1),
    v8);
  v3 = (_QWORD *)*((_QWORD *)&v8 + 1);
  while ( *((_QWORD *)&v5 + 1) != v4 )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      v3,
      *((_QWORD **)&v5 + 1));
    v3 += 2;
    *((_QWORD *)&v5 + 1) += 16LL;
  }
  *((_QWORD *)&v5 + 1) = v3;
  *((_QWORD *)&v8 + 1) = v3;
LABEL_10:
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( (_QWORD *)v5 != v3 )
  {
    do
    {
      if ( !*(_BYTE *)(*(_QWORD *)v5 + 34LL) )
        TouchKeyboardExperienceManager::HideInputView(this, *(_DWORD *)(*(_QWORD *)v5 + 104LL), 1);
      *(_QWORD *)&v5 = v5 + 16;
    }
    while ( (_QWORD *)v5 != v3 );
    v5 = v8;
  }
  if ( (_QWORD)v5 )
  {
    for ( i = v5; i != *((_QWORD *)&v5 + 1); i += 16LL )
    {
      v7 = *(std::_Ref_count_base **)(i + 8);
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
    }
    std::_Deallocate<16,0>((void *)v5, (v9 - v5) & 0xFFFFFFFFFFFFFFF0uLL);
  }
}
