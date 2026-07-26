/*
 * XREFs of ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C008BFB8
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00064B0 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1C0014260 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperBinary@@5@Z @ 0x1C008A3EC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U3@@-$_tlgWrite.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C008A4B8 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall NdisTraceLoggingStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  void *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  __int16 v16; // ax
  __int64 v17; // r11
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int16 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  __int16 v21; // [rsp+58h] [rbp-8h]
  int v22; // [rsp+70h] [rbp+10h] BYREF
  __int64 v23; // [rsp+78h] [rbp+18h] BYREF

  if ( !*((_WORD *)a1 + 8) )
  {
LABEL_6:
    if ( (unsigned int)dword_1C00F4210 > 5 && tlgKeywordOn((__int64)&dword_1C00F4210, 0x400000000000LL) )
    {
      v5 = &unk_1C00DE80C;
      v6 = *(_QWORD *)(v4 + 24) + 4008LL;
LABEL_9:
      v23 = v6;
      v22 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        v1,
        (int)v5,
        v2,
        v3,
        (__int64)&v22,
        &v23);
      return;
    }
    return;
  }
  if ( *((_WORD *)a1 + 8) != 1 )
  {
    if ( *((_WORD *)a1 + 8) == 2 )
    {
      if ( (unsigned int)dword_1C00F4210 > 5 && tlgKeywordOn((__int64)&dword_1C00F4210, 0x400000000000LL) )
      {
        v10 = *(_QWORD *)(v9 + 24);
        v22 = 2;
        v11 = *(_QWORD *)(v10 + 24);
        v18 = *(_QWORD *)(v11 + 80);
        v19 = *(_WORD *)(v11 + 72) & 0xFFFE;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
          65534LL,
          byte_1C00DE744,
          v7,
          v8,
          (__int64)&v22,
          &v18);
      }
      return;
    }
    if ( *((_WORD *)a1 + 8) != 3 && (unsigned int)(*((__int16 *)a1 + 8) - 4) > 1 )
      return;
    goto LABEL_6;
  }
  if ( *((_QWORD *)a1->Context + 2) )
  {
    if ( (unsigned int)dword_1C00F4210 > 5 && tlgKeywordOn((__int64)&dword_1C00F4210, 0x400000000000LL) )
    {
      v18 = *(_QWORD *)(v14 + 152);
      v19 = *(_WORD *)(v14 + 144) & 0xFFFE;
      v20 = *(_QWORD *)(v14 + 120);
      v16 = *(_WORD *)(v14 + 112) & 0xFFFE;
      v22 = v13;
      v21 = v16;
      v23 = v15 + 664;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperBinary>(
        65534LL,
        byte_1C00DE7AD,
        v12,
        v13,
        (__int64)&v22,
        &v23,
        &v20,
        &v18);
    }
  }
  else if ( (unsigned int)dword_1C00F4210 > 5 && tlgKeywordOn((__int64)&dword_1C00F4210, 0x400000000000LL) )
  {
    v6 = v17 + 664;
    v5 = &unk_1C00DE775;
    goto LABEL_9;
  }
}
