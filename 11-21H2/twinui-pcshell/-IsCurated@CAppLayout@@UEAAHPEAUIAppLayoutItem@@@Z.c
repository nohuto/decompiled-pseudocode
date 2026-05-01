/*
 * XREFs of ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180617190
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z @ 0x1806180C4 (-_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z.c)
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x180618238 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::IsCurated(RTL_SRWLOCK *this, struct IAppLayoutItem *a2)
{
  RTL_SRWLOCK *v4; // rbx
  CAppLayout *v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 2;
  AcquireSRWLockShared(this + 2);
  v9 = v4;
  v5 = (CAppLayout *)&this[-5];
  if ( a2 )
    v6 = CAppLayout::_AreAdjacentItemsCurated(v5, a2);
  else
    v6 = CAppLayout::_AreAllItemsCurated(v5);
  v7 = v6;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
  return v7;
}
