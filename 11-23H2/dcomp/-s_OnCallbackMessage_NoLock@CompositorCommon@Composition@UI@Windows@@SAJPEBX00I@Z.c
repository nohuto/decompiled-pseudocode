/*
 * XREFs of ?s_OnCallbackMessage_NoLock@CompositorCommon@Composition@UI@Windows@@SAJPEBX00I@Z @ 0x180029700
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::s_OnCallbackMessage_NoLock(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3,
        int a4)
{
  volatile signed __int32 *v5; // rbx
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx

  v5 = (volatile signed __int32 *)a2[3];
  v8 = *(_QWORD *)(a1[53] + 40LL);
  if ( v5 && _InterlockedIncrement(v5 + 4) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 80LL))(v5);
  Microsoft::WRL2::ContextSession::BeginApiEntry((Microsoft::WRL2::ContextSession *)v5);
  v9 = a2[3];
  if ( *(int *)(v9 + 88) > 0 && !*(_BYTE *)(v9 + 97)
    || (++*(_DWORD *)(v9 + 92), (v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 280LL))(a2)) == 0) )
  {
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  v11 = CoreUICallReceive(
          v8,
          v10,
          &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_nojTCorKGaq7usLSlUi67Vt3n6A,
          211LL,
          a2,
          a3,
          a4);
  --*(_DWORD *)(v9 + 92);
  v12 = v11;
  Microsoft::WRL2::ContextSession::EndApiEntry((Microsoft::WRL2::ContextSession *)v5);
  if ( v5 && _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v13) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 64LL))(v5, v13);
  }
  return v12;
}
