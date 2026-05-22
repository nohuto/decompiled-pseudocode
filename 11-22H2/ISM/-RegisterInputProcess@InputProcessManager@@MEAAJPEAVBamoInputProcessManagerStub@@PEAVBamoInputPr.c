/*
 * XREFs of ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x1801C2100
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180040AFC (_tlgKeywordOn.c)
 *     ?StopProcess@InputProcessManager@@QEAAXXZ @ 0x180076E14 (-StopProcess@InputProcessManager@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E5B4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180111030 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x1801C21E8 (-RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProcessManager::RegisterInputProcess(
        InputProcessManager *this,
        struct BamoInputProcessManagerStub *a2,
        void (__fastcall ***a3)(struct BamoInputProcessProxy *))
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  InputTraceLogging::InputProcessManager::RegisterProcess(a3);
  if ( *((void (__fastcall ****)(struct BamoInputProcessProxy *))this + 7) != a3 )
  {
    if ( a3 )
      (**a3)((struct BamoInputProcessProxy *)a3);
    v7 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a3;
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(&v7);
  }
  if ( (unsigned int)dword_180275498 > 5 && tlgKeywordOn((__int64)&dword_180275498, 0x400000000000LL) )
  {
    LODWORD(v7) = *((_QWORD *)this + 10) != 0LL;
    v8 = *((unsigned __int8 *)this + 64);
    v9 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      byte_1802376FB,
      0LL,
      0LL,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
  if ( !*((_BYTE *)this + 64) )
    InputProcessManager::StopProcess(this);
  return 0LL;
}
