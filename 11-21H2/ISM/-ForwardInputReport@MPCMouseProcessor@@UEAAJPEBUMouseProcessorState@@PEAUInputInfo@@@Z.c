/*
 * XREFs of ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C7D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     pow @ 0x18004A894 (pow.c)
 *     sqrt @ 0x18004A8B8 (sqrt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputManager@@@Z @ 0x1801C7A20 (-ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputMa.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C7F88 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C9AE8 (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 */

__int64 __fastcall MPCMouseProcessor::ForwardInputReport(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  MPCMouseProcessor *v6; // rbp
  int v7; // ecx
  int v8; // eax
  const struct MouseProcessorState *v9; // rdx
  struct InputInfo *v10; // r8
  __int64 v11; // rcx
  int v12; // r14d
  double v13; // xmm0_8
  double v14; // xmm7_8
  double v15; // xmm0_8
  int v16; // eax
  unsigned int v17; // esi
  int v19; // eax
  unsigned int v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  if ( (*((_BYTE *)a3 + 90) & 1) != 0
    || (v6 = (MPCMouseProcessor *)((char *)this - 8), *((_BYTE *)this + 5384))
    && MPCMouseProcessor::ButtonToInteractionState(
         (MPCMouseProcessor *)((char *)this - 8),
         *((_DWORD *)a2 + 4),
         16,
         (enum MPCHolographicInputManager::InteractionState *)&v22) )
  {
    *((_BYTE *)this + 5384) = 1;
    *((_DWORD *)a3 + 29) = 1;
    *((_DWORD *)this + 1322) = *((_DWORD *)a2 + 4);
  }
  else
  {
    *((_BYTE *)this + 5384) = 0;
    *((_DWORD *)this + 1323) = *((_DWORD *)a2 + 4);
    v7 = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 1318) = v7;
    v8 = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 1347) += v7;
    *((_DWORD *)this + 1348) += v8;
    ++*((_DWORD *)this + 1349);
    *((_DWORD *)this + 1319) = v8;
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3364)
      && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 418) )
    {
      MPCMouseProcessor::ProcessPoints(v6, v9, v10);
      if ( !*((_BYTE *)this + 5261) )
      {
        *((_DWORD *)this + 1316) = *(_DWORD *)a2;
        *((_DWORD *)this + 1317) = *((_DWORD *)a2 + 1);
        *((_BYTE *)this + 5261) = 1;
      }
      v11 = *((_QWORD *)a3 + 2);
      if ( (unsigned __int64)(v11 - *((_QWORD *)this + 667)) <= *((_QWORD *)this + 679) )
      {
        v12 = *((_DWORD *)this + 1320);
      }
      else
      {
        *((_DWORD *)this + 1320) = 0;
        v11 = *((_QWORD *)a3 + 2);
        v12 = 0;
      }
      v13 = (double)*((int *)this + 1319);
      *((_QWORD *)this + 667) = v11;
      v14 = pow(v13, 2.0);
      v15 = pow((double)*((int *)this + 1318), 2.0);
      *((_DWORD *)this + 1320) = v12 + (int)sqrt(v15 + v14);
      v16 = MPCMouseProcessor::ForwardInputReportInternal(v6, a2, a3);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD0,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
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
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v19);
        return v20;
      }
    }
  }
  return 0LL;
}
