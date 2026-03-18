/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x18002AE94
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002AC70 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180017C10 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputLuid@CInteraction@@QEBA?AU_LUID@@XZ @ 0x180017C48 (-GetInputLuid@CInteraction@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180017DD8 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     DuplicateCompositionInputSinkHelper @ 0x180018104 (DuplicateCompositionInputSinkHelper.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18002B2F0 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x18002B4DC (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x18002B578 (-EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z.c)
 *     ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x18002B744 (-HasInputSink@CInteraction@@QEBA_NXZ.c)
 *     ?InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z @ 0x18002B764 (-InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z.c)
 *     ?AdjustInputTypeForInteraction@CHitTestContext@@AEBA?AW4InputType@@W42@PEBVCInteraction@@@Z @ 0x18002B7BC (-AdjustInputTypeForInteraction@CHitTestContext@@AEBA-AW4InputType@@W42@PEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004933C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqp_EventWriteTransfer @ 0x180111AAC (McTemplateU0qqp_EventWriteTransfer.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18019016C (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@W4InputType@@@Z.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        CVisual **this,
        const struct CHitTestContext::HitTestPointRequest *a2,
        struct CHitTestContext::HitTestPointResult *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  struct CHitTestContext::HitTestPointResult *v5; // r14
  const struct CHitTestContext::HitTestPointRequest *v6; // rsi
  _DWORD *v8; // rdx
  _DWORD *v9; // r8
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rdi
  CVisual *v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r12
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 *v20; // r12
  __int64 v21; // r12
  char v22; // al
  bool v23; // dl
  HANDLE v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  int v30; // eax
  __int128 v31; // xmm1
  bool v32; // al
  int InputType; // ecx
  _DWORD *v34; // rax
  int v35; // [rsp+20h] [rbp-A9h]
  char v36; // [rsp+30h] [rbp-99h]
  HANDLE hSourceHandle; // [rsp+38h] [rbp-91h]
  __int64 v38; // [rsp+48h] [rbp-81h]
  unsigned int v39; // [rsp+50h] [rbp-79h]
  __int64 v40; // [rsp+58h] [rbp-71h]
  int v41; // [rsp+60h] [rbp-69h]
  CVisual *v42; // [rsp+68h] [rbp-61h] BYREF
  CVisual *v43; // [rsp+70h] [rbp-59h]
  __int128 v44; // [rsp+80h] [rbp-49h] BYREF
  __int128 v45; // [rsp+90h] [rbp-39h]
  __int128 v46; // [rsp+A0h] [rbp-29h]
  __int128 v47; // [rsp+B0h] [rbp-19h]
  int v48; // [rsp+C0h] [rbp-9h]
  __int64 v49[10]; // [rsp+D0h] [rbp+7h] BYREF
  bool v50; // [rsp+130h] [rbp+67h]
  __int64 v53; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = 0LL;
  hSourceHandle = 0LL;
  v5 = a3;
  v6 = a2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
    McTemplateU0qqp_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start,
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3),
      *(_QWORD *)(*(_QWORD *)a2 + 64LL));
  CHitTestContext::EvaluateHitTestAttributesAndInputType(this, *((unsigned int *)v6 + 5), *((unsigned int *)v6 + 4));
  v35 = *((_DWORD *)this + 60);
  CHitTestContext::HitTestTreeWalk(this, *(_QWORD *)v6);
  v42 = this[14];
  if ( !v42 )
    goto LABEL_15;
  v40 = 0LL;
  v10 = *((_DWORD *)this + 24);
  v11 = 0LL;
  v12 = 0LL;
  v13 = v42;
  v43 = *(CVisual **)(*(_QWORD *)v6 + 64LL);
  v44 = _xmm;
  BYTE1(v48) = BYTE1(v48) & 0xC0 | 0x17;
  v14 = 0LL;
  v45 = _xmm;
  v50 = v10 == 0;
  v46 = _xmm;
  v47 = _xmm;
  LOBYTE(v48) = 85;
  v38 = 0LL;
  v41 = v10;
  LOBYTE(v53) = 0;
  do
  {
    if ( !v14 )
    {
      v14 = (*(__int64 (__fastcall **)(CVisual *, _DWORD *, _DWORD *, __int64, int))(*(_QWORD *)v13 + 280LL))(
              v13,
              v8,
              v9,
              1LL,
              v35);
      v38 = v14;
    }
    v9 = (_DWORD *)*((_QWORD *)v13 + 29);
    if ( (*v9 & 0x800000) == 0 )
      goto LABEL_8;
    v18 = (unsigned int)v9[1];
    v8 = v9 + 2;
    v19 = 0;
    if ( (_DWORD)v18 )
    {
      while ( *(_BYTE *)v8 != 9 )
      {
        ++v19;
        v8 = (_DWORD *)((char *)v8 + 1);
        if ( v19 >= (unsigned int)v18 )
          goto LABEL_32;
      }
LABEL_21:
      v8 = (_DWORD *)(v18 + 15);
      v20 = (__int64 *)((char *)v9 + 8LL * v19 - (((_BYTE)v18 + 15) & 7) + v18 + 15);
      goto LABEL_22;
    }
LABEL_32:
    if ( v19 < (unsigned int)v18 )
      goto LABEL_21;
    v20 = 0LL;
LABEL_22:
    v21 = *v20;
    if ( !v21 )
      goto LABEL_30;
    v39 = CHitTestContext::AdjustInputTypeForInteraction(this, *((unsigned int *)this + 24), v21, 1LL);
    v22 = CHitTestContext::InteractionMatchesHitTest(this, v39, v21);
    v36 = v22;
    if ( *((_DWORD *)this + 24) != 6 )
      goto LABEL_24;
    if ( (_BYTE)v53 )
    {
      if ( !v22 )
        goto LABEL_24;
      if ( v4 )
      {
        if ( (*(_BYTE *)(v4 + 192) & 0x10) == 0 || (*(_BYTE *)(v21 + 192) & 0x10) != 0 )
        {
LABEL_24:
          v23 = v50;
          v24 = hSourceHandle;
        }
        else
        {
          v23 = 0;
          v4 = 0LL;
          v24 = 0LL;
          v50 = 0;
          hSourceHandle = 0LL;
        }
        if ( v4 )
          goto LABEL_27;
        hSourceHandle = v24;
        v50 = v23;
        if ( !v22 )
          goto LABEL_27;
      }
    }
    else
    {
      if ( v4 )
        goto LABEL_27;
      if ( !v22 )
      {
        LOBYTE(v53) = ((*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(v21 + 64) + 88LL))(
                         v21 + 64,
                         5LL,
                         32831LL,
                         0LL)
                    || (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(v21 + 64) + 88LL))(
                         v21 + 64,
                         6LL,
                         32831LL,
                         0LL))
                   && (*(_BYTE *)(v21 + 192) & 0x10) == 0;
        goto LABEL_27;
      }
    }
    v4 = v21;
LABEL_27:
    if ( !v50 )
      v50 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v21 + 64) + 80LL))(v21 + 64, v39, 0LL) != 0;
    if ( !CInteraction::HasInputSink((CInteraction *)v21) )
    {
LABEL_30:
      v14 = v38;
      goto LABEL_8;
    }
    if ( !hSourceHandle && v36 && (!v41 || (unsigned int)CVisual::GetInputQueueType(v13)) )
    {
      hSourceHandle = CVisual::GetInputHandle(v13);
      v12 = **(_QWORD **)&CVisual::GetInputLuid(v13, &v42);
      CVisual::GetWorldTransform(v13, *(_QWORD *)v6, 4LL, &v44, 0LL, 0LL);
    }
    if ( v40 == g_luidZero )
    {
      v11 = **(_QWORD **)&CInteraction::GetInputLuid((CInteraction *)v21, v49);
      v40 = v11;
    }
    v14 = v38;
    if ( !v38 )
    {
      v8 = *(_DWORD **)(v21 + 104);
      if ( v8 )
      {
        if ( *((_BYTE *)v8 + 104) )
        {
          InputType = CInputSinkStruct::GetInputType(v39);
          v34 = v8 + 16;
          while ( 1 )
          {
            if ( v8 == v34 )
              goto LABEL_69;
            if ( InputType == *v8 )
              break;
            v8 += 4;
          }
          if ( !v8 )
          {
LABEL_69:
            v14 = 0LL;
            goto LABEL_70;
          }
          v14 = *((_QWORD *)v8 + 1);
LABEL_70:
          v38 = v14;
        }
      }
    }
LABEL_8:
    if ( v13 == v43 )
      break;
    v13 = (CVisual *)*((_QWORD *)v13 + 11);
  }
  while ( v13 );
  v5 = a3;
  v15 = (this[18] - this[17]) >> 3;
  *((_DWORD *)a3 + 4) = v15 + 1;
  if ( (unsigned int)(v15 + 1) <= *(_DWORD *)a3 )
  {
    v16 = 0LL;
    if ( v15 )
    {
      do
      {
        *(_QWORD *)(*((_QWORD *)a3 + 1) + 8 * v16) = **(_QWORD **)&CVisual::GetInputLuid(
                                                                     *((CVisual **)this[17] + v16),
                                                                     &v53);
        ++v16;
      }
      while ( v16 < v15 );
      v6 = a2;
    }
    *(_QWORD *)(*((_QWORD *)a3 + 1) + 8 * v15) = v11;
  }
  *((_QWORD *)a3 + 3) = v38;
  if ( !hSourceHandle || !v4 || !v50 )
  {
LABEL_14:
    v3 = 0;
LABEL_15:
    InputTraceLogging::DWM::HitTestTreeWalkResult(
      *((unsigned int *)v6 + 4),
      *((unsigned int *)v6 + 5),
      *((_QWORD *)v5 + 4),
      *((_QWORD *)v5 + 3),
      hSourceHandle,
      v4);
    goto LABEL_16;
  }
  v25 = DuplicateCompositionInputSinkHelper(hSourceHandle, (LPHANDLE)a3 + 4);
  if ( v25 >= 0 )
  {
    v27 = *(_DWORD *)(v4 + 1704);
    v28 = v45;
    *((_OWORD *)a3 + 3) = v44;
    *((_DWORD *)a3 + 29) = v27;
    v29 = v46;
    v30 = v48;
    *((_OWORD *)a3 + 4) = v28;
    *((_QWORD *)a3 + 5) = v12;
    v31 = v47;
    *((_OWORD *)a3 + 5) = v29;
    *((_OWORD *)a3 + 6) = v31;
    *((_DWORD *)a3 + 28) = v30;
    v32 = *((_DWORD *)v6 + 4) != 4
       || *((_DWORD *)this + 24) == 6
       && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(v4 + 64) + 80LL))(v4 + 64, 6LL);
    *((_BYTE *)a3 + 120) = v32;
    *(_DWORD *)(v4 + 1720) = *((_DWORD *)v6 + 6);
    *(_BYTE *)(v4 + 192) ^= (*(_BYTE *)(v4 + 192) ^ (2 * *((_BYTE *)this + 128))) & 2;
    goto LABEL_14;
  }
  v3 = v25 | 0x10000000;
  MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_180345778, 2u, v25 | 0x10000000, 0x30Au, 0LL);
LABEL_16:
  *((_DWORD *)this + 44) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
    McTemplateU0qqp_EventWriteTransfer(
      (unsigned int)this[14],
      (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop,
      *((_DWORD *)v6 + 2),
      *((_DWORD *)v6 + 3),
      (char)this[14]);
  return v3;
}
