/*
 * XREFs of ?IsAppActive@UwpAppStateManager@@UEAA_NPEBG@Z @ 0x180565A10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18022B968 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 */

char __fastcall UwpAppStateManager::IsAppActive(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  RTL_SRWLOCK *v2; // rbx
  PVOID Ptr; // rsi
  char v6; // di
  PVOID v7; // rbp
  _QWORD *v8; // rbx
  int v9; // eax
  int v10; // eax
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 6;
  AcquireSRWLockShared(this + 6);
  Ptr = this[7].Ptr;
  v6 = 0;
  v12 = v2;
  v7 = Ptr;
  v8 = (_QWORD *)*((_QWORD *)Ptr + 1);
  if ( !*((_BYTE *)v8 + 25) )
  {
    do
    {
      LOBYTE(v9) = std::wstring::compare(v8 + 4, (__int64)a2);
      if ( v9 >= 0 )
      {
        Ptr = v8;
        v8 = (_QWORD *)*v8;
      }
      else
      {
        v8 = (_QWORD *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    v7 = this[7].Ptr;
  }
  if ( !*((_BYTE *)Ptr + 25) )
  {
    LOBYTE(v10) = std::wstring::compare((_QWORD *)Ptr + 4, (__int64)a2);
    if ( v10 <= 0 && Ptr != v7 )
      v6 = 1;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  return v6;
}
