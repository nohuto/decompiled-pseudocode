/*
 * XREFs of ?HideAllInputViews@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x18045F7A4
 * Callers:
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x180461D50 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803D4898 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 *     ??$_Assign_range@PEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@1@0Uforward_iterator_tag@1@@Z @ 0x180459C90 (--$_Assign_range@PEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18045F8A4 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchKeyboardExperienceManager::HideAllInputViews(TouchKeyboardExperienceManager *this)
{
  __int64 v2; // rsi
  RTL_SRWLOCK *v3; // rbx
  __int64 i; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v2 = 0LL;
  v6 = 0LL;
  v3 = (RTL_SRWLOCK *)((char *)this + 424);
  AcquireSRWLockShared((PSRWLOCK)this + 53);
  if ( &v5 != (__int128 *)((char *)this + 432) )
  {
    std::vector<std::shared_ptr<KBViewInfo>>::_Assign_range<std::shared_ptr<KBViewInfo> *>(
      (__int64 *)&v5,
      *((_QWORD *)this + 54),
      *((_QWORD **)this + 55));
    v2 = v6;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  for ( i = v5; i != *((_QWORD *)&v5 + 1); i += 16LL )
  {
    if ( !*(_BYTE *)(*(_QWORD *)i + 34LL) )
      TouchKeyboardExperienceManager::HideInputView(this, *(_DWORD *)(*(_QWORD *)i + 104LL), 1);
  }
  if ( (_QWORD)v5 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
      v5,
      *((__int64 *)&v5 + 1));
    std::_Deallocate<16,0>((void *)v5, (v2 - v5) & 0xFFFFFFFFFFFFFFF0uLL);
  }
}
