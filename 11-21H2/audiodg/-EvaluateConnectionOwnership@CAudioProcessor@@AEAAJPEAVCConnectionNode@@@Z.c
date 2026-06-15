/*
 * XREFs of ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000F460
 * Callers:
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000DC90 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000DF80 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E270 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E820 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000EF90 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x140081B40 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@Z @ 0x14000863C (-RemoveAt@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000BCC0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 *     ?InnerInsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@0I@Z @ 0x14000FCC0 (-InnerInsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConne.c)
 *     ?Find@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEAVCConnectionNode@@PEAU3@@Z @ 0x140068AD0 (-Find@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEA.c)
 *     ?SwapRTPointer@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAXXZ @ 0x1400690B4 (-SwapRTPointer@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnecti.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioProcessor::EvaluateConnectionOwnership(CAudioProcessor *this, struct CConnectionNode *a2)
{
  __int64 v4; // rdi
  char *v5; // r15
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r8
  char *v11; // rsi
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  bool v16; // zf
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // r9
  struct CConnectionNode *v23; // [rsp+50h] [rbp+8h] BYREF

  if ( *((CAudioProcessor **)a2 + 19) == this )
  {
    v4 = *((_QWORD *)a2 + 2);
    v5 = (char *)this + 224;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
    v6 = 0LL;
    v7 = *(_QWORD **)&v5[48 * (*((unsigned __int16 *)v5 + 56) ^ 1LL)];
    if ( v7 )
    {
      while ( 1 )
      {
        v6 = v7[2];
        v7 = (_QWORD *)*v7;
        if ( *(_QWORD *)(v6 + 16) == v4 )
          break;
        if ( !v7 )
        {
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
          goto LABEL_6;
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
    if ( !v6 )
    {
LABEL_6:
      v23 = a2;
      EnterCriticalSection((LPCRITICAL_SECTION)v5 + 3);
      if ( (int)CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerInsertAfter(
                  v5,
                  a2,
                  v8,
                  *((unsigned __int16 *)v5 + 56) ^ 1u) >= 0 )
      {
        while ( !_InterlockedCompareExchange64(
                   (volatile signed __int64 *)v5 + 12,
                   (signed __int64)&v5[48 * (*((unsigned __int16 *)v5 + 56) ^ 1LL)],
                   (signed __int64)&v5[48 * *((unsigned __int16 *)v5 + 56)]) )
          Sleep(1u);
        *((_WORD *)v5 + 56) ^= 1u;
        if ( (int)CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerInsertAfter(
                    v5,
                    a2,
                    v9,
                    *((unsigned __int16 *)v5 + 56) ^ 1u) < 0 )
        {
          CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::SwapRTPointer(v5);
          v21 = (_QWORD *)ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::Find(
                            &v5[48 * (*((unsigned __int16 *)v5 + 56) ^ 1LL)],
                            &v23);
          ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v22, v21);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)v5 + 3);
    }
  }
  else
  {
    v11 = (char *)this + 224;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
    v12 = (__int64 *)&v11[48 * (*((unsigned __int16 *)v11 + 56) ^ 1LL)];
    v13 = *v12;
    if ( *v12 )
    {
      while ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) != *((_QWORD *)a2 + 2) )
      {
        v13 = *(_QWORD *)v13;
        if ( !v13 )
          goto LABEL_30;
      }
      v14 = *(_QWORD *)v13;
      if ( v13 == *v12 )
        *v12 = v14;
      else
        **(_QWORD **)(v13 + 8) = v14;
      v15 = *(_QWORD *)(v13 + 8);
      if ( v13 == v12[1] )
        v12[1] = v15;
      else
        *(_QWORD *)(*(_QWORD *)v13 + 8LL) = v15;
      *(_QWORD *)v13 = v12[4];
      v12[4] = v13;
      v16 = v12[2]-- == 1;
      if ( v16 )
        ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll(v12);
      while ( !_InterlockedCompareExchange64(
                 (volatile signed __int64 *)v11 + 12,
                 (signed __int64)&v11[48 * (*((unsigned __int16 *)v11 + 56) ^ 1LL)],
                 (signed __int64)&v11[48 * *((unsigned __int16 *)v11 + 56)]) )
        Sleep(1u);
      *((_WORD *)v11 + 56) ^= 1u;
      v17 = (__int64 *)&v11[48 * (*((unsigned __int16 *)v11 + 56) ^ 1LL)];
      v18 = *v17;
      if ( *v17 )
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)v18;
          if ( *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) == *((_QWORD *)a2 + 2) )
            break;
          v18 = *(_QWORD *)v18;
          if ( !v19 )
            goto LABEL_30;
        }
        if ( v18 == *v17 )
          *v17 = v19;
        else
          **(_QWORD **)(v18 + 8) = v19;
        v20 = *(_QWORD *)(v18 + 8);
        if ( v18 == v17[1] )
          v17[1] = v20;
        else
          *(_QWORD *)(*(_QWORD *)v18 + 8LL) = v20;
        *(_QWORD *)v18 = v17[4];
        v17[4] = v18;
        v16 = v17[2]-- == 1;
        if ( v16 )
          ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll(v17);
      }
    }
LABEL_30:
    LeaveCriticalSection((LPCRITICAL_SECTION)v11 + 3);
  }
  return 0LL;
}
