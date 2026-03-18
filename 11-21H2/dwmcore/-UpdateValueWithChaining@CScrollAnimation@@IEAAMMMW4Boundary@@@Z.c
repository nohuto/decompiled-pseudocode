/*
 * XREFs of ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180254B6C
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180255EC0 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180256630 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180113E5C (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18021A0F0 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18021DDC8 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18021DE88 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55555555555@Z @ 0x180253B88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180254738 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x180254AB8 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180264F84 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180265008 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x1802662BC (-ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180266414 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall CScrollAnimation::UpdateValueWithChaining(__int64 a1, double a2, float a3, unsigned int a4)
{
  bool v4; // bl
  __int64 v6; // rax
  __m128 v7; // xmm7
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct CChainingHelper *ActiveChainingHelper; // r14
  InteractionSourceManager *v12; // rsi
  unsigned int v13; // r13d
  InteractionSourceManager *v14; // rcx
  unsigned __int8 ShouldChainForAxis; // r12
  InteractionSourceManager *v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // ecx
  char v19; // al
  unsigned int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // cl
  __int64 v26; // r9
  InteractionSourceManager *v27; // rcx
  struct CManipulation *v28; // rax
  __int64 v29; // rcx
  bool ShouldChainAllForAxis; // al
  __int64 v31; // rcx
  int v32; // edx
  int v33; // edx
  __int64 v34; // r9
  InteractionSourceManager *v35; // rcx
  struct CManipulation *v36; // rax
  __int64 v37; // rcx
  bool v38; // al
  int v39; // edx
  int v40; // r8d
  __int64 v41; // r9
  InteractionSourceManager *v42; // rcx
  struct CManipulation *v43; // rax
  __int64 v44; // rcx
  bool v45; // al
  __int64 v46; // r9
  InteractionSourceManager *v47; // rcx
  struct CManipulation *v48; // rax
  __int64 v49; // rcx
  bool v50; // al
  __int64 v51; // r9
  InteractionSourceManager *v52; // rcx
  struct CManipulation *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r9
  InteractionSourceManager *v56; // rcx
  struct CManipulation *v57; // rax
  __int64 v58; // rcx
  float v59; // xmm0_4
  float v60; // xmm3_4
  __int64 v61; // rcx
  int v63; // [rsp+28h] [rbp-B9h]
  int v64; // [rsp+98h] [rbp-49h] BYREF
  int v65; // [rsp+9Ch] [rbp-45h] BYREF
  int v66; // [rsp+A0h] [rbp-41h] BYREF
  int v67; // [rsp+A4h] [rbp-3Dh] BYREF
  int v68; // [rsp+A8h] [rbp-39h] BYREF
  int v69; // [rsp+ACh] [rbp-35h] BYREF
  float v70; // [rsp+B0h] [rbp-31h] BYREF
  unsigned int v71; // [rsp+B4h] [rbp-2Dh] BYREF
  int v72; // [rsp+B8h] [rbp-29h] BYREF
  unsigned __int64 v73; // [rsp+BCh] [rbp-25h] BYREF
  __int64 v74; // [rsp+C8h] [rbp-19h]
  wchar_t *v75; // [rsp+D0h] [rbp-11h] BYREF
  _QWORD v76[6]; // [rsp+D8h] [rbp-9h] BYREF
  struct CManipulation *ActiveManipulation; // [rsp+148h] [rbp+67h] BYREF
  int v78; // [rsp+150h] [rbp+6Fh]
  float v79; // [rsp+158h] [rbp+77h]

  v79 = a3;
  v78 = LODWORD(a2);
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 352);
  v7 = *(__m128 *)&a2;
  if ( v6 )
  {
    v9 = *(_QWORD *)(v6 + 16);
    v10 = v9;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
  }
  v74 = v9;
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v10 + 200));
  if ( ActiveChainingHelper )
  {
    v12 = (InteractionSourceManager *)(v9 + 200);
    v13 = 0;
    if ( InteractionSourceManager::HasActiveManipulation(v12) )
      v13 = *((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v14) + 105);
    ShouldChainForAxis = 0;
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v12);
    if ( InteractionSourceManager::TryGetActiveChainingHelper(v16) && ActiveManipulation )
      ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(
                             v17,
                             *(_DWORD *)(a1 + 340),
                             (__int64)ActiveManipulation,
                             0);
    if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
    {
      v18 = *(unsigned __int8 *)(a1 + 452);
      v19 = *(_BYTE *)(a1 + 452);
      v71 = a4;
      LODWORD(ActiveManipulation) = v19 & 1;
      v65 = ShouldChainForAxis;
      v66 = v78;
      v67 = *(_DWORD *)(a1 + 448);
      v68 = *(_DWORD *)(a1 + 440);
      v69 = *(_DWORD *)(a1 + 444);
      v70 = v79;
      v72 = *(_DWORD *)(a1 + 436);
      v20 = *(_DWORD *)(a1 + 432);
      v64 = (v18 >> 1) & 1;
      v21 = *(_DWORD *)(a1 + 340);
      v73 = __PAIR64__(v20, v13);
      v75 = (wchar_t *)ScrollAxisToString(v21);
      v76[0] = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v22,
        byte_1803722D0,
        v23,
        v24,
        (__int64)v76,
        &v75,
        (__int64)&v73 + 4,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&ActiveManipulation);
    }
    v25 = *(_BYTE *)(a1 + 452);
    if ( (v25 & 2) == 0 && v13 == 2 )
    {
      if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
        && InteractionSourceManager::HasActiveManipulation(v12) )
      {
        v28 = InteractionSourceManager::TryGetActiveManipulation(v27);
        ShouldChainAllForAxis = CInteractionTracker::ShouldChainAllForAxis(v29, *(_DWORD *)(a1 + 340), (__int64)v28);
      }
      else
      {
        ShouldChainAllForAxis = 0;
      }
      LOBYTE(v26) = ShouldChainForAxis;
      LOBYTE(v63) = ShouldChainAllForAxis;
      CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
        ActiveChainingHelper,
        *(unsigned int *)(a1 + 340),
        a4,
        v26,
        v63);
      v31 = 3LL * *(int *)(a1 + 340);
      *((_BYTE *)ActiveChainingHelper + 4 * v31) &= 0xFAu;
      *((_DWORD *)ActiveChainingHelper + v31 + 2) = 0;
      *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
      *(_BYTE *)(a1 + 452) |= 2u;
      v25 = *(_BYTE *)(a1 + 452);
    }
    v32 = *(_DWORD *)(a1 + 432);
    if ( v32 )
    {
      v33 = v32 - 2;
      if ( !v33 )
      {
        CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, a3);
        v39 = *(_DWORD *)(a1 + 436);
        if ( v39 && ShouldChainForAxis )
        {
          if ( v39 == 1 || (v40 = *(_DWORD *)(a1 + 436), v39 == 3) )
          {
            v40 = *(_DWORD *)(a1 + 436);
            if ( a4 == v39 && (float)((float)(a3 - *(float *)(a1 + 440)) > 0.0) < 0.0 )
            {
              if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
                && InteractionSourceManager::HasActiveManipulation(v12) )
              {
                v43 = InteractionSourceManager::TryGetActiveManipulation(v42);
                v45 = CInteractionTracker::ShouldChainAllForAxis(v44, *(_DWORD *)(a1 + 340), (__int64)v43);
              }
              else
              {
                v45 = 0;
              }
              LOBYTE(v41) = v45;
              CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 340), a4, v41);
              v40 = *(_DWORD *)(a1 + 436);
            }
          }
          if ( (unsigned int)(v40 - 2) <= 1 && a4 == v40 && (float)((float)(a3 - *(float *)(a1 + 440)) > 0.0) > 0.0 )
          {
            if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
              && InteractionSourceManager::HasActiveManipulation(v12) )
            {
              v48 = InteractionSourceManager::TryGetActiveManipulation(v47);
              v50 = CInteractionTracker::ShouldChainAllForAxis(v49, *(_DWORD *)(a1 + 340), (__int64)v48);
            }
            else
            {
              v50 = 0;
            }
            LOBYTE(v46) = v50;
            CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 340), a4, v46);
          }
          if ( !a4 )
          {
            if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
              && InteractionSourceManager::HasActiveManipulation(v12) )
            {
              v53 = InteractionSourceManager::TryGetActiveManipulation(v52);
              v4 = CInteractionTracker::ShouldChainAllForAxis(v54, *(_DWORD *)(a1 + 340), (__int64)v53);
            }
            LOBYTE(v51) = ShouldChainForAxis;
            LOBYTE(v63) = v4;
            CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
              ActiveChainingHelper,
              *(unsigned int *)(a1 + 340),
              0LL,
              v51,
              v63);
            goto LABEL_74;
          }
        }
        else
        {
          if ( !a4 || !ShouldChainForAxis )
          {
            if ( (*(_BYTE *)(a1 + 452) & 1) == 0 )
            {
              v59 = *(float *)(a1 + 448);
              if ( v59 != 0.0 )
              {
                v60 = a3 - *(float *)(a1 + 440);
                if ( (float)(v60 > 0.0) != (float)(v59 > 0.0) && v60 != 0.0 )
                {
                  v61 = 3LL * *(int *)(a1 + 340);
                  *((_BYTE *)ActiveChainingHelper + 4 * v61) &= 0xFAu;
                  *((_DWORD *)ActiveChainingHelper + v61 + 2) = 0;
                  *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
                  *(_DWORD *)(a1 + 448) = 0;
                }
              }
            }
            goto LABEL_71;
          }
          if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
            && InteractionSourceManager::HasActiveManipulation(v12) )
          {
            v57 = InteractionSourceManager::TryGetActiveManipulation(v56);
            v4 = CInteractionTracker::ShouldChainAllForAxis(v58, *(_DWORD *)(a1 + 340), (__int64)v57);
          }
          LOBYTE(v55) = v4;
          CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 340), a4, v55);
        }
LABEL_73:
        v7 = CInteractionTracker::ClampValueToBoundary(v74, *(unsigned int *)(a1 + 340), a2);
LABEL_74:
        *(float *)(a1 + 444) = a3;
        *(_DWORD *)(a1 + 436) = a4;
        *(_DWORD *)(a1 + 432) = v13;
        return v7;
      }
      if ( v33 != 1 )
        goto LABEL_71;
      if ( *(_DWORD *)(a1 + 436) && ShouldChainForAxis )
      {
        if ( v13 == 2 )
        {
          if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
            && InteractionSourceManager::HasActiveManipulation(v12) )
          {
            v36 = InteractionSourceManager::TryGetActiveManipulation(v35);
            v38 = CInteractionTracker::ShouldChainAllForAxis(v37, *(_DWORD *)(a1 + 340), (__int64)v36);
          }
          else
          {
            v38 = 0;
          }
          LOBYTE(v34) = ShouldChainForAxis;
          LOBYTE(v63) = v38;
          CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
            ActiveChainingHelper,
            *(unsigned int *)(a1 + 340),
            a4,
            v34,
            v63);
          goto LABEL_70;
        }
LABEL_71:
        if ( !a4 || !ShouldChainForAxis )
          goto LABEL_74;
        goto LABEL_73;
      }
      if ( v13 != 2 )
        goto LABEL_71;
      *(_BYTE *)(a1 + 452) = v25 | 1;
    }
    else
    {
      *(_BYTE *)(a1 + 452) = v25 | 1;
      if ( v13 != 2 )
        goto LABEL_71;
    }
    *(_DWORD *)(a1 + 440) = *(_DWORD *)(a1 + 444);
LABEL_70:
    CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, a3);
    goto LABEL_71;
  }
  return v7;
}
