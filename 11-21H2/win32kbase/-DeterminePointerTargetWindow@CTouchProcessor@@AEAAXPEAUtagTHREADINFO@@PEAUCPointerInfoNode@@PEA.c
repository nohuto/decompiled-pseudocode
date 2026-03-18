/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C4708
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C4B20 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0042158 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00422E0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C00E7B9A (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E868C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01CBDE4 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01CE784 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C01CF204 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C01D3CB8 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtag.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C01D71B0 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C020A154 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C02100B4 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DeterminePointerTargetWindow(
        struct _KTHREAD **this,
        struct tagTHREADINFO *a2,
        struct CPointerInfoNode *a3,
        struct tagQ *a4,
        unsigned int a5,
        int *a6,
        struct tagPOINT *a7,
        struct CInputDest *a8)
{
  __int64 v9; // r12
  const struct tagQ *v10; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // ecx
  CTouchProcessor *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // r14d
  __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r12
  struct CInputDest *v34; // rdx
  struct tagTHREADINFO *v35; // rbx
  int v36; // r14d
  _OWORD *v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  CPointerInfoNode *v47; // rcx
  __int64 v48; // [rsp+28h] [rbp-D8h]
  __int64 v49; // [rsp+38h] [rbp-C8h]
  int v50; // [rsp+48h] [rbp-B8h]
  char *v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v54; // [rsp+74h] [rbp-8Ch]
  tagPOINT v55; // [rsp+78h] [rbp-88h] BYREF
  int v56; // [rsp+80h] [rbp-80h]
  struct CInputDest *v57; // [rsp+88h] [rbp-78h] BYREF
  struct tagTHREADINFO *v58; // [rsp+90h] [rbp-70h]
  struct tagQ *v59; // [rsp+98h] [rbp-68h]
  int *v60; // [rsp+A0h] [rbp-60h]
  _OWORD v61[7]; // [rsp+B0h] [rbp-50h] BYREF
  PERESOURCE *v62[6]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v63[64]; // [rsp+150h] [rbp+50h] BYREF
  char v64; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v65[16]; // [rsp+200h] [rbp+100h] BYREF

  v9 = *((unsigned __int16 *)a3 + 86);
  v10 = a4;
  v55 = 0LL;
  v53 = 0;
  v60 = a6;
  v54 = v9;
  v59 = a4;
  v58 = a2;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  CInputDest::SetEmpty(a8);
  v19 = *((_QWORD *)a3 + 2);
  v57 = 0LL;
  v20 = CTouchProcessor::RecheckPointerCapture(this, v19, a5, &v57, &v53);
  if ( v20 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v57);
  }
  else
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
    v24 = *((_DWORD *)a3 + 45);
    if ( (v24 & 0x40004) != 0 && (v24 & 0x10000) == 0 )
      return;
  }
  CTouchProcessor::GetPointerOffset((CTouchProcessor *)this, *((_WORD *)a3 + 86), &v55);
  if ( !v20 )
  {
    v26 = CTouchProcessor::PointerFlagsToMessage(v25, *((_DWORD *)a3 + 45));
    v29 = *((unsigned __int16 *)a3 + 90);
    v30 = *((unsigned __int16 *)a3 + 100);
    v31 = *((_QWORD *)a3 + 25);
    v56 = v26;
    v32 = v9 | ((unsigned __int64)(v29 & 0xFFFFE1F7) << 16);
    v33 = v30 | ((unsigned __int64)*((unsigned __int16 *)a3 + 102) << 16);
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v27, v28);
    v34 = (struct CPointerInfoNode *)((char *)a3 + 352);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v63, v34, v28);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v62, this + 4, *((void **)a3 + 2));
      v52 = *((_QWORD *)a3 + 2);
      v51 = (char *)a3 + 160;
      v50 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v63, v34, v28);
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v62, this + 4, *((void **)a3 + 2));
      v52 = *((_QWORD *)a3 + 2);
      v51 = (char *)a3 + 160;
      v50 = 1;
    }
    v49 = v31;
    v35 = v58;
    v48 = v32;
    v36 = v56;
    v37 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v64,
                      (_DWORD)v58,
                      (int)a3 + 352,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v56,
                      v48,
                      v33,
                      v49,
                      (__int64)&v53,
                      v50,
                      (__int64)v51,
                      v52,
                      (__int64)&v55);
    v38 = v37[1];
    v61[0] = *v37;
    v39 = v37[2];
    v61[1] = v38;
    v40 = v37[3];
    v61[2] = v39;
    v41 = v37[4];
    v61[3] = v40;
    v42 = v37[5];
    v61[4] = v41;
    v43 = v37[6];
    v61[5] = v42;
    v61[6] = v43;
    CInputDest::CInputDest((CInputDest *)v65, (const struct tagINPUTDEST *)v61);
    CInputDest::operator=((__int64)a8, v65);
    CInputDest::SetEmpty((CInputDest *)v65);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v62);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v63);
    InputTraceLogging::Pointer::SecondaryHitTest(
      (struct CPointerInfoNode *)((char *)a3 + 168),
      *((_QWORD *)a3 + 2),
      v36,
      a8,
      &v55);
    if ( *(_DWORD *)a8 )
    {
      if ( v53 == -1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46);
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset((CTouchProcessor *)this, v54, &v55);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v47, v35) )
    {
      CInputDest::SetEmpty(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a3 + 2), a5, &v57, &v53) )
      CInputDest::operator=((__int64)a8, (__int64)v57);
    v10 = v59;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 25),
                        (char *)a3 + 160,
                        v55,
                        a7) )
  {
    a7->x = 0;
    a7->y = 0;
  }
  if ( *(_DWORD *)a8 )
  {
    if ( !v10 || CInputDest::UsesQueue(a8, v10) || (CInputDest::SetEmpty(a8), *(_DWORD *)a8) )
      *v60 = v53;
  }
}
