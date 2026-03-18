/*
 * XREFs of ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C00356F8
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C003880C (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 * Callees:
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x1C00345DC (ApiSetEditionPostDwmSpeedHitTest.c)
 *     DCompHitTest @ 0x1C0034BE0 (DCompHitTest.c)
 *     MouseButtonToPointerFlags @ 0x1C0035650 (MouseButtonToPointerFlags.c)
 *     CanHitTestInDwm @ 0x1C00358C0 (CanHitTestInDwm.c)
 *     INPUTDEST_FROM_PWND @ 0x1C003AD68 (INPUTDEST_FROM_PWND.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C003B4E4 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C003C5D0 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     ApiSetEditionNonDwmSpeedHitTest @ 0x1C00B1ED0 (ApiSetEditionNonDwmSpeedHitTest.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ApiSetEditionMouseCaptureHitTest @ 0x1C0209938 (ApiSetEditionMouseCaptureHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseSpeedHitTest(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        _DWORD *a12,
        __int64 a13)
{
  int v13; // esi
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int128 v23; // xmm5
  __int128 v24; // xmm6
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int128 v31; // xmm5
  __int128 v32; // xmm6
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _OWORD *v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int128 v39; // xmm3
  __int128 v40; // xmm4
  __int128 v41; // xmm5
  __int128 v42; // xmm6
  _QWORD v43[10]; // [rsp+38h] [rbp-C9h] BYREF
  _OWORD v44[8]; // [rsp+88h] [rbp-79h] BYREF

  v13 = 0;
  if ( gspwndInternalCapture )
  {
    if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
    ApiSetEditionMouseCaptureHitTest(v34, a2, a3);
    *a12 = 1;
    INPUTDEST_FROM_PWND(a1, gspwndInternalCapture);
  }
  else
  {
    memset(a1, 0, 0x70uLL);
    memset(v43, 0, sizeof(v43));
    *(_QWORD *)((char *)&v43[2] + 4) = *a2;
    v43[6] = a6;
    LODWORD(v43[5]) = a7;
    v43[4] = a8;
    LODWORD(v43[0]) = 4;
    HIDWORD(v43[1]) = 0;
    HIDWORD(v43[0]) = MouseButtonToPointerFlags(a4);
    LOWORD(v43[1]) = a5;
    if ( (unsigned __int8)CanHitTestInDwm() )
    {
      v43[7] = __PAIR64__(a10, a9);
      v43[8] = InputConfig::Mouse::GetInputSpaceId();
      LODWORD(v43[9]) = a11;
      v18 = DCompHitTest(v44);
      v19 = v18[1];
      v20 = v18[2];
      v21 = v18[3];
      v22 = v18[4];
      v23 = v18[5];
      v24 = v18[6];
      *a1 = *v18;
      a1[1] = v19;
      a1[2] = v20;
      a1[3] = v21;
      a1[4] = v22;
      a1[5] = v23;
      a1[6] = v24;
      LOBYTE(v13) = *(_DWORD *)a1 != 0;
      *a12 = v13;
      ApiSetEditionPostDwmSpeedHitTest((__int64)a1, (__int64)a2, a3, 0LL, a13, (__int64)a12);
    }
    else if ( a10 )
    {
      v36 = (_OWORD *)INPUTDEST_FROM_PWND(v44, *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 1) + 24LL));
      v37 = v36[1];
      v38 = v36[2];
      v39 = v36[3];
      v40 = v36[4];
      v41 = v36[5];
      v42 = v36[6];
      *a1 = *v36;
      a1[1] = v37;
      a1[2] = v38;
      a1[3] = v39;
      a1[4] = v40;
      a1[5] = v41;
      a1[6] = v42;
      *a12 = 0;
    }
    else
    {
      v26 = (_OWORD *)ApiSetEditionNonDwmSpeedHitTest(v44, a2, a3, a12);
      v27 = v26[1];
      v28 = v26[2];
      v29 = v26[3];
      v30 = v26[4];
      v31 = v26[5];
      v32 = v26[6];
      *a1 = *v26;
      a1[1] = v27;
      a1[2] = v28;
      a1[3] = v29;
      a1[4] = v30;
      a1[5] = v31;
      a1[6] = v32;
    }
  }
  return a1;
}
