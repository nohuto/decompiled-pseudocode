/*
 * XREFs of ?UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z @ 0x180076F40
 * Callers:
 *     ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x1801C1360 (-OnDisconnected@InputProcessProxy@@MEAAJXZ.c)
 * Callees:
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x180076BA0 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E5B4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180111030 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x1801C2440 (-UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 */

void __fastcall InputProcessManager::UnregisterInputProcess(
        InputProcessManager *this,
        struct BamoInputProcessProxy *a2)
{
  BOOL v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  InputTraceLogging::InputProcessManager::UnregisterProcess(a2);
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((char *)this + 56);
  if ( (unsigned int)dword_180275498 > 5
    && (qword_1802754A8 & 0x400000000000LL) != 0
    && (qword_1802754B0 & 0x400000000000LL) == qword_1802754B0 )
  {
    v5 = 0x1000000LL;
    v3 = *((_QWORD *)this + 10) != 0LL;
    v4 = *((unsigned __int8 *)this + 64);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_180275498,
      (unsigned int)&unk_180237643,
      0,
      0,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v3);
  }
  if ( *((_BYTE *)this + 64) )
  {
    if ( !*((_QWORD *)this + 10) )
      InputProcessManager::StartProcess(this);
  }
}
