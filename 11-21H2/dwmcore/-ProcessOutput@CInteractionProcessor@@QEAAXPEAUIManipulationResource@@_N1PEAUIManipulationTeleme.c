/*
 * XREFs of ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@AEAUInteractionOutput@@@Z @ 0x18018E2A8
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@PEAW4PointerResult@@@Z @ 0x18018D7E0 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801119AC (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x180189A6C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall CInteractionProcessor::ProcessOutput(
        CInteractionProcessor *this,
        struct IManipulationResource *a2,
        unsigned __int8 a3,
        __int64 a4,
        struct InteractionLatencyTelemetry::IManipulationTelemetryData *a5,
        struct InteractionOutput *a6)
{
  int v7; // r15d
  char RailsEnabled; // r12
  char v10; // cl
  char v11; // dl
  int v12; // xmm0_4
  int v13; // eax
  int v14; // eax
  int v15; // xmm1_4
  int v16; // eax
  int v17; // xmm0_4
  int v18; // eax
  int v19; // xmm1_4
  int v20; // xmm0_4
  __int64 v21; // rax
  int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+64h] [rbp-9Ch] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  int v34; // [rsp+6Ch] [rbp-94h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  struct IManipulationResource *v36; // [rsp+78h] [rbp-88h] BYREF
  CInteractionProcessor *v37; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v38[4]; // [rsp+88h] [rbp-78h] BYREF
  int v39; // [rsp+98h] [rbp-68h]
  _DWORD v40[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v41; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+B4h] [rbp-4Ch]
  int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  int v45; // [rsp+C0h] [rbp-40h]
  int v46; // [rsp+C4h] [rbp-3Ch]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  int v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D4h] [rbp-2Ch]
  int v51; // [rsp+D8h] [rbp-28h]
  int v52; // [rsp+DCh] [rbp-24h]
  int v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E4h] [rbp-1Ch]
  int v55; // [rsp+E8h] [rbp-18h]
  int v56; // [rsp+ECh] [rbp-14h]
  int v57; // [rsp+F0h] [rbp-10h]
  int v58; // [rsp+F4h] [rbp-Ch]
  int v59; // [rsp+F8h] [rbp-8h]
  int v60; // [rsp+FCh] [rbp-4h]

  v7 = a3;
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v10 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  if ( (_BYTE)v7 )
  {
    v11 = *((_BYTE *)this + 808);
    v12 = 0;
    if ( (v11 & 1) != 0 )
    {
      v12 = *((_DWORD *)a6 + 2);
    }
    else
    {
      *((_DWORD *)a6 + 2) = 0;
      v11 = *((_BYTE *)this + 808);
    }
    if ( (v11 & 2) == 0 )
    {
      *((_DWORD *)a6 + 3) = 0;
      v11 = *((_BYTE *)this + 808);
    }
    if ( (v11 & 4) == 0 )
      *((_DWORD *)a6 + 4) = 1065353216;
    v41 = 0;
    v13 = 3;
    v40[0] = 3;
    if ( *((_DWORD *)this + 198) )
    {
      if ( *(_DWORD *)a6 )
        v13 = 2;
      v40[0] = v13;
    }
    v14 = *((_DWORD *)a6 + 5);
    v15 = *((_DWORD *)a6 + 4);
    v44 = 0;
    v51 = 0;
    v54 = 0;
    v58 = 0;
    v59 = v14;
    v60 = *((_DWORD *)this + 197);
    v16 = *((_DWORD *)this + 203);
    v42 = v12;
    v17 = *((_DWORD *)a6 + 3);
    v40[1] = v16;
    v18 = *((_DWORD *)this + 204);
    v43 = v17;
    v45 = v15;
    v46 = v15;
    v19 = *((_DWORD *)a6 + 6);
    v40[2] = v18;
    v40[3] = *((_DWORD *)this + 205);
    v47 = (int)FLOAT_1_0;
    v20 = *((_DWORD *)a6 + 7);
    v21 = *(_QWORD *)a2;
    v49 = v19;
    v22 = *((_DWORD *)a6 + 9);
    v50 = v20;
    v23 = *((_DWORD *)a6 + 10);
    v52 = v22;
    v53 = v22;
    v24 = *((_DWORD *)a6 + 11);
    v56 = v23;
    v25 = *((_DWORD *)a6 + 13);
    v57 = v24;
    v26 = *((_DWORD *)a6 + 8);
    LOBYTE(v41) = RailsEnabled | v41 & 0xFC | (2 * (v10 | 2));
    v48 = v25;
    v55 = v26;
    (*(void (__fastcall **)(struct IManipulationResource *, _DWORD *, struct InteractionLatencyTelemetry::IManipulationTelemetryData *))(v21 + 24))(
      a2,
      v40,
      a5);
  }
  else
  {
    v39 = 0;
    if ( *((_DWORD *)this + 198) && (*((_BYTE *)a6 + 4) & 2) == 0 && *(_DWORD *)a6 )
      v38[0] = 3;
    else
      v38[0] = 0;
    v38[1] = *((_DWORD *)this + 203);
    v38[2] = *((_DWORD *)this + 204);
    v38[3] = *((_DWORD *)this + 205);
    v27 = *(_QWORD *)a2;
    LOBYTE(v39) = RailsEnabled | v39 & 0xFC | (2 * (v10 | 2));
    (*(void (__fastcall **)(struct IManipulationResource *, _DWORD *, _QWORD))(v27 + 32))(a2, v38, 0LL);
  }
  if ( (unsigned int)dword_1803D0EF0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
    {
      v32 = *((_DWORD *)a6 + 1);
      v33 = *((_DWORD *)this + 198);
      v31 = v30;
      v34 = 1;
      v35 = v7;
      v36 = a2;
      v37 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v28,
        byte_18036A6FE,
        v29,
        v30,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
}
