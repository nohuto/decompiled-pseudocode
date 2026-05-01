/*
 * XREFs of ?ImmersiveLauncherWNFCallback@CImmersiveMode@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180141620
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113_____lambda_b9e009682738098b72449fb04d8aa113___ @ 0x18014173C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9e0096827380.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::ImmersiveLauncherWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4)
{
  unsigned int v5; // esi
  __int64 *v6; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rcx
  _DWORD *v10; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+68h] [rbp+20h] BYREF

  if ( a4 )
    (*(void (__fastcall **)(_DWORD *, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)a4 + 8LL))(a4, a2, a3);
  v10 = a4;
  if ( a4 )
    (*(void (__fastcall **)(_DWORD *, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)a4 + 8LL))(a4, a2, a3);
  v5 = a4[92];
  v6 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113_____lambda_b9e009682738098b72449fb04d8aa113___(
                    &v11,
                    &v10,
                    a3);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v8);
  }
  SHTaskPoolQueueTask(3LL, 2LL, v5, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v10 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
  return 0LL;
}
