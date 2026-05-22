/*
 * XREFs of ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801E4D00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800A99EC (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z @ 0x1800A9D00 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800B95F0 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800C5930 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800C8640 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x1801E36F4 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E5608 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
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
  MPCButtonHoldHelper **v9; // rcx
  char IsPrimary; // al
  __int64 v11; // rcx
  bool v12; // bp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  std::_Ref_count_base *v16; // rcx
  char v17; // bl
  struct MPCHolographicInputManager *v18; // rax
  struct MPCHolographicInputManager *v19; // rax
  float *v20; // rax
  float v21[4]; // [rsp+30h] [rbp-D28h] BYREF
  _OWORD v22[4]; // [rsp+40h] [rbp-D18h] BYREF
  _BYTE v23[16]; // [rsp+80h] [rbp-CD8h] BYREF
  __int128 v24; // [rsp+90h] [rbp-CC8h]
  __int128 v25; // [rsp+A0h] [rbp-CB8h]
  __int128 v26; // [rsp+B0h] [rbp-CA8h]
  __int128 v27; // [rsp+C0h] [rbp-C98h]

  Instance = MPCGamepadInputHelper::GetInstance((__int64)this, (__int64)a2);
  ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(Instance, a3);
  v7 = ShouldUseGazeAndCommit;
  if ( !*((_BYTE *)this + 4158) && ShouldUseGazeAndCommit )
    MPCGamepadProcessor::ClearControllerProcessorState(
      (MPCGamepadProcessor *)((char *)this - 32),
      a3,
      *((_QWORD *)a3 + 4));
  v8 = *((_DWORD *)this + 919);
  v9 = (MPCButtonHoldHelper **)*((_QWORD *)this + 532);
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
    v14 = *(_QWORD *)(v13 + 24);
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v15 = *(_QWORD *)(v13 + 16);
    v16 = *(std::_Ref_count_base **)(v13 + 24);
    v17 = *(_BYTE *)(v15 + 10);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    if ( v17 )
    {
      v18 = MPCHolographicInputManager::GetInstance();
      *((_QWORD *)this + 520) = *((_QWORD *)v18 + 30);
      *((_DWORD *)this + 1042) = *((_DWORD *)v18 + 62);
      v19 = MPCHolographicInputManager::GetInstance();
      memcpy_0(v23, v19, 0xCD0uLL);
      v22[0] = v24;
      v22[1] = v25;
      v22[2] = v26;
      v22[3] = v27;
      v20 = Windows::Foundation::Numerics::transform(v21, (float *)this + 1040, (float *)v22);
      *(_QWORD *)((char *)this + 4172) = *(_QWORD *)v20;
      *(float *)&v20 = v20[2];
      *(_OWORD *)((char *)this + 4200) = 0LL;
      *((_DWORD *)this + 1045) = (_DWORD)v20;
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
