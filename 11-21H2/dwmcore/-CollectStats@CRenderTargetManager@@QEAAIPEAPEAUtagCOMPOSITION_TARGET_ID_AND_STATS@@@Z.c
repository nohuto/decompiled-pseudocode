/*
 * XREFs of ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180080F7C
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x18007DDA4 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180081138 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?clear@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180081190 (-clear@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSITION_TARGE.c)
 *     ?reserve_region@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@_K0@Z @ 0x1800811C4 (-reserve_region@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSIT.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800DCDE8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::CollectStats(
        CRenderTargetManager *this,
        struct tagCOMPOSITION_TARGET_ID_AND_STATS **a2)
{
  struct tagCOMPOSITION_TARGET_ID_AND_STATS **v2; // r14
  CRenderTargetManager *v3; // rdi
  struct tagCOMPOSITION_TARGET_ID_AND_STATS **v4; // r12
  char v5; // bp
  __int64 *v6; // r15
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct tagCOMPOSITION_TARGET_ID_AND_STATS *v11; // rcx
  __int64 result; // rax
  _OWORD v15[2]; // [rsp+30h] [rbp-B8h] BYREF
  _OWORD v16[4]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v17; // [rsp+90h] [rbp-58h]

  v2 = (struct tagCOMPOSITION_TARGET_ID_AND_STATS **)((char *)this + 80);
  v3 = this;
  v4 = a2;
  v5 = 0;
  detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::clear((char *)this + 80);
  *((_BYTE *)v3 + 576) = 1;
  v6 = (__int64 *)*((_QWORD *)v3 + 2);
  v7 = (__int64 *)*((_QWORD *)v3 + 1);
  if ( v7 != v6 )
  {
    do
    {
      v8 = *v7;
      memset_0(v15, 0, 0x68uLL);
      v9 = v8 + *(int *)(*(_QWORD *)(v8 + 80) + 12LL) + 80LL;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _OWORD *, _OWORD *))(*(_QWORD *)v9 + 32LL))(v9, v15, v16) )
      {
        if ( LODWORD(v16[0]) )
          v5 = 1;
        v10 = detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::reserve_region(
                v2,
                0x4EC4EC4EC4EC4EC5LL * ((v2[1] - *v2) >> 3));
        *(_OWORD *)v10 = v15[0];
        *(_OWORD *)(v10 + 16) = v15[1];
        *(_OWORD *)(v10 + 32) = v16[0];
        *(_OWORD *)(v10 + 48) = v16[1];
        *(_OWORD *)(v10 + 64) = v16[2];
        *(_OWORD *)(v10 + 80) = v16[3];
        *(_QWORD *)(v10 + 96) = v17;
      }
      ++v7;
    }
    while ( v7 != v6 );
    v3 = this;
    v4 = a2;
  }
  CRenderTargetManager::EndTargetEnumeration(v3);
  if ( v5 && !*((_BYTE *)v3 + 581) )
    ScheduleCompositionPass(1000LL, 128LL);
  v11 = *v2;
  result = 0x4EC4EC4EC4EC4EC5LL * ((v2[1] - *v2) >> 3);
  if ( !result )
    v11 = 0LL;
  *v4 = v11;
  return result;
}
