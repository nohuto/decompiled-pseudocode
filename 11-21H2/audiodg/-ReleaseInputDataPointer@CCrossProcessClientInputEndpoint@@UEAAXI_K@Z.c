/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x14008A250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140088940 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140088EC8 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14008946C (McTemplateU0p_EventWriteTransfer.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14008A380 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  CCrossProcessBaseEndpoint *v4; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rax
  _BYTE v12[64]; // [rsp+40h] [rbp-48h] BYREF

  v4 = (CCrossProcessClientInputEndpoint *)((char *)this - 456);
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((_DWORD)this, a2, (_DWORD)this - 456, 15, a2, 0, 0);
  v7 = *((_QWORD *)this - 48);
  *((_DWORD *)this + 5) = 0;
  if ( CCrossProcessBaseEndpoint::IsValidFlags(v4, *(unsigned int *)(v7 + 164), a3, a4) )
  {
    if ( !*((_DWORD *)this + 4) )
      LODWORD(v9) = _InterlockedExchangeAdd64(
                      (volatile signed __int64 *)(*((_QWORD *)this - 48) + 24LL),
                      (unsigned int)(a2 * *((_DWORD *)this - 92)));
  }
  else
  {
    if ( (byte_1400C1841 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v9, v8, (__int64)v4);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 48) + 164LL), 0xFFFFFFFE);
  }
  if ( a2 )
    CCrossProcessBaseEndpoint::GetNextTimestampMessage((volatile __int32 **)v4, (struct SharedMessageQueueItem *)v12);
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v9, v8, (_DWORD)v4, 16, a2, 0, *((_DWORD *)this + 4));
  v10 = *((_QWORD *)this - 3);
  if ( v10 )
  {
    v11 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
    SetEvent(v11);
  }
  *((_DWORD *)this + 4) = 3;
}
