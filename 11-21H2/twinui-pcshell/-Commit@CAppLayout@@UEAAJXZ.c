/*
 * XREFs of ?Commit@CAppLayout@@UEAAJXZ @ 0x1806163A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x1806183AC (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 *     ?_CommitLayoutItems@CAppLayout@@AEAAJXZ @ 0x18061863C (-_CommitLayoutItems@CAppLayout@@AEAAJXZ.c)
 *     ?_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x180618AB8 (-_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::Commit(RTL_SRWLOCK *this)
{
  CAppLayout *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CAppLayout *)&this[-5];
  wil::AcquireSRWLockExclusive(&v7, this + 2);
  CAppLayout::_RemoveItemsByType(v1, 2LL);
  v2 = CAppLayout::_CommitLayoutItems(v1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = CAppLayout::_CommitGutters(v1);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 1209LL;
  }
  else
  {
    v4 = 1206LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  return v3;
}
