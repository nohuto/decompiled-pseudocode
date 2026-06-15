/*
 * XREFs of ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x140011BFC
 * Callers:
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E770 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E910 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400104C0 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400107B0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400118B0 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14008EEB0 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Remove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@@Z @ 0x14000E5E0 (-Remove@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeT.c)
 *     ?InsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@0@Z @ 0x140010EE8 (-InsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 */

__int64 __fastcall CAudioProcessor::EvaluateConnectionOwnership(CAudioProcessor *this, struct CConnectionNode *a2)
{
  __int64 v4; // r12
  char *v5; // r15
  __int64 v6; // r14
  _QWORD *v7; // rdx
  __int64 v8; // rcx

  if ( *((CAudioProcessor **)a2 + 19) == this )
  {
    v4 = *((_QWORD *)a2 + 2);
    v5 = (char *)this + 224;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
    v6 = 0LL;
    v7 = *(_QWORD **)&v5[48 * (*((unsigned __int16 *)v5 + 56) ^ 1LL)];
    while ( v7 )
    {
      v8 = v7[2];
      v7 = (_QWORD *)*v7;
      if ( *(_QWORD *)(v8 + 16) == v4 )
      {
        v6 = v8;
        break;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
    if ( !v6 )
      CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InsertAfter(
        (__int64)v5,
        (__int64)a2);
  }
  else
  {
    CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::Remove(
      (__int64)this + 224,
      (__int64)a2);
  }
  return 0LL;
}
