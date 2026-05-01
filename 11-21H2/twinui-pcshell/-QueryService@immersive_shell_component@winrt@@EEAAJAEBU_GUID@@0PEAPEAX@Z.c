/*
 * XREFs of ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180096810
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@?$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ @ 0x18004159C (-add_ref@-$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x1803B5430 (--$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIServiceProvi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::immersive_shell_component::QueryService(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v7; // r13
  char v8; // r15
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // rbx
  _QWORD *i; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // edi
  int v14; // edi
  __int64 (__fastcall ***v15)(_QWORD, const struct _GUID *, void **); // [rsp+70h] [rbp+8h] BYREF
  const struct _GUID *v16; // [rsp+80h] [rbp+18h]
  RTL_SRWLOCK *v17; // [rsp+88h] [rbp+20h] BYREF

  v16 = a3;
  *a4 = 0LL;
  v7 = (char *)&this[-1];
  if ( (*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *))this[-1].Ptr + 8))(this - 1) )
    return 0LL;
  v8 = 0;
  v9 = 0LL;
  v15 = 0LL;
  AcquireSRWLockShared(this + 9);
  v17 = this + 9;
  for ( i = this[5].Ptr; i != this[6].Ptr; i += 4 )
  {
    v11 = *(_QWORD *)&a2->Data1 - *i;
    if ( *(_QWORD *)&a2->Data1 == *i )
      v11 = *(_QWORD *)a2->Data4 - i[1];
    if ( !v11 )
    {
      v8 = 1;
      if ( i[2] )
      {
        v9 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))i[2];
        v15 = v9;
        winrt::com_ptr<IServiceProvider>::add_ref((__int64 *)&v15);
      }
      break;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
  if ( v8 )
  {
    if ( v9 )
    {
      v13 = (**v9)(v9, v16, a4);
      if ( v13 < 0 )
      {
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v15);
        return (unsigned int)v13;
      }
    }
    else
    {
      result = (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v7)(v7, v16, a4);
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_12;
  }
  winrt::immersive_shell_component::get_site<IServiceProvider>(v7, &v17);
  if ( v17 )
  {
    v14 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, const struct _GUID *, const struct _GUID *, void **))v17->Ptr + 3))(
            v17,
            a2,
            v16,
            a4);
    if ( v14 >= 0 )
    {
      if ( v17 )
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v17);
LABEL_12:
      if ( v9 )
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v15);
      return 0LL;
    }
    if ( v17 )
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v17);
    if ( v9 )
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v15);
    return (unsigned int)v14;
  }
  else
  {
    if ( v9 )
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v15);
    return 2147500033LL;
  }
}
