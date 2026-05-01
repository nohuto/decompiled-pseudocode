/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run @ 0x18030EB60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run(
        __int64 a1)
{
  CMarshaledInterface *v1; // rbx
  void *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CMarshaledInterface *)(a1 + 16);
  v3 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v3);
  if ( (int)CMarshaledInterface::_Unmarshal(v1, &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe, &v3, 0) >= 0 )
    (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, *((_QWORD *)v1 + 1), 0LL);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v3);
}
