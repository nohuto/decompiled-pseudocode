/*
 * XREFs of ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x1801C7A58
 * Callers:
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C7F88 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x18009D960 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18009D9E0 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x18009E52C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ??$MPCMouseProcessor_InjectPress@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z @ 0x1801C7474 (--$MPCMouseProcessor_InjectPress@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z.c)
 *     ??$MPCMouseProcessor_InjectRelease@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z @ 0x1801C74E8 (--$MPCMouseProcessor_InjectRelease@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801C9FF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCMouseProcessor::DownLevelInput(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3,
        __int64 a4,
        unsigned int a5,
        bool a6)
{
  int v6; // r12d
  MPCHolographicInputManager *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  char v16; // cl
  unsigned int v17; // r13d
  unsigned int v18; // ecx
  char v19; // al
  bool v20; // di
  MPCHolographicInputManager *Instance; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  const char *v24; // r9
  struct IMPCFocusTarget *FocusedTarget; // rbx
  int (__fastcall *v26)(struct IMPCFocusTarget *, GUID *, __int64 *); // rdi
  int v27; // eax
  __int64 v28; // rax
  bool v29; // bl
  MPCHolographicInputManager *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  const char *v33; // r9
  struct IMPCInputPostProcessor *PostProcessor; // r8
  void (__fastcall *v35)(struct IMPCInputPostProcessor *, unsigned __int64); // rax
  int v36; // eax
  int *v37; // [rsp+20h] [rbp-30h]
  int v38; // [rsp+30h] [rbp-20h] BYREF
  __int64 v39; // [rsp+38h] [rbp-18h] BYREF
  __int64 v40[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v42; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v43; // [rsp+A0h] [rbp+50h] BYREF

  v6 = a4;
  *((_BYTE *)a3 + 48) = 0;
  if ( !*((_QWORD *)this + 455)
    || *((_BYTE *)this + 3664)
    || (v10 = MPCHolographicInputManager::GetInstance(),
        (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(v10, v11, v12, v13)) )
  {
    if ( !*((_BYTE *)this + 5353) || *((_DWORD *)a3 + 10) == *((_DWORD *)this + 1339) )
    {
      LOBYTE(v42) = 0;
      v37 = &v42;
      LOBYTE(a4) = 1;
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 461) + 104LL))(
              *((_QWORD *)this + 461),
              0LL,
              1LL,
              a4);
      v16 = v42;
      if ( v14 < 0 )
        v16 = 0;
      LOBYTE(v42) = v16;
      v17 = a5;
      if ( v16 )
      {
        *((_WORD *)a3 + 45) = 0;
        *((_DWORD *)a3 + 25) = *((_DWORD *)a2 + 2);
        v18 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a3 + 122) = 0;
        v19 = 0;
      }
      else
      {
        *((_DWORD *)a3 + 25) = v6;
        v19 = 1;
        v18 = v17;
      }
      *((_DWORD *)a3 + 26) = v18;
      *((_BYTE *)a3 + 120) = v19;
      LOBYTE(v15) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicMouseGameMode>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetImpl'::`2'::impl,
        v15);
      v20 = a6;
      *((_BYTE *)a3 + 121) = a6;
      v39 = 0LL;
      Instance = MPCHolographicInputManager::GetInstance();
      FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance, v22, v23, v24);
      v40[0] = (__int64)FocusedTarget;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v40);
      if ( FocusedTarget )
      {
        v26 = **(int (__fastcall ***)(struct IMPCFocusTarget *, GUID *, __int64 *))FocusedTarget;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v39);
        if ( v26(FocusedTarget, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v39) < 0 )
        {
          v20 = a6;
        }
        else
        {
          v27 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v39 + 56LL))(v39, &v43);
          if ( v27 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x1FA,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v27,
              (int)&v42);
          v20 = a6;
          if ( (_DWORD)v43 )
            *((_BYTE *)a3 + 123) = 1;
        }
      }
      v28 = *((_QWORD *)this + 455);
      v29 = v28 != 0;
      if ( *((_BYTE *)this + 5353) )
      {
        if ( !v28 )
        {
          LODWORD(v43) = v17;
          v38 = v6;
          ISMTracing::MPCMouseProcessor_InjectRelease<long,long,unsigned long &,unsigned long const &,unsigned long &>(
            &v38,
            (int *)&v43,
            (unsigned int *)a3 + 1,
            (unsigned int *)a2 + 4,
            (unsigned int *)a3 + 10);
        }
      }
      else if ( v28 )
      {
        v30 = MPCHolographicInputManager::GetInstance();
        PostProcessor = MPCHolographicInputManager::GetPostProcessor(v30, v31, v32, v33);
        v35 = *(void (__fastcall **)(struct IMPCInputPostProcessor *, unsigned __int64))(*(_QWORD *)PostProcessor + 64LL);
        v43 = __PAIR64__(v17, v6);
        v35(PostProcessor, __PAIR64__(v17, v6));
        LODWORD(v43) = v17;
        v38 = v6;
        ISMTracing::MPCMouseProcessor_InjectPress<long,long,unsigned long &,unsigned long const &,unsigned long &>(
          &v38,
          (int *)&v43,
          (unsigned int *)a3 + 1,
          (unsigned int *)a2 + 4,
          (unsigned int *)a3 + 10);
      }
      *((_BYTE *)this + 5353) = v29;
      *((_DWORD *)this + 1339) = *((_DWORD *)a3 + 10);
      *((_DWORD *)this + 1342) = v20;
      *((_DWORD *)this + 1340) = v6;
      *((_DWORD *)this + 1341) = v17;
      v36 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 464) + 24LL))(
              *((_QWORD *)this + 464),
              a2,
              a3);
      if ( v36 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x216,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v36,
          (int)v37);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v40);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v39);
    }
  }
}
