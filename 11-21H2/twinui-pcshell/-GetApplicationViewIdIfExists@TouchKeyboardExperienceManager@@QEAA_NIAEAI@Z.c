/*
 * XREFs of ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAI@Z @ 0x18045DCAC
 * Callers:
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180477DC8 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180477F4C (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1803D55B0 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@1@AEBI@Z @ 0x18045A258 (--$find@X@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$al.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x180460EE0 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

char __fastcall TouchKeyboardExperienceManager::GetApplicationViewIdIfExists(
        RTL_SRWLOCK *this,
        int a2,
        unsigned int *a3)
{
  RTL_SRWLOCK *v3; // rsi
  KBViewInfo **Ptr; // r14
  KBViewInfo **v8; // rdi
  KBViewInfo *v9; // rbx
  char v10; // bl
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  *a3 = -1;
  v3 = this + 53;
  AcquireSRWLockShared(this + 53);
  Ptr = (KBViewInfo **)this[55].Ptr;
  v8 = (KBViewInfo **)this[54].Ptr;
  *(_OWORD *)v13 = 0LL;
  v15 = a2;
  while ( v8 != Ptr )
  {
    if ( KBViewInfo::IsValid(*v8) )
    {
      v9 = *v8;
      if ( *std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::find<void>(
              (_QWORD *)*v8 + 5,
              &v14,
              (const unsigned __int8 *)&v15) != *((_QWORD *)v9 + 6) )
        break;
    }
    v8 += 2;
  }
  if ( v8 == this[55].Ptr )
  {
    v10 = 0;
  }
  else
  {
    std::shared_ptr<FlyoutView>::operator=((__int64 *)v13, v8);
    v10 = 1;
    v11 = v13[1];
    *a3 = *((_DWORD *)v13[0] + 26);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v10;
}
