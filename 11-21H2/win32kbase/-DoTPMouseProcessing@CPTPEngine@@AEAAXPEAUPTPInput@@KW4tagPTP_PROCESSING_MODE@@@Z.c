/*
 * XREFs of ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C02007A8
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020273C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C00E9CE0 (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 *     ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C01FF270 (-CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C0201120 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?FindNearbyContact@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@PEAUCContactState@@UtagPOINT@@K@Z @ 0x1C020158C (-FindNearbyContact@CPTPEngine@@AEAAPEAUPTPEnginePointerNode@@PEAUPTPInput@@PEAUCContactState@@Ut.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C0201AC8 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020269C (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C020386C (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1C0203AD8 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x1C0203C14 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C0203CB4 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C0203D04 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C0203F40 (-SendTimedMouseClick@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z.c)
 *     ?SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x1C0204004 (-SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C0204048 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C02043C8 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

void __fastcall CPTPEngine::DoTPMouseProcessing(__int64 a1, __int64 *a2, int a3, int a4)
{
  int v6; // r15d
  int v7; // r11d
  __int64 v8; // r12
  __int64 *v9; // rbx
  unsigned int v10; // r14d
  int v11; // r9d
  int v12; // r10d
  unsigned int v13; // edx
  __int64 v14; // r13
  bool v15; // r8
  bool v16; // r15
  int v17; // eax
  int v18; // r9d
  __int64 v19; // r10
  __int64 v20; // rcx
  char v21; // r11
  int v22; // eax
  char v23; // r8
  int v24; // ecx
  _DWORD *v25; // rdx
  __int64 *v26; // r8
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  __int64 *v30; // rbp
  __int64 v31; // rax
  unsigned __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // r8
  unsigned int v37; // edx
  int v38; // eax
  __int64 v39; // r15
  __int64 v40; // rax
  int v41; // r9d
  int v42; // ebx
  int v43; // r10d
  unsigned int v44; // r12d
  _DWORD *v45; // r9
  __int64 *v46; // rbp
  unsigned int v47; // r11d
  unsigned int v48; // r13d
  __int64 *v49; // rax
  _DWORD *v50; // r9
  bool v51; // zf
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  LONG x; // r14d
  int y; // ebp
  struct tagPOINT v57; // rbx
  int v58; // eax
  int v59; // [rsp+30h] [rbp-88h]
  int v60; // [rsp+34h] [rbp-84h]
  __int64 *v61; // [rsp+38h] [rbp-80h]
  __int64 *v62; // [rsp+40h] [rbp-78h]
  _DWORD *v63; // [rsp+48h] [rbp-70h]
  int v64[2]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v65; // [rsp+58h] [rbp-60h]
  int v66; // [rsp+5Ch] [rbp-5Ch]
  __int64 v67; // [rsp+60h] [rbp-58h]
  int v68; // [rsp+68h] [rbp-50h]
  __int64 *v69; // [rsp+70h] [rbp-48h]
  int v70; // [rsp+C8h] [rbp+10h]
  struct tagPOINT v71; // [rsp+C8h] [rbp+10h]
  int v72; // [rsp+CCh] [rbp+14h]

  v62 = 0LL;
  v60 = 0;
  v68 = 0;
  v66 = 0;
  v65 = 0;
  v6 = a4;
  v7 = a3;
  v8 = *a2;
  v70 = 0;
  v9 = a2 + 7;
  v67 = *a2;
  v69 = a2 + 7;
  *(_QWORD *)v64 = a2 + 7;
  v61 = 0LL;
  v63 = 0LL;
  v59 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  v10 = 2;
  do
  {
    v11 = *((_DWORD *)v9 + 3);
    if ( !v11 )
      goto LABEL_74;
    v12 = *(_DWORD *)(a1 + 3644);
    v13 = *((_DWORD *)v9 + 1) % *(_DWORD *)(a1 + 16);
    v14 = 400LL * v13 + a1 + 1208;
    v15 = v12 == 2 && *(_DWORD *)(a1 + 3608) == v13;
    v16 = v6 == 2 && *(_DWORD *)(a1 + 3608) == v13;
    if ( (v11 & 0x40000) != 0
      || (*(_DWORD *)v14 & 4) == 0
      || (*(_DWORD *)(v14 + 4) & 2) == 0
      || !v15 && v12 == 2
      || (*(_DWORD *)v14 & 0x80u) != 0 && v7 != 1 && !v15
      || (v17 = *(_DWORD *)(a1 + 3936), (v17 & 2) != 0)
      || (v17 & 4) != 0 )
    {
      v27 = *(_DWORD *)(a1 + 3936);
      if ( (v27 & 0x100000) == 0 && v12 != 2 && (v11 & 0x48000) == 0x40000 )
      {
        v28 = *(_DWORD *)v14;
        if ( (*(_DWORD *)v14 & 0x20) != 0
          && (v28 & 0x10) == 0
          && ((v28 & 0x1000000) == 0 || (v28 & 4) == 0 || v16 && (v27 & 0x20000000) == 0)
          && (v28 & 0x40000000) != 0
          && ((v28 & 8) == 0 || v16 && (v27 & 0x20000000) == 0) )
        {
          v26 = v62;
          v29 = 1;
          v24 = v59;
          v30 = v9;
          v25 = v63;
          v6 = a4;
          v70 = 1;
          v61 = v9;
          goto LABEL_76;
        }
      }
      if ( (*(_DWORD *)(a1 + 268) & 0x100) != 0 && (v11 & 0x48000) == 0x40000 )
      {
        v31 = *(_QWORD *)(v14 + 112);
        if ( v31 != *(_QWORD *)(v14 + 72) )
        {
          v32 = *(_QWORD *)(a1 + 96);
          v33 = v8 - v31;
          if ( v8 - v31 >= v32 * *(unsigned int *)(a1 + 316) / 0x3E8 )
          {
            v9 = *(__int64 **)v64;
          }
          else
          {
            if ( !CPTPEngine::CrossedTPMoveFilteringThreshold(
                    (CPTPEngine *)a1,
                    (struct CContactState *)v14,
                    *(struct tagPOINT *)(v14 + 8))
              && v16
              && (*((_DWORD *)a2 + 7) != *(_DWORD *)(v14 + 64) || *((_DWORD *)a2 + 8) != *(_DWORD *)(v14 + 68)) )
            {
              CBasePTPEngine::SendWarpbackTelemetry(
                a1,
                14LL,
                *(__int64 *)((char *)a2 + 28),
                *(_QWORD *)(v14 + 64),
                1000 * v33 / v32);
              CBasePTPEngine::SendMouseOutput(a1, 5LL, *(_QWORD *)(v14 + 64));
            }
            v9 = *(__int64 **)v64;
LABEL_47:
            v7 = a3;
          }
        }
      }
      v6 = a4;
LABEL_74:
      v25 = v63;
      v24 = v59;
      v26 = v62;
      goto LABEL_75;
    }
    v18 = *(_DWORD *)(a1 + 3936);
    if ( v12 != 2 && (v17 & 0x400000) == 0 && (v17 & 0x200000) != 0 )
    {
      v18 = v17 | 0x400000;
      *(_QWORD *)(a1 + 3824) = v8;
      *(_DWORD *)(a1 + 3936) = v17 | 0x400000;
    }
    v19 = *(_QWORD *)(a1 + 96);
    if ( (v18 & 0x200000) == 0 )
    {
      v20 = *(_QWORD *)(a1 + 96);
LABEL_30:
      v21 = 1;
      goto LABEL_31;
    }
    v20 = *(_QWORD *)(a1 + 96);
    if ( v8 - *(_QWORD *)(a1 + 3824) >= v19 * (unsigned __int64)*(unsigned int *)(a1 + 232) / 0x3E8 )
      goto LABEL_30;
    v21 = 0;
LABEL_31:
    v22 = v18;
    if ( (v18 & 0x8000000) == 0 && (v18 & 0x4000000) != 0 && a3 == 1 )
    {
      v22 = v18 | 0x8000000;
      *(_QWORD *)(a1 + 3840) = v8;
      *(_DWORD *)(a1 + 3936) = v18 | 0x8000000;
    }
    if ( (v22 & 0x4000000) != 0 )
    {
      if ( v8 - *(_QWORD *)(a1 + 3840) < v19 * (unsigned __int64)*(unsigned int *)(a1 + 412) / 0x3E8 )
      {
        v23 = 0;
        goto LABEL_39;
      }
      v20 = v19;
    }
    v23 = 1;
    v19 = v20;
LABEL_39:
    if ( !v21 || !v23 || v8 - *(_QWORD *)(v14 + 80) < v19 * (unsigned __int64)*(unsigned int *)(a1 + 548) / 0x3E8 )
      goto LABEL_47;
    v64[0] = 0;
    if ( !(unsigned int)CPTPEngine::TPAAPShouldAllowMoveNow(
                          (CPTPEngine *)a1,
                          (struct PTPInput *)a2,
                          (struct CContactState *)v14,
                          v64) )
    {
      if ( v64[0] )
      {
        CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
        *(_DWORD *)(a1 + 3644) = 1;
      }
      goto LABEL_47;
    }
    v7 = a3;
    v24 = 1;
    v6 = a4;
    v25 = (_DWORD *)v14;
    v59 = 1;
    v26 = v9;
    v63 = (_DWORD *)v14;
    v62 = v9;
LABEL_75:
    v30 = v61;
    v29 = v70;
LABEL_76:
    v9 += 12;
    *(_QWORD *)v64 = v9;
    ++v65;
  }
  while ( v65 < *((_DWORD *)a2 + 12) );
  if ( v24 )
  {
    if ( v29 && ((*v25 & 0x80u) != 0 || (*v25 & 0x10) == 0) )
      goto LABEL_83;
    v35 = *((_DWORD *)v26 + 1);
    v36 = v26[5];
    v37 = v35 % *(_DWORD *)(a1 + 16);
    v72 = HIDWORD(v36);
    v38 = *(_DWORD *)(a1 + 3936);
    v39 = 400LL * v37 + a1 + 1208;
    if ( (v38 & 0x8000000) != 0 )
    {
      v38 &= 0xF3FFFFFF;
      *(_DWORD *)(a1 + 3936) = v38;
    }
    if ( *(_DWORD *)(a1 + 3644) == 2 )
      goto LABEL_131;
    *(_DWORD *)(a1 + 3644) = 2;
    *(_DWORD *)(a1 + 3936) = v38 & 0xFF9FFFFF;
    v40 = a1 + 1208;
    *(_DWORD *)(a1 + 3608) = v37;
    v41 = 1;
    v60 = 1;
    while ( v40 != a1 + 3608 )
    {
      *(_QWORD *)(v40 + 104) = 0LL;
      *(_DWORD *)v40 &= ~0x10000u;
      v40 += 400LL;
    }
    *(_DWORD *)v39 |= 0x10000u;
    *(_QWORD *)(v39 + 104) = v8;
    if ( v7 != 2 || (v42 = *(_DWORD *)(a1 + 3940), v43 = -(v42 & 1), (v42 & 1) == 0) && (v42 & 2) == 0 )
    {
LABEL_132:
      v52 = *(_DWORD *)(a1 + 3936);
      if ( (v52 & 0x800000) != 0 )
      {
        v41 = 1;
        *(_DWORD *)(a1 + 3936) = v52 & 0xFF7FFFFF;
      }
      else
      {
        if ( !v41 )
        {
          v53 = v36 - *(_DWORD *)(a1 + 3688);
          v66 = v72 - *(_DWORD *)(a1 + 3692);
          goto LABEL_138;
        }
        *(_DWORD *)(a1 + 3936) = v52 & 0xDFFFFFFF;
        CBasePTPEngine::SendTotalTimeTelemetry(a1, 1LL, v8 - *(_QWORD *)(v39 + 72));
        v41 = v60;
      }
      *(_QWORD *)(a1 + 3688) = *(_QWORD *)(v39 + 8);
      *(_DWORD *)v39 &= ~0x4000000u;
      v53 = v68;
LABEL_138:
      v54 = *(_DWORD *)(a1 + 196);
      v71.x = 100 * v53 / v54;
      x = v71.x;
      v71.y = 100 * v66 / v54;
      y = v71.y;
      v57 = v71;
      if ( !v41 )
      {
        x = v71.x - *(_DWORD *)(a1 + 3696);
        y = v71.y - *(_DWORD *)(a1 + 3700);
        v57 = (struct tagPOINT)__PAIR64__(y, x);
      }
      *(struct tagPOINT *)(a1 + 3696) = v71;
      if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                            (CPTPEngine *)a1,
                            (struct PTPInput *)a2,
                            v57,
                            (struct CContactState *)v39)
        && (x || y) )
      {
        v58 = *(_DWORD *)(a1 + 3936);
        if ( (v58 & 0x20000000) == 0 )
        {
          CBasePTPEngine::SendLastActionTelemetry(a1, 10LL);
          v58 = *(_DWORD *)(a1 + 3936);
        }
        *(_DWORD *)(a1 + 3936) = v58 | 0x20000000;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(a1, 0LL, v57);
      }
      return;
    }
    v44 = *((_DWORD *)a2 + 12);
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0;
    if ( v44 )
    {
      v48 = *(_DWORD *)(a1 + 16);
      v49 = a2 + 7;
      while ( 1 )
      {
        v45 = (_DWORD *)(400LL * (*((_DWORD *)v49 + 1) % v48) + a1 + 1208);
        if ( (*v45 & 1) != 0 && v45 != (_DWORD *)v39 )
          break;
        ++v47;
        v49 = v69 + 12;
        v69 += 12;
        if ( v47 >= v44 )
          goto LABEL_121;
      }
      v46 = v69;
    }
LABEL_121:
    if ( (v45[1] & 8) != 0 )
    {
      if ( (v42 & 2) != 0 && PtInRect((_DWORD *)(a1 + 124), v46[5]) )
      {
        v10 = 8;
        v51 = (*(_DWORD *)(a1 + 3936) & 0x10) == 0;
        goto LABEL_128;
      }
      if ( v43 && PtInRect((_DWORD *)(a1 + 108), v46[5]) )
      {
        v51 = (*(_DWORD *)(a1 + 3936) & 8) == 0;
LABEL_128:
        if ( v51 )
        {
          *v50 |= 0x8000u;
          CPTPEngine::SendMouseDownAtPoint((CPTPEngine *)a1, v10, *(struct tagPOINT *)((char *)a2 + 28));
          return;
        }
      }
    }
    v8 = v67;
LABEL_131:
    v41 = v60;
    goto LABEL_132;
  }
  if ( !v29 )
    return;
LABEL_83:
  v34 = 400LL * (unsigned int)(*((_DWORD *)v30 + 1) % *(_DWORD *)(a1 + 16)) + a1 + 1208;
  if ( *(_DWORD *)(a1 + 3732) <= *(_DWORD *)(v34 + 140)
    && (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)a1, (struct PTPInput *)a2, 0xAu, 1, 1)
    && !(unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)a1, (struct PTPInput *)a2, 0)
    && !CPTPEngine::FindNearbyContact(
          (CPTPEngine *)a1,
          (struct PTPInput *)a2,
          (struct CContactState *)v34,
          (struct tagPOINT)v30[5],
          *(_DWORD *)(a1 + 444))
    && (*(_DWORD *)(a1 + 464) & 0x200) != 0 )
  {
    if ( (*(_QWORD *)(a1 + 3672) = *(__int64 *)((char *)a2 + 28),
          *(_QWORD *)(a1 + 3680) = *(_QWORD *)(v34 + 16),
          !*((_DWORD *)a2 + 10))
      && !*((_DWORD *)a2 + 13)
      || (CBasePTPEngine::SendInertiaOutput(a1, 3LL), !*((_DWORD *)a2 + 10)) )
    {
      CBasePTPEngine::SendLastActionTelemetry(a1, 1LL);
      CBasePTPEngine::SendTotalTimeTelemetry(a1, 0LL, v8 - *(_QWORD *)(v34 + 80));
      *(_QWORD *)(a1 + 3904) = v8;
      CPTPEngine::SendMouseUpIfPending((CPTPEngine *)a1, (unsigned int *)(a1 + 3612));
      if ( (*(_DWORD *)(a1 + 3940) & 2) != 0 && PtInRect((_DWORD *)(a1 + 124), v30[5]) )
      {
        v10 = 8;
        if ( (*(_DWORD *)(a1 + 3936) & 0x10) != 0 )
          return;
      }
      else if ( (*(_DWORD *)(a1 + 3936) & 8) != 0 )
      {
        return;
      }
      if ( (*(_DWORD *)v34 & 4) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 268) & 0x400) != 0
          && !*(_DWORD *)(a1 + 3628)
          && (*(_DWORD *)(v34 + 64) != *((_DWORD *)a2 + 7) || *(_DWORD *)(v34 + 68) != *((_DWORD *)a2 + 8)) )
        {
          CBasePTPEngine::SendWarpbackTelemetry(
            a1,
            15LL,
            *(__int64 *)((char *)a2 + 28),
            *(_QWORD *)(v34 + 64),
            (unsigned __int64)(1000 * (v8 - *(_QWORD *)(v34 + 80))) / *(_QWORD *)(a1 + 96));
          CBasePTPEngine::SendMouseOutput(a1, 5LL, *(_QWORD *)(v34 + 64));
        }
        CPTPEngine::SendTimedMouseClick(
          (CPTPEngine *)a1,
          v10,
          *(struct tagPOINT *)(v34 + 64),
          -__CFSHR__(*(_DWORD *)(a1 + 472), 3),
          *(_DWORD *)(a1 + 236));
        *(_DWORD *)v34 &= ~4u;
      }
      else
      {
        CPTPEngine::SendTimedMouseClick(
          (CPTPEngine *)a1,
          v10,
          *(struct tagPOINT *)((char *)a2 + 28),
          -__CFSHR__(*(_DWORD *)(a1 + 472), 3),
          *(_DWORD *)(a1 + 236));
      }
      CPTPEngine::ResetDragThresholds((CPTPEngine *)a1, (struct PTPInput *)a2);
    }
  }
}
