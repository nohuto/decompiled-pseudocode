/*
 * XREFs of ?HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z @ 0x180332B24
 * Callers:
 *     ?OnRawSystemButtonEvent@GamingOverlayExperienceManager@@AEAAJPEAUIGipControllerWatcher@Gaming@Internal@Windows@@PEAUIGipSystemButtonEventArgs@345@@Z @ 0x180335890 (-OnRawSystemButtonEvent@GamingOverlayExperienceManager@@AEAAJPEAUIGipControllerWatcher@Gaming@In.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180332D50 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingOverlayExperienceManager::HandleButtonEvent(RTL_SRWLOCK *this, char a2, char a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int Ptr_high; // eax
  __int128 v11; // [rsp+20h] [rbp-18h]
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v12, this + 26);
  Ptr_high = HIDWORD(this[31].Ptr);
  if ( Ptr_high )
  {
    if ( Ptr_high == 2 )
    {
      LOBYTE(v9) = a2;
    }
    else
    {
      if ( Ptr_high != 1 )
        goto LABEL_12;
      LOBYTE(v9) = a3;
    }
    LOBYTE(v8) = (_BYTE)v12;
    GamingOverlayExperienceManager::HandleTrackedButtonChange(this, v8, v9, a4);
    goto LABEL_12;
  }
  if ( a2 )
  {
    HIDWORD(this[31].Ptr) = 2;
LABEL_6:
    *(_QWORD *)&v11 = a4;
    BYTE8(v11) = 1;
    *(_OWORD *)&this[32].Ptr = v11;
    goto LABEL_12;
  }
  if ( a3 )
  {
    HIDWORD(this[31].Ptr) = 1;
    goto LABEL_6;
  }
LABEL_12:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
}
