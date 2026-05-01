/*
 * XREFs of ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x180032850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1803D7944 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::IsApplicationVisibleInContactPanel(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        int *a3)
{
  RTL_SRWLOCK *v3; // rbx
  PeoplePaneViewManager *v7; // rcx
  __int64 *Ptr; // rbp
  __int64 *i; // rbx
  __int64 v11; // rax
  HWND v12; // rdx
  int v13; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+48h] [rbp+10h] BYREF

  v3 = this + 5;
  AcquireSRWLockShared(this + 5);
  Ptr = (__int64 *)this[7].Ptr;
  v14 = v3;
  for ( i = (__int64 *)this[6].Ptr; i != Ptr; i += 2 )
  {
    v11 = *i;
    v13 = 0;
    v12 = *(HWND *)(v11 + 48);
    if ( v12 && (int)PeoplePaneViewManager::IsWindowVisibleInContactPanel(v7, v12, a2, &v13) >= 0 && v13 )
    {
      *a3 = 1;
      break;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
  return 0LL;
}
