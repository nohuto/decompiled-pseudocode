/*
 * XREFs of ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180752350
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017BCA4 (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x180750DD0 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180751B9C (--1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x18075BCE8 (-StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18075BE40 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _CacheAppOrderInIDList @ 0x18075CF40 (_CacheAppOrderInIDList.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPinnedList::ApplyPrependDefaultTaskbarLayout(CPinnedList *this)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rsi
  signed int v6; // edi
  _WORD *v7; // rax
  __int64 v8; // r15
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  LPVOID v14[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+58h] [rbp-B0h]
  __int64 v17; // [rsp+68h] [rbp-A0h]
  int v18; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v19[32]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v20[45]; // [rsp+98h] [rbp-70h] BYREF
  _WORD v21[3]; // [rsp+202h] [rbp+FAh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  memset_0(v20, 0, 0x140uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"TaskbarLayoutPrependDefaultActivity");
  v20[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::StartActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *)v20);
  pv[1] = 0LL;
  v16 = 0uLL;
  v17 = 0LL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(3u, (__int64)&pv[1], &v18, 0LL);
  v3 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout >= 0 )
  {
    v14[1] = &pv[1];
    LOBYTE(pv[0]) = 1;
    if ( v18 )
    {
      v4 = (unsigned int)(v16 - 1);
      if ( (int)v16 - 1 >= 0 )
      {
        v5 = 8LL * (int)v4;
        v6 = v16;
        do
        {
          if ( v6 >= 0 )
          {
            v7 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v21, v6);
          }
          else
          {
            v7 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v21, -v6) - 1;
            *v7 = 45;
          }
          std::wstring::wstring((__int64)v19, v7, v21);
          CacheAppOrderInIDList(*(_QWORD *)((char *)pv[1] + v5), v19, (char *)pv[1] + 8 * v4);
          v8 = *(_QWORD *)((char *)pv[1] + v5);
          if ( !(*(unsigned int (__fastcall **)(CPinnedList *, __int64))(*(_QWORD *)this + 72LL))(this, v8) )
          {
            v9 = CPinnedList::InternalModify((char *)this - 16, v8, 0LL, 37LL, 0);
            if ( v9 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x9A2,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v9);
          }
          if ( (unsigned int)CPinnedList::InternalModify((char *)this - 16, 0LL, v8, 37LL, 0) )
          {
            LODWORD(v14[0]) = 7;
            ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)v14);
          }
          else
          {
            v10 = CPinnedList::InternalModify((char *)this - 16, v8, 1LL, 37LL, 0);
            if ( v10 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x9A9,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v10);
          }
          std::wstring::_Tidy_deallocate((__int64)v19);
          --v6;
          v5 -= 8LL;
          v4 = (unsigned int)(v4 - 1);
        }
        while ( (int)v4 >= 0 );
      }
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
      v3 = 0;
    }
    else
    {
      v3 = -2147019873;
    }
    v11 = 0;
    if ( (_QWORD)v16 )
    {
      v12 = 0LL;
      do
      {
        ILFree(*((LPITEMIDLIST *)pv[1] + v12));
        v12 = ++v11;
      }
      while ( v11 < (unsigned __int64)v16 );
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x986,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
  }
  if ( pv[1] )
  {
    CoTaskMemFree(pv[1]);
    pv[1] = 0LL;
  }
  *(_QWORD *)&v16 = 0LL;
  v17 = 0LL;
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::~TaskbarLayoutPrependDefaultActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *)v20);
  return v3;
}
