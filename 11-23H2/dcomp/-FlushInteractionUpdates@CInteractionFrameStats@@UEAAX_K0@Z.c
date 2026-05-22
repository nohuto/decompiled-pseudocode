/*
 * XREFs of ?FlushInteractionUpdates@CInteractionFrameStats@@UEAAX_K0@Z @ 0x1801A56E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@?$vector@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@1@@Z @ 0x180008CD4 (--$emplace_back@V-$unique_ptr@VCBatchStats@CTouchFrameStats@@U-$default_delete@VCBatchStats@CTou.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@?$vector@VCInteractionInfo@CTouchFrameStats@@V?$allocator@VCInteractionInfo@CTouchFrameStats@@@std@@@std@@QEAA?A_TAEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801A4F28 (--$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAUTOUCH_TELEMETRY_UPDATE_INFO@@@-$vector@.c)
 *     ??$make_unique@VCBatchStats@CTouchFrameStats@@AEA_K$0A@@std@@YA?AV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@0@AEA_K@Z @ 0x1801A50A0 (--$make_unique@VCBatchStats@CTouchFrameStats@@AEA_K$0A@@std@@YA-AV-$unique_ptr@VCBatchStats@CTou.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CInteractionFrameStats::FlushInteractionUpdates(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  HANDLE OwningThread; // r14
  __int64 i; // rdi
  void *v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  void *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = a3;
  v5 = this - 7;
  EnterCriticalSection(this - 7);
  if ( BYTE4(this[-9].OwningThread) )
  {
    if ( 0x84BDA12F684BDA13uLL * (((__int64)this->OwningThread - *(_QWORD *)&this->LockCount) >> 3) )
    {
      std::make_unique<CTouchFrameStats::CBatchStats,unsigned __int64 &,0>(&v8, &v9);
      v10 = v8;
      std::vector<std::unique_ptr<CTouchFrameStats::CBatchStats>>::emplace_back<std::unique_ptr<CTouchFrameStats::CBatchStats>>(
        (__int64)&this[-4].LockSemaphore,
        (__int64 *)&v8);
      OwningThread = this->OwningThread;
      for ( i = *(_QWORD *)&this->LockCount; (HANDLE)i != OwningThread; i += 216LL )
      {
        *(_QWORD *)(i + 160) = a2;
        std::vector<CTouchFrameStats::CInteractionInfo>::emplace_back<CTouchFrameStats::CBatchStats * &,TOUCH_TELEMETRY_UPDATE_INFO &>(
          (__int64 *)&this[-3].LockCount,
          &v10,
          (_OWORD *)i);
      }
      if ( v8 )
        operator delete(v8);
    }
  }
  this->OwningThread = *(HANDLE *)&this->LockCount;
  LeaveCriticalSection(v5);
}
