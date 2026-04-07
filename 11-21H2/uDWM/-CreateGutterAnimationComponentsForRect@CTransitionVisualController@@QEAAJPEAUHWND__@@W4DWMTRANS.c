/*
 * XREFs of ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800EC2F4
 * Callers:
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800D9FD8 (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800EE630 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 *     ?_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z @ 0x1800EECF8 (-_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateGutterAnimationComponentsForRect(
        CTransitionVisualController *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int *a5,
        int *a6,
        __int64 a7,
        CBaseObject **a8,
        volatile signed __int32 **a9)
{
  volatile signed __int32 *v9; // r14
  volatile signed __int32 *v10; // rsi
  unsigned int v12; // r15d
  __int64 v13; // rcx
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // r10d
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  unsigned int v28; // edi
  __int64 v29; // rbx
  int v30; // eax
  int v31; // eax
  CBaseObject *v35; // [rsp+38h] [rbp-A9h] BYREF
  volatile signed __int32 *v36; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v37; // [rsp+48h] [rbp-99h]
  int *v38; // [rsp+50h] [rbp-91h]
  __int64 v39; // [rsp+58h] [rbp-89h]
  CBaseObject **v40; // [rsp+60h] [rbp-81h]
  int *v41; // [rsp+68h] [rbp-79h]
  int v42; // [rsp+70h] [rbp-71h] BYREF
  __int64 v43; // [rsp+78h] [rbp-69h]
  int v44; // [rsp+80h] [rbp-61h]
  int v45; // [rsp+84h] [rbp-5Dh]
  int v46; // [rsp+88h] [rbp-59h]
  int v47; // [rsp+8Ch] [rbp-55h]
  int v48; // [rsp+90h] [rbp-51h]
  int v49; // [rsp+94h] [rbp-4Dh]
  int v50; // [rsp+98h] [rbp-49h]
  int v51; // [rsp+9Ch] [rbp-45h]
  int v52; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-39h]
  int v54; // [rsp+B0h] [rbp-31h]
  int v55; // [rsp+B4h] [rbp-2Dh]
  int v56; // [rsp+B8h] [rbp-29h]
  int v57; // [rsp+BCh] [rbp-25h]
  int v58; // [rsp+C0h] [rbp-21h]
  int v59; // [rsp+C4h] [rbp-1Dh]
  int v60; // [rsp+C8h] [rbp-19h]
  int v61; // [rsp+CCh] [rbp-15h]

  v9 = 0LL;
  v10 = 0LL;
  v38 = a6;
  v12 = 0;
  v13 = *((_QWORD *)a1 + 23);
  v39 = a7;
  v37 = a2;
  v40 = a8;
  v41 = a5;
  v35 = 0LL;
  v36 = 0LL;
  if ( v13 )
  {
    v14 = 0;
    v15 = *(_DWORD *)(v13 + 24);
    if ( a5[3] - a5[1] >= 0 )
      v14 = a5[3] - a5[1];
    v16 = MulDiv(v15, v14, *(_DWORD *)(v13 + 28));
    v17 = 0;
    v18 = v16;
    if ( v38[3] - v38[1] >= 0 )
      v17 = v38[3] - v38[1];
    v19 = MulDiv(v15, v17, *(_DWORD *)(*((_QWORD *)a1 + 23) + 28LL));
    v42 = a4;
    v20 = *v41;
    v21 = v41[1];
    v22 = v41[3];
    v23 = v38[1];
    v43 = v39;
    v24 = v20 - v18;
    v46 = v20;
    v25 = *v38;
    v44 = v24;
    v26 = v25 - v19;
    v50 = v25;
    v27 = v38[3];
    v48 = v26;
    v52 = a4;
    v53 = v39;
    v54 = v41[2];
    v56 = v18 + v54;
    v58 = v38[2];
    v45 = v21;
    v47 = v22;
    v49 = v23;
    v51 = v27;
    v55 = v21;
    v57 = v22;
    v59 = v23;
    v60 = v19 + v58;
    v61 = v27;
    if ( v40 )
    {
      v28 = a3;
      v29 = v37;
      if ( !CTransitionVisualController::_FakeGutterAlreadyExists(
              a1,
              (const struct CTransitionVisualController::FakeGutterInfo *)&v42) )
      {
        v30 = CTransitionVisualController::_CreateSingleGutterAnimationComponent(a1, v37, a3, &v42, &v35);
        v12 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v30,
            0x625u);
          v9 = (volatile signed __int32 *)v35;
          goto LABEL_21;
        }
        v9 = (volatile signed __int32 *)v35;
        *v40 = v35;
        if ( v9 )
        {
          _InterlockedIncrement(v9 + 2);
          v9 = (volatile signed __int32 *)v35;
          v10 = v36;
        }
      }
    }
    else
    {
      v29 = v37;
      v28 = a3;
    }
    if ( a9
      && !CTransitionVisualController::_FakeGutterAlreadyExists(
            a1,
            (const struct CTransitionVisualController::FakeGutterInfo *)&v52) )
    {
      v31 = CTransitionVisualController::_CreateSingleGutterAnimationComponent(a1, v29, v28, &v52, &v36);
      v12 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v31,
          0x62Bu);
LABEL_17:
        v10 = v36;
        goto LABEL_21;
      }
      v10 = v36;
      *a9 = v36;
      if ( v10 )
      {
        _InterlockedIncrement(v10 + 2);
        v9 = (volatile signed __int32 *)v35;
        goto LABEL_17;
      }
    }
  }
  else
  {
    v12 = -2147024809;
  }
LABEL_21:
  if ( v9 )
    CBaseObject::Release((CBaseObject *)v9);
  if ( v10 )
    CBaseObject::Release((CBaseObject *)v10);
  return v12;
}
