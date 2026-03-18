/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C01C2140
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9674 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00B96E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00B9720 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00B9790 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E3AD6 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A4E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01B52E4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01B53BC (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7440 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01D1DD4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D8320 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C0206FB8 (ApiSetEditionPointerActivate.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(__int64 a1, __int64 a2, void *a3)
{
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r9
  __int64 v13; // r8
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int128 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  _OWORD v26[7]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[40]; // [rsp+C0h] [rbp-40h] BYREF
  CInpLockGuard *v28; // [rsp+E8h] [rbp-18h]
  _BYTE v29[48]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v30[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v31[128]; // [rsp+160h] [rbp+60h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v29, (struct CInpLockGuard *)(a1 + 32), a3);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, (unsigned __int64)a3);
  v8 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v9 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)NonConstMsgData + 7));
    v10 = v9;
    if ( v9 )
    {
      if ( *((_DWORD *)v8 + 8) >= *(_DWORD *)(v9 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12852);
      v11 = *(_QWORD *)(v10 + 240) + 480LL * *((unsigned int *)v8 + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12854);
      if ( *((_WORD *)v8 + 8) != *(_WORD *)(v11 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12855);
      if ( qword_1C0295450 )
        qword_1C0295450(v10, &v24, CTouchProcessor::DereferencePointerInputFrame);
      CInputDest::CInputDest((CInputDest *)v31, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v30, (struct CInputDest *)v31);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v27,
        (struct CInpLockGuard *)(a1 + 32),
        *(void **)(v11 + 16),
        v12);
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_OWORD *)(a2 + 16);
      v15 = *(unsigned __int16 *)(v11 + 144);
      v26[0] = *(_OWORD *)a2;
      v16 = *(_OWORD *)(a2 + 32);
      v26[1] = v14;
      v17 = *(_OWORD *)(a2 + 48);
      v26[2] = v16;
      v18 = *(_OWORD *)(a2 + 64);
      v26[3] = v17;
      v19 = *(_OWORD *)(a2 + 80);
      v26[4] = v18;
      v20 = *(_OWORD *)(a2 + 96);
      v26[5] = v19;
      v26[6] = v20;
      ApiSetEditionPointerActivate(v26, v15, v13, v11 + 160);
      CInpLockGuard::LockExclusive(v28);
      CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v27, v21, v22, v23);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v30);
      if ( qword_1C0295460 )
        qword_1C0295460(&v24);
      CTouchProcessor::UnreferenceFrame(a1, v10);
      CInputDest::SetEmpty((CInputDest *)v31);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v29);
}
