/*
 * XREFs of ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180110A40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x180391498 (--$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIServiceProvi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::immersive_shell_component::QueryService(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v8; // r13
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // rbx
  RTL_SRWLOCK *v10; // rsi
  _QWORD *Ptr; // rdx
  _QWORD *i; // rax
  __int64 v13; // rcx
  char v14; // di
  __int64 result; // rax
  int v16; // edi
  int v17; // edi
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, const struct _GUID *, void **); // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (char *)&this[-1];
  if ( (*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *))this[-1].Ptr + 8))(this - 1) )
    return 0LL;
  LOBYTE(v18) = 0;
  v9 = 0LL;
  v19 = 0LL;
  v10 = this + 9;
  AcquireSRWLockShared(this + 9);
  Ptr = this[6].Ptr;
  for ( i = this[5].Ptr; i != Ptr; i += 4 )
  {
    v13 = *(_QWORD *)&a2->Data1 - *i;
    if ( *(_QWORD *)&a2->Data1 == *i )
      v13 = *(_QWORD *)a2->Data4 - i[1];
    if ( !v13 )
      break;
  }
  if ( i == Ptr )
  {
    v14 = v18;
  }
  else
  {
    v14 = 1;
    if ( i[2] )
    {
      v9 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))i[2];
      v19 = v9;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    }
  }
  if ( v10 )
    ReleaseSRWLockShared(v10);
  if ( v14 )
  {
    if ( v9 )
    {
      v16 = (**v9)(v9, a3, a4);
      if ( v16 < 0 )
      {
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v19);
        return (unsigned int)v16;
      }
    }
    else
    {
      result = (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v8)(v8, a3, a4);
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_15;
  }
  winrt::immersive_shell_component::get_site<IServiceProvider>(v8, &v18);
  if ( v18 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v18 + 24LL))(
            v18,
            a2,
            a3,
            a4);
    if ( v17 >= 0 )
    {
      if ( v18 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
LABEL_15:
      if ( v9 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v19);
      return 0LL;
    }
    if ( v18 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
    if ( v9 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v19);
    return (unsigned int)v17;
  }
  else
  {
    if ( v9 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v19);
    return 2147500033LL;
  }
}
