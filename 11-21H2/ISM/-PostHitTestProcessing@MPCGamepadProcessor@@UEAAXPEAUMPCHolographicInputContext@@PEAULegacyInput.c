/*
 * XREFs of ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C60D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180093404 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z @ 0x1800936AC (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800A1F48 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800AF640 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x1801C4B5C (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C69E8 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::PostHitTestProcessing(
        MPCGamepadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  MPCGamepadInputHelper *Instance; // rax
  char ShouldUseGazeAndCommit; // al
  char v7; // bl
  int v8; // edx
  MPCSlateDeadzoneHelper *v9; // rcx
  char IsPrimary; // al
  __int64 v11; // rcx
  bool v12; // bp
  __int64 v13; // rax
  volatile signed __int32 *v14; // rcx
  char v15; // bl
  struct MPCHolographicInputManager *v16; // rax
  struct MPCHolographicInputManager *v17; // rax
  float *v18; // rax
  float v19[4]; // [rsp+30h] [rbp-D28h] BYREF
  _OWORD v20[4]; // [rsp+40h] [rbp-D18h] BYREF
  _BYTE v21[16]; // [rsp+80h] [rbp-CD8h] BYREF
  __int128 v22; // [rsp+90h] [rbp-CC8h]
  __int128 v23; // [rsp+A0h] [rbp-CB8h]
  __int128 v24; // [rsp+B0h] [rbp-CA8h]
  __int128 v25; // [rsp+C0h] [rbp-C98h]

  Instance = MPCGamepadInputHelper::GetInstance((__int64)this, (__int64)a2);
  ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(Instance, a3);
  v7 = ShouldUseGazeAndCommit;
  if ( !*((_BYTE *)this + 4158) && ShouldUseGazeAndCommit )
    MPCGamepadProcessor::ClearControllerProcessorState(
      (MPCGamepadProcessor *)((char *)this - 32),
      a3,
      *((_QWORD *)a3 + 4));
  v8 = *((_DWORD *)this + 919);
  v9 = (MPCSlateDeadzoneHelper *)*((_QWORD *)this + 532);
  *((_BYTE *)this + 4158) = v7;
  MPCSlateDeadzoneHelper::UpdateState(
    v9,
    (v8 & 4) != 0,
    *((_QWORD *)a3 + 2),
    *((float *)a3 + 61),
    *((float *)a3 + 62),
    *((float *)a3 + 76));
  IsPrimary = MPCInputProviderBase::IsPrimary((unsigned __int64)this);
  v11 = *((_QWORD *)this + 530);
  if ( IsPrimary )
  {
    v12 = !*(_BYTE *)(v11 + 8) && v7;
    v13 = *((_QWORD *)this + 532);
    v14 = *(volatile signed __int32 **)(v13 + 24);
    if ( v14 )
    {
      _InterlockedIncrement(v14 + 2);
      v14 = *(volatile signed __int32 **)(v13 + 24);
    }
    v15 = *(_BYTE *)(*(_QWORD *)(v13 + 16) + 10LL);
    if ( v14 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
    if ( v15 )
    {
      v16 = MPCHolographicInputManager::GetInstance();
      *((_QWORD *)this + 520) = *((_QWORD *)v16 + 30);
      *((_DWORD *)this + 1042) = *((_DWORD *)v16 + 62);
      v17 = MPCHolographicInputManager::GetInstance();
      memcpy_0(v21, v17, 0xCD0uLL);
      v20[0] = v22;
      v20[1] = v23;
      v20[2] = v24;
      v20[3] = v25;
      v18 = Windows::Foundation::Numerics::transform(v19, (float *)this + 1040, (float *)v20);
      *(_QWORD *)((char *)this + 4172) = *(_QWORD *)v18;
      *(float *)&v18 = v18[2];
      *(_OWORD *)((char *)this + 4200) = 0LL;
      *((_DWORD *)this + 1045) = (_DWORD)v18;
    }
    if ( v12 )
      MPCGamepadProcessor::SendMPCInput((MPCGamepadProcessor *)((char *)this - 32), a3);
    else
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 455) + 48LL))(
        *((_QWORD *)this + 455),
        *((_QWORD *)this + 458));
  }
  else if ( *(_BYTE *)(v11 + 8) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 455) + 48LL))(
      *((_QWORD *)this + 455),
      *((_QWORD *)this + 458));
  }
}
