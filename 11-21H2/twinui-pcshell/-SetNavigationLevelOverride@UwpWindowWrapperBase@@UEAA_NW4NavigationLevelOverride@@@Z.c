/*
 * XREFs of ?SetNavigationLevelOverride@UwpWindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x180417700
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415D54 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

char __fastcall UwpWindowWrapperBase::SetNavigationLevelOverride(__int64 a1, int a2)
{
  char v4; // si
  int v5; // edi
  unsigned int v6; // eax
  int v7; // eax
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 256) + 208LL))(*(_QWORD *)(a1 + 256), &v9);
  v4 = 0;
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 156) &= 0xFFFFFFC7;
    goto LABEL_9;
  }
  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
    {
LABEL_9:
      UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((UwpWindowWrapperBase *)(a1 - 16));
      v4 = 1;
      goto LABEL_10;
    }
    v6 = *(_DWORD *)(a1 + 156) & 0xFFFFFFE7 | 0x10;
LABEL_7:
    *(_DWORD *)(a1 + 156) = v6;
    goto LABEL_9;
  }
  v7 = *(_DWORD *)(a1 + 156);
  if ( (v7 & 0x18) == 0 )
  {
    v6 = v7 | 8;
    goto LABEL_7;
  }
LABEL_10:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
  return v4;
}
