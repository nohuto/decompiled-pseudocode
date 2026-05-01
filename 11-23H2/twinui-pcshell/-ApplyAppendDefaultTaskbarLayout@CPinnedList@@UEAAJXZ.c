/*
 * XREFs of ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x1807520F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017BCA4 (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18039637C (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x180750DD0 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     wil::details::lambda_call__lambda_9e14f14728b5598fae22716ae5daa52b___::_lambda_call__lambda_9e14f14728b5598fae22716ae5daa52b___ @ 0x180751918 (wil--details--lambda_call__lambda_9e14f14728b5598fae22716ae5daa52b___--_lambda_call__lambda_9e14.c)
 *     ??1TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180751B70 (--1TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x18075BC40 (-StartActivity@TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18075BE40 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _CacheAppOrderInIDList @ 0x18075CF40 (_CacheAppOrderInIDList.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPinnedList::ApplyAppendDefaultTaskbarLayout(CPinnedList *this)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  signed int v6; // ebx
  _WORD *v7; // rax
  __int64 v8; // r15
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+48h] [rbp-C0h]
  int v13; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+60h] [rbp-A8h]
  __int64 v16; // [rsp+70h] [rbp-98h]
  _BYTE v17[32]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v18[45]; // [rsp+98h] [rbp-70h] BYREF
  _WORD v19[3]; // [rsp+202h] [rbp+FAh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  memset_0(v18, 0, 0x140uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"TaskbarLayoutAppendDefaultActivity");
  v18[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::StartActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity *)v18);
  v14 = 0LL;
  v15 = 0uLL;
  v16 = 0LL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(3u, (__int64)&v14, &v13, 0LL);
  v3 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout >= 0 )
  {
    v11 = &v14;
    LOBYTE(v12) = 1;
    if ( v13 )
    {
      v4 = (int)v15;
      if ( (int)v15 > 0 )
      {
        v5 = 0LL;
        v6 = 1;
        do
        {
          if ( v6 >= 0 )
          {
            v7 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v19, v6);
          }
          else
          {
            v7 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v19, -v6) - 1;
            *v7 = 45;
          }
          std::wstring::wstring((__int64)v17, v7, v19);
          CacheAppOrderInIDList(*(_QWORD *)(v14 + 8 * v5), v17, v14 + 8LL * (v6 - 1));
          v8 = *(_QWORD *)(v14 + 8 * v5);
          if ( (*(unsigned int (__fastcall **)(CPinnedList *, __int64))(*(_QWORD *)this + 72LL))(this, v8) == 1
            && (int)CPinnedList::InternalModify((char *)this - 16, 0LL, v8, 37LL, 0) < 0 )
          {
            LODWORD(v10) = 7;
            ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)&v10);
          }
          std::wstring::_Tidy_deallocate((__int64)v17);
          ++v6;
          ++v5;
        }
        while ( v5 < v4 );
      }
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
      v3 = 0;
    }
    else
    {
      v3 = -2147019873;
    }
    wil::details::lambda_call__lambda_9e14f14728b5598fae22716ae5daa52b___::_lambda_call__lambda_9e14f14728b5598fae22716ae5daa52b___(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9BC,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
  }
  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)&v14);
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::~TaskbarLayoutAppendDefaultActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity *)v18);
  return v3;
}
