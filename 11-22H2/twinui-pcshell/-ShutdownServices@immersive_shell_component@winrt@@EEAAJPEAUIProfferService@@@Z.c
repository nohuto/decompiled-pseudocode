/*
 * XREFs of ?ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z @ 0x180110840
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x180110988 (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::immersive_shell_component::ShutdownServices(RTL_SRWLOCK *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  char *Ptr; // r14
  char *v7; // rbx
  int v8; // eax
  char *v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  PVOID v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v4 = this + 8;
  AcquireSRWLockExclusive(this + 8);
  v5 = this + 4;
  if ( &v11 == (__int128 *)&this[4] )
  {
    v7 = (char *)*((_QWORD *)&v11 + 1);
    Ptr = (char *)v11;
  }
  else
  {
    std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v11);
    Ptr = (char *)v5->Ptr;
    *(RTL_SRWLOCK *)&v11 = (RTL_SRWLOCK)v5->Ptr;
    v7 = (char *)this[5].Ptr;
    *((_QWORD *)&v11 + 1) = v7;
    v12 = this[6].Ptr;
    v5->Ptr = 0LL;
    this[5].Ptr = 0LL;
    this[6].Ptr = 0LL;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  while ( v7 != Ptr )
  {
    if ( *((_DWORD *)v7 - 2) )
    {
      v8 = ((__int64 (__fastcall *)(struct IProfferService *))a2->lpVtbl->RevokeService)(a2);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x188,
          (unsigned int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
          (const char *)(unsigned int)v8,
          v11);
    }
    v9 = v7 - 16;
    if ( v7 - 16 != (char *)&v14 )
    {
      if ( *(_QWORD *)v9 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v7 - 2);
      *(_QWORD *)v9 = 0LL;
    }
    v7 -= 32;
  }
  (*((void (__fastcall **)(RTL_SRWLOCK *, struct IProfferService *))this[-2].Ptr + 10))(this - 2, a2);
  std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v11);
  return 0LL;
}
