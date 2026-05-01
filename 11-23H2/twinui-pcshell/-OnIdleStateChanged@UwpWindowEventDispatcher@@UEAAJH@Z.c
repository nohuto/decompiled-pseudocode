/*
 * XREFs of ?OnIdleStateChanged@UwpWindowEventDispatcher@@UEAAJH@Z @ 0x1800627B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rbx
  const char *v5; // r9
  __int64 **Ptr; // rdi
  __int64 **v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this + 36;
  AcquireSRWLockExclusive(this + 36);
  Ptr = (__int64 **)this[23].Ptr;
  v7 = (__int64 **)this[24].Ptr;
  try
  {
    while ( Ptr != v7 )
    {
      (*(void (__fastcall **)(__int64 *, __int64 *))(**Ptr + 264))(*Ptr, &v10);
      if ( (*(_BYTE *)(v10 + 16) & 2) == 0 )
      {
        v8 = **Ptr;
        if ( a2 )
          (*(void (**)(void))(v8 + 376))();
        else
          (*(void (**)(void))(v8 + 384))();
      }
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      ++Ptr;
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x200,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v5);
  }
  return result;
}
