/*
 * XREFs of ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z @ 0x1802096BC
 * Callers:
 *     _lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180204010 (_lambda_de295fbb3a8b8f22692faabe0885dace_--operator()_winrt--WindowsUdk--UI--Shell-_ea_180204010.c)
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAIPEAE@Z @ 0x18050FB20 (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAIPEAE@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x1802DBE36 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1803CD018 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804B226C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@1@AEBI@Z @ 0x18050B350 (--$find@X@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$al.c)
 */

char __fastcall TouchKeyboardExperienceManager::GetApplicationViewIdIfExists(
        TouchKeyboardExperienceManager *this,
        int a2,
        unsigned int *a3)
{
  KBViewInfo **v6; // rbp
  KBViewInfo **v7; // rdi
  KBViewInfo *v8; // rbx
  char v9; // bl
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-38h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  char v14; // [rsp+70h] [rbp+18h] BYREF

  *a3 = -1;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((char *)this + 424, &SRWLock);
  v6 = (KBViewInfo **)*((_QWORD *)this + 55);
  v7 = (KBViewInfo **)*((_QWORD *)this + 54);
  *(_OWORD *)v11 = 0LL;
  v13 = a2;
  while ( v7 != v6 )
  {
    if ( KBViewInfo::IsValid(*v7) )
    {
      v8 = *v7;
      if ( *(_QWORD *)std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::find<void>(
                        (char *)*v7 + 40,
                        &v14,
                        &v13) != *((_QWORD *)v8 + 6) )
        break;
    }
    v7 += 2;
  }
  if ( v7 == *((KBViewInfo ***)this + 55) )
  {
    v9 = 0;
  }
  else
  {
    std::shared_ptr<FlyoutView>::operator=(v11, v7);
    v9 = 1;
    *a3 = *((_DWORD *)v11[0] + 26);
    if ( v11[1] )
      std::_Ref_count_base::_Decref(v11[1]);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v9;
}
