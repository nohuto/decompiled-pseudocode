/*
 * XREFs of ?Static_DeferredNotify_NoLock@ContextLatchedInvoke@WRL2@Microsoft@@CAJPEAX@Z @ 0x180108F60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180011CC8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextLatchedInvoke::Static_DeferredNotify_NoLock(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  _BYTE v9[56]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+58h] [rbp-20h]
  const void *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *a1;
  if ( *a1 )
    *(_QWORD *)(v1 + 80) = 0LL;
  operator delete(a1);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 64);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 24);
      Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
      v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(v1 + 56);
      v10 = 0LL;
      if ( v4 )
        v10 = (**v4)(v4, v9);
      v5 = *(_QWORD *)(v1 + 64);
      *(_QWORD *)(v1 + 64) = 0LL;
      if ( (*(_BYTE *)(v3 + 32) & 2) != 0 && (*(_BYTE *)(v5 + 32) & 2) != 0 )
      {
        *(_BYTE *)(v1 + 72) = 0;
        v6 = *(_QWORD *)(v5 + 24);
        if ( *(int *)(v6 + 88) > 0 && !*(_BYTE *)(v6 + 97) )
          Microsoft::WRL2::FailFast::Unexpected(0LL);
        ++*(_DWORD *)(v6 + 92);
        if ( !v10 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        --*(_DWORD *)(v6 + 92);
      }
      Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v5);
      std::_Func_class<void,>::_Tidy((__int64)v9, v7);
    }
  }
  return 0LL;
}
