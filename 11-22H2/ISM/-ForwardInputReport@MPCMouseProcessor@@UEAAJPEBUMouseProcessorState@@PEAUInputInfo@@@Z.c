/*
 * XREFs of ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801F3AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     pow @ 0x180057394 (pow.c)
 *     sqrt @ 0x1800573B8 (sqrt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputManager@@@Z @ 0x1801F377C (-ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputMa.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801F3CD0 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801F5828 (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 */

__int64 __fastcall MPCMouseProcessor::ForwardInputReport(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  _BYTE *v3; // r11
  int *v4; // r10
  MPCMouseProcessor *v8; // rbp
  int v9; // ecx
  int v10; // eax
  const struct MouseProcessorState *v11; // rdx
  struct InputInfo *v12; // r8
  double v13; // xmm0_8
  double v14; // xmm7_8
  double v15; // xmm0_8
  int v16; // eax
  unsigned int v17; // esi
  int v19; // eax
  unsigned int v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v22; // [rsp+50h] [rbp+18h] BYREF

  v3 = (char *)this + 5384;
  v4 = (int *)((char *)a2 + 16);
  if ( (*((_BYTE *)a3 + 90) & 1) != 0
    || (v8 = (MPCMouseProcessor *)((char *)this - 8), *v3)
    && MPCMouseProcessor::ButtonToInteractionState(
         (MPCMouseProcessor *)((char *)this - 8),
         *v4,
         16,
         (enum MPCHolographicInputManager::InteractionState *)&v22) )
  {
    *v3 = 1;
    *((_DWORD *)a3 + 29) = 1;
    *((_DWORD *)this + 1322) = *v4;
  }
  else
  {
    *v3 = 0;
    *((_DWORD *)this + 1323) = *v4;
    v9 = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 1318) = v9;
    v10 = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 1347) += v9;
    *((_DWORD *)this + 1348) += v10;
    ++*((_DWORD *)this + 1349);
    *((_DWORD *)this + 1319) = v10;
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3364)
      && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 418) )
    {
      MPCMouseProcessor::ProcessPoints(v8, v11, v12);
      if ( !*((_BYTE *)this + 5261) )
      {
        *((_DWORD *)this + 1316) = *(_DWORD *)a2;
        *((_DWORD *)this + 1317) = *((_DWORD *)a2 + 1);
        *((_BYTE *)this + 5261) = 1;
      }
      if ( *((_QWORD *)a3 + 2) - *((_QWORD *)this + 667) > *((_QWORD *)this + 679) )
        *((_DWORD *)this + 1320) = 0;
      v13 = (double)*((int *)this + 1318);
      *((_QWORD *)this + 667) = *((_QWORD *)a3 + 2);
      v14 = pow(v13, 2.0);
      v15 = pow((double)*((int *)this + 1319), 2.0);
      *((_DWORD *)this + 1320) += (int)sqrt(v15 + v14);
      v16 = MPCMouseProcessor::ForwardInputReportInternal(v8, a2, a3);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v16);
        return v17;
      }
      *((_DWORD *)this + 1316) = *(_DWORD *)a2;
      *((_DWORD *)this + 1317) = *((_DWORD *)a2 + 1);
    }
    else if ( *((_DWORD *)a3 + 29) )
    {
      *((_DWORD *)a3 + 29) = 1;
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 463) + 24LL))(
              *((_QWORD *)this + 463),
              a2,
              a3);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v19);
        return v20;
      }
    }
  }
  return 0LL;
}
