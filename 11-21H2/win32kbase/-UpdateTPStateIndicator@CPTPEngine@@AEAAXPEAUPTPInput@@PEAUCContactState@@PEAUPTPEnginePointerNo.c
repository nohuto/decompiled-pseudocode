/*
 * XREFs of ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0204A20
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020273C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 *     ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C01FF0A8 (-CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 *     ?CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C01FF2D8 (-CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x1C0201A40 (-PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z.c)
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C02041EC (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0204350 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C0204570 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 */

void __fastcall CPTPEngine::UpdateTPStateIndicator(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct PTPEnginePointerNode *a4,
        int *a5)
{
  unsigned __int64 v5; // rbx
  int v6; // r15d
  __int64 v8; // r13
  struct PTPInput *v12; // rdx
  int v13; // r9d
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  int v16; // eax
  int v17; // r9d
  struct PTPInput *v18; // rdx
  unsigned int v19; // ebp
  int v20; // r12d
  int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // r8d
  int v31; // ecx

  v5 = *((_QWORD *)a4 + 5);
  v6 = 0;
  v8 = *((_QWORD *)a4 + 10);
  if ( *((_DWORD *)a4 + 3) )
  {
    *((_QWORD *)a3 + 1) = v5;
    if ( !*((_DWORD *)this + 5) || !*((_DWORD *)this + 115) || PtInRect((_DWORD *)this + 12, *((_QWORD *)a4 + 5)) )
    {
      *(_DWORD *)a3 |= 0x800u;
      CPTPEngine::TPAAPSetCurtainState(this, 0);
    }
    v12 = (struct PTPInput *)*((unsigned int *)this + 984);
    if ( ((unsigned int)v12 & 0x4000000) != 0
      && (unsigned int)(*((_DWORD *)a2 + 6) - *((_DWORD *)this + 933)) > *((_DWORD *)this + 102) )
    {
      LODWORD(v12) = (unsigned int)v12 & 0xFBFFFFFF;
      *((_DWORD *)this + 984) = (_DWORD)v12;
    }
    v13 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x40) == 0 && !PtInRect((_DWORD *)this + 968, v5) )
    {
      v13 |= 0x40u;
      *(_DWORD *)a3 = v13;
    }
    if ( (v13 & 1) != 0 )
    {
      CPTPEngine::UpdateContactRestingState(this, v12, (struct tagPOINT)v5, v8, a3);
      v19 = *(_DWORD *)a3 & 0xFFFFFFFD;
      *(_DWORD *)a3 = v19;
      if ( (*((_DWORD *)a4 + 3) & 0x40000) == 0 )
      {
        v20 = v19;
        if ( (v19 & 4) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 0) )
        {
          v20 = v19 | 4;
          *(_DWORD *)a3 = v19 | 4;
          *((_QWORD *)a3 + 5) = v5;
          *a5 = 1;
        }
        v21 = v20;
        if ( (v20 & 8) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 1) )
        {
          v21 = v20 | 8;
          *(_DWORD *)a3 = v20 | 8;
        }
        if ( (v21 & 0x80000) == 0
          && *((unsigned int *)this + 101) * (__int64)(int)((*((_QWORD *)a3 + 6) - v5) * (*((_QWORD *)a3 + 6) - v5))
           + (unsigned __int64)*((unsigned int *)this + 100)
           * (int)((HIDWORD(*((_QWORD *)a3 + 6)) - HIDWORD(v5)) * (HIDWORD(*((_QWORD *)a3 + 6)) - HIDWORD(v5))) >= *((unsigned int *)this + 101) * (unsigned __int64)*((unsigned int *)this + 100) )
        {
          v21 |= 0x80000u;
          *(_DWORD *)a3 = v21;
        }
        v19 = v21;
        if ( (v21 & 0x1000000) == 0 && CPTPEngine::CrossedTPTapWarpBackThreshold(this, a3, (struct tagPOINT)v5) )
        {
          v19 = v21 | 0x1000000;
          *(_DWORD *)a3 = v21 | 0x1000000;
        }
        if ( (v19 & 0x10000000) == 0 )
        {
          v22 = (unsigned int)(*((_DWORD *)this + 94) * *((_DWORD *)this + 94));
          v23 = (unsigned int)(*((_DWORD *)this + 95) * *((_DWORD *)this + 95));
          if ( v23 * (int)((*((_QWORD *)a3 + 2) - v5) * (*((_QWORD *)a3 + 2) - v5))
             + v22 * (int)((HIDWORD(*((_QWORD *)a3 + 2)) - HIDWORD(v5)) * (HIDWORD(*((_QWORD *)a3 + 2)) - HIDWORD(v5))) >= (unsigned __int64)(v23 * v22) )
          {
            v19 |= 0x10000000u;
            *(_DWORD *)a3 = v19;
          }
        }
      }
      v24 = *((_QWORD *)this + 468);
      v25 = v8 - *((_QWORD *)a3 + 9);
      v26 = v19 & 0xFFFFFFDF | (*((_QWORD *)this + 470) < v25 ? 0x20 : 0);
      *(_DWORD *)a3 = v26;
      v27 = v26 & 0xFFEFFFFF | (*((_QWORD *)this + 471) < v25 ? 0x100000 : 0);
      *(_DWORD *)a3 = v27;
      v28 = v27 & 0xFFDFFFFF | (*((_QWORD *)this + 472) < v25 ? 0x200000 : 0);
      *(_DWORD *)a3 = v28;
      v29 = v28 & 0xFFBFFFFF | (*((_QWORD *)this + 473) < v25 ? 0x400000 : 0);
      *(_DWORD *)a3 = v29;
      v30 = v29 & 0xFF7FFFFF | (*((_QWORD *)this + 471) < (unsigned __int64)(v8 - v24) ? 0x800000 : 0);
      *(_DWORD *)a3 = v30;
      v31 = v30;
      if ( (v30 & 0x10) == 0 && (unsigned __int64)(v8 - *((_QWORD *)a3 + 10)) > *((_QWORD *)this + 469) )
      {
        v31 = v30 | 0x10;
        *(_DWORD *)a3 = v30 | 0x10;
        *a5 = 1;
      }
      if ( (v31 & 0x2000000) == 0 && v25 > *((_QWORD *)this + 474) )
      {
        v31 |= 0x2000000u;
        *(_DWORD *)a3 = v31;
      }
      if ( (v31 & 0x80u) == 0
        && (*((_DWORD *)this + 984) & 0x20000) != 0
        && CPTPEngine::PassedCurtainMoveThresholds(this, *((_QWORD *)a3 + 13), v8, a3) )
      {
        CPTPEngine::TPAAPSetCurtainState(this, 0);
      }
    }
    else
    {
      v14 = v13 & 0xFF87FFE3;
      *((_QWORD *)a3 + 9) = v8;
      *(_DWORD *)a3 = v14;
      *((_QWORD *)a3 + 12) = v8;
      *((_QWORD *)a3 + 14) = v8;
      v15 = v14 & 0xE3FFE5FC | 3;
      *((_QWORD *)a3 + 16) = v8;
      *((_DWORD *)a3 + 35) = *((_DWORD *)a4 + 16);
      *((_DWORD *)a3 + 34) = *((_DWORD *)a4 + 16);
      *((_QWORD *)a3 + 2) = v5;
      *((_QWORD *)a3 + 6) = v5;
      *((_QWORD *)a3 + 7) = v5;
      *((_QWORD *)a3 + 8) = *(_QWORD *)((char *)a2 + 28);
      *(_DWORD *)a3 = v15;
      *((_DWORD *)a3 + 36) = 0;
      if ( !*((_DWORD *)this + 903) || (v16 = 0x2000, *((_DWORD *)this + 911) == 1) )
        v16 = 0;
      *((_DWORD *)a3 + 1) |= 0xBu;
      *((_DWORD *)a3 + 37) = 0;
      v17 = v16 & 0x7CF83A3F | v15 & 0x7CF81A3F;
      *((_QWORD *)a3 + 11) = v8;
      *(_DWORD *)a3 = v17;
      *((_QWORD *)a3 + 4) = v5;
      if ( (unsigned int)(*((_DWORD *)this + 911) - 1) <= 1
        && *(_QWORD *)a2 - *((_QWORD *)this + 482) >= *((_QWORD *)this + 12)
                                                    * (unsigned __int64)*((unsigned int *)this + 110)
                                                    / 0x3E8 )
      {
        v6 = 0x40000000;
      }
      *(_DWORD *)a3 = v6 | v17 & 0xBFFFFFFF;
      CPTPEngine::SetupDragRectsForContact(this, a3);
      CPTPEngine::UpdateContactRestingState(this, v18, (struct tagPOINT)v5, v8, a3);
    }
  }
}
