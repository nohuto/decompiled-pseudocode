/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x140097290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14003A342 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140095890 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140095E20 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14009638C (McTemplateU0p_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        __int64 a2)
{
  CCrossProcessBaseEndpoint *v2; // rsi
  int v3; // ebp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rdi
  __int64 v9; // rcx
  void *v10; // rax
  _BYTE v11[64]; // [rsp+40h] [rbp-48h] BYREF

  v2 = (CCrossProcessClientInputEndpoint *)((char *)this - 456);
  v3 = a2;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, a2, (__int64)this - 456, 15, a2, 0, 0);
  v5 = *((_QWORD *)this - 48);
  *((_DWORD *)this + 5) = 0;
  if ( CCrossProcessBaseEndpoint::IsValidFlags(v2, *(unsigned int *)(v5 + 164)) )
  {
    v8 = (_DWORD *)((char *)this + 16);
    if ( !*((_DWORD *)this + 4) )
      v7 = _InterlockedExchangeAdd64(
             (volatile signed __int64 *)(*((_QWORD *)this - 48) + 24LL),
             (unsigned int)(*((_DWORD *)this - 92) * v3));
  }
  else
  {
    if ( (byte_1400CF981 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v7, v6, (__int64)v2);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 48) + 164LL), 0xFFFFFFFE);
    v8 = (_DWORD *)((char *)this + 16);
  }
  if ( v3 )
    CCrossProcessBaseEndpoint::GetNextTimestampMessage((volatile __int32 **)v2, (struct SharedMessageQueueItem *)v11);
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v7, v6, (__int64)v2, 16, v3, 0, *v8);
  v9 = *((_QWORD *)this - 3);
  if ( v9 )
  {
    v10 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
    SetEvent(v10);
  }
  *v8 = 3;
}
