/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A63A0
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C03A1B90 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03ADCB8 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0010544 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01A6FD0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  DMMVIDPN *v10; // rax
  DMMVIDPN *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v7 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v7 + 24) = a2;
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    v8 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(v7 + 32) = *(_QWORD *)(v8 + 16);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v15 = 0LL;
  v10 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, 256LL, v9);
  if ( v10 )
    v11 = DMMVIDPN::DMMVIDPN(v10, a2);
  else
    v11 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v15, (__int64)v11);
  v12 = v15;
  if ( v15 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v15 + 72))(v15 + 72) )
    {
      if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
        WdLogSingleEntry0(1LL);
      v13 = v15;
      if ( Set<DMMVIDPN>::Add() != 1 )
        WdLogSingleEntry0(1LL);
      v15 = 0LL;
      auto_rc<DMMVIDPN>::reset(a3, v13);
    }
    else
    {
      WdLogSingleEntry3(7LL, v12, a2, *(int *)(v12 + 80));
      v6 = *(_DWORD *)(v12 + 80);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, a2);
    v6 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v15, 0LL);
  return v6;
}
