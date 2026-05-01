/*
 * XREFs of ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1803B3220
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73_____lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___ @ 0x1803B2444 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___--CTaskW.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1805E77BC (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspaceDiscoverBroker::ActivateApp(
        PenWorkspaceDiscoverBroker *this,
        const unsigned __int16 *a2)
{
  int IsShellExperience; // eax
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  void *v9; // rax
  __int64 v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // [rsp+30h] [rbp-9h] BYREF
  __int64 v14; // [rsp+38h] [rbp-1h]
  __int64 v15; // [rsp+40h] [rbp+7h]
  __int64 v16[3]; // [rsp+48h] [rbp+Fh] BYREF
  char v17; // [rsp+60h] [rbp+27h]
  _QWORD v18[3]; // [rsp+68h] [rbp+2Fh] BYREF
  char v19; // [rsp+80h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  v4 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)&v13,
           (__int64)a2,
           0xFFFFFFFFFFFFFFFFuLL);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = v14;
      v7 = v15;
      v8 = v13;
      v13 = 0LL;
      v15 = 0LL;
      v14 = 0LL;
      v16[1] = v6;
      v16[2] = v7;
      memset(v18, 0, sizeof(v18));
      v16[0] = v8;
      v17 = 0;
      v19 = 1;
      v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9 )
        v10 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73_____lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___(
                (__int64)v9,
                v16);
      else
        v10 = 0LL;
      CurrentThreadId = GetCurrentThreadId();
      v4 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v10, 0LL);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
      if ( v4 >= 0 )
        v4 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x97,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
          (const char *)(unsigned int)v4);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v5);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
  }
  return (unsigned int)v4;
}
