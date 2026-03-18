/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C3E28
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C01C423C (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C01C4158 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KTHREAD *v10; // rcx
  int v11; // edi
  __int64 v12; // r8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  const struct tagINPUTDEST *v19; // rax
  __int128 v20; // xmm2
  __int128 v21; // xmm7
  __m128i v22; // xmm0
  __int128 v23; // xmm6
  __int128 v24; // xmm5
  __int128 v25; // xmm4
  __int128 v26; // xmm3
  __int128 v27; // xmm1
  _OWORD v29[7]; // [rsp+28h] [rbp-E0h] BYREF
  char v30; // [rsp+98h] [rbp-70h]
  _BYTE v31[112]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v32[16]; // [rsp+118h] [rbp+10h] BYREF

  memset(v29, 0, sizeof(v29));
  v10 = *(struct _KTHREAD **)(a1 + 40);
  v11 = 0;
  v30 = 0;
  if ( v10 != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, v9);
    v10 = *(struct _KTHREAD **)(a1 + 40);
  }
  if ( v10 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, v9);
  v12 = *(_QWORD *)(a3 + 40);
  if ( v12 )
  {
    *(_WORD *)a5 = *(_WORD *)(v12 + 20);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(v12 + 24);
    v19 = (const struct tagINPUTDEST *)CTouchProcessor::DelegateCaptureInt(a1, v31, v12, 1LL);
    CInputDest::CInputDest((CInputDest *)v32, v19);
    CInputDest::operator=((__int64)v29, v32);
    CInputDest::SetEmpty((CInputDest *)v32);
    v20 = v29[5];
    v21 = v29[0];
    v22 = (__m128i)v29[5];
    v23 = v29[1];
    v24 = v29[2];
    v25 = v29[3];
    v26 = v29[4];
    v27 = v29[6];
    *(_OWORD *)(a5 + 8) = v29[0];
    *(_OWORD *)(a5 + 24) = v23;
    *(_OWORD *)(a5 + 40) = v24;
    *(_OWORD *)(a5 + 56) = v25;
    *(_OWORD *)(a5 + 72) = v26;
    *(__m128i *)(a5 + 88) = v22;
    *(_OWORD *)(a5 + 104) = v27;
    LOBYTE(v11) = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12)) != 0;
    *(_DWORD *)(a5 + 120) = v11;
    *a2 = v21;
    a2[1] = v23;
    a2[2] = v24;
    a2[3] = v25;
    a2[4] = v26;
    a2[5] = v20;
    a2[6] = v27;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, 0LL);
    v13 = v29[1];
    *a2 = v29[0];
    v14 = v29[2];
    a2[1] = v13;
    v15 = v29[3];
    a2[2] = v14;
    v16 = v29[4];
    a2[3] = v15;
    v17 = v29[5];
    a2[4] = v16;
    v18 = v29[6];
    a2[5] = v17;
    a2[6] = v18;
  }
  CInputDest::SetEmpty((CInputDest *)v29);
  return a2;
}
