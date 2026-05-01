/*
 * XREFs of ?AddPositioner@PositionerPriority@@UEAAXW4SHELL_POSITIONER_TYPE@@@Z @ 0x1804F9F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall PositionerPriority::AddPositioner(RTL_SRWLOCK *a1, int a2)
{
  __int64 v2; // rdi
  int *v4; // r8
  unsigned int v5; // r9d
  _DWORD *v6; // rax
  unsigned int i; // ecx
  __int64 v8; // rax
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  wil::AcquireSRWLockExclusive(&v9, a1 + 3);
  v4 = (int *)&g_exclusivePositioners;
  v5 = 0;
  v6 = &g_exclusivePositioners;
  while ( *v6 != (_DWORD)v2 )
  {
    ++v5;
    ++v6;
    if ( v5 >= 2 )
      goto LABEL_7;
  }
  for ( i = 0; i < 2; ++i )
  {
    v8 = *v4++;
    *((_BYTE *)&a1[4].Ptr + v8) = 0;
  }
LABEL_7:
  *((_BYTE *)&a1[4].Ptr + v2) = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
}
