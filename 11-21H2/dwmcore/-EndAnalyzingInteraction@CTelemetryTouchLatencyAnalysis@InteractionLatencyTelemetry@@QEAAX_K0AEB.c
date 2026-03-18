/*
 * XREFs of ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K0AEB_K@Z @ 0x180019708
 * Callers:
 *     ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z @ 0x180019680 (-TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@1@@Z @ 0x180019864 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@In.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@@Z @ 0x18001B538 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchS.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@_K@Z @ 0x18001B5A8 (-FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioI.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180181764 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U1@U1@U6@U1@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@873383777@Z @ 0x1801CF820 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_1801CF820.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801D0D34 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$0.c)
 *     McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer @ 0x1801D6784 (McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::EndAnalyzingInteraction(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        LARGE_INTEGER a3,
        const unsigned __int64 *a4)
{
  int v8; // r8d
  int v9; // r9d
  struct InteractionLatencyTelemetry::TouchScenarioInfo *Scenario; // rbx
  unsigned __int64 v11; // r14
  int v12; // r8d
  int v13; // r9d
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // r8
  LONGLONG v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  struct InteractionLatencyTelemetry::TouchScenarioInfo *v22; // [rsp+108h] [rbp-68h] BYREF
  __int64 v23; // [rsp+110h] [rbp-60h] BYREF
  __int64 v24; // [rsp+118h] [rbp-58h] BYREF
  _QWORD v25[16]; // [rsp+120h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+1B0h] [rbp+40h] BYREF
  unsigned __int64 v27; // [rsp+1B8h] [rbp+48h] BYREF
  LONGLONG v28; // [rsp+1C0h] [rbp+50h] BYREF
  LARGE_INTEGER v29; // [rsp+1C8h] [rbp+58h] BYREF

  if ( (unsigned int)dword_1803D0EB8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
  {
    PerformanceCount = a3;
    v27 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1803D0EB8,
      (unsigned int)&unk_18036BA36,
      v8,
      v9,
      (__int64)&v27,
      (__int64)&PerformanceCount);
  }
  *((_QWORD *)this + 863) = *a4;
  *((_BYTE *)this + 6960) = 0;
  Scenario = InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
  if ( Scenario )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v11 = (PerformanceCount.QuadPart - *((_QWORD *)Scenario + 20)) / (qword_1803D32C0 / 0x3E8uLL);
    if ( (unsigned int)dword_1803D0EB8 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
    {
      LOBYTE(PerformanceCount.LowPart) = *(_BYTE *)Scenario;
      v15 = *((_QWORD *)Scenario + 25);
      v29 = a3;
      v28 = a3.QuadPart - v15;
      v24 = (unsigned int)v11;
      LODWORD(v27) = *((_DWORD *)Scenario + 38);
      v23 = *((_QWORD *)Scenario + 1);
      v25[0] = v15;
      v22 = Scenario;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v15,
        (unsigned int)&unk_18036DBC9,
        v12,
        v13,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v27,
        (__int64)&v24,
        (__int64)v25,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&PerformanceCount);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
      McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer(
        (_DWORD)Scenario + 136,
        *((_QWORD *)Scenario + 25) - *((unsigned __int16 *)Scenario + 104) - 1,
        *((_QWORD *)Scenario + 1),
        (_DWORD)Scenario,
        *((_DWORD *)Scenario + 21),
        *((_DWORD *)Scenario + 23),
        *((_DWORD *)Scenario + 24),
        *((_WORD *)Scenario + 64),
        *((_WORD *)Scenario + 65),
        v11,
        *((_WORD *)Scenario + 104),
        *((_QWORD *)Scenario + 25),
        *((_QWORD *)Scenario + 25) - *((_WORD *)Scenario + 104) - 1,
        *((_DWORD *)Scenario + 33));
    if ( (unsigned int)dword_1803D0EB8 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 2LL) )
    {
      v16 = *((_QWORD *)Scenario + 22);
      v17 = *((_QWORD *)Scenario + 23);
      v18 = a3.QuadPart - *((_QWORD *)Scenario + 25);
      v25[3] = *((_QWORD *)Scenario + 25);
      v25[1] = v18;
      v19 = v16;
      v25[2] = a3.QuadPart;
      if ( !v16 )
        v19 = v17;
      v25[4] = *((_QWORD *)Scenario + 1);
      LOBYTE(PerformanceCount.LowPart) = *((_BYTE *)Scenario + 192);
      v25[5] = *((_QWORD *)Scenario + 15);
      LOBYTE(v27) = *((_BYTE *)Scenario + 96);
      LOBYTE(v28) = *((_BYTE *)Scenario + 92);
      LOBYTE(v29.LowPart) = *((_BYTE *)Scenario + 88);
      v25[6] = (char *)Scenario + 100;
      v20 = (_QWORD *)((char *)Scenario + 48);
      if ( *((_QWORD *)Scenario + 9) >= 8uLL )
        v20 = (_QWORD *)*v20;
      v25[7] = v20;
      v21 = (_QWORD *)((char *)Scenario + 16);
      if ( *((_QWORD *)Scenario + 5) >= 8uLL )
        v21 = (_QWORD *)*v21;
      v25[8] = v21;
      LODWORD(v22) = *((_DWORD *)Scenario + 37);
      LODWORD(v23) = *((_DWORD *)Scenario + 35);
      LODWORD(v24) = *((_DWORD *)Scenario + 34);
      LODWORD(v25[0]) = *((_DWORD *)Scenario + 33);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v19,
        &unk_18036E3D3);
    }
    InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UnreferenceScenario(this, Scenario);
    v14 = (_QWORD *)*((_QWORD *)this + 868);
    std::_Tree_val<std::_Tree_simple_types<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>,void *>>>(
      (char *)this + 6944,
      (char *)this + 6944,
      v14[1]);
    v14[1] = v14;
    *v14 = v14;
    v14[2] = v14;
    *((_QWORD *)this + 869) = 0LL;
  }
}
