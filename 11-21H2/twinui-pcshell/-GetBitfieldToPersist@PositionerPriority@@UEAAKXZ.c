/*
 * XREFs of ?GetBitfieldToPersist@PositionerPriority@@UEAAKXZ @ 0x1800932D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

__int64 __fastcall PositionerPriority::GetBitfieldToPersist(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  unsigned int v3; // ebx
  unsigned __int64 i; // rcx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  v6 = v1;
  v3 = 0;
  for ( i = 0LL; i < 0xA; ++i )
  {
    if ( *((_BYTE *)&this[3].Ptr + i) )
      v3 |= 1 << i;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
  return v3;
}
