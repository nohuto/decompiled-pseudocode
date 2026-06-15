/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14008BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140002FF4 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x14002BD28 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14008A380 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x14008C4C4 (McTemplateU0pqqq_EventWriteTransfer.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x14008C760 (McTemplateU0pxqxq_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::GetOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3,
        __int64 a4)
{
  int v4; // r12d
  CCrossProcessBaseEndpoint *v5; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r9d
  __int64 v15; // rax
  int v16; // r13d
  unsigned int v17; // r13d
  int v18; // edx
  unsigned int v19; // r8d
  int v20; // eax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r10d
  __int64 v27; // rdi

  v4 = a2;
  *((_DWORD *)this + 5) = a2;
  v5 = (CCrossProcessServerOutputEndpoint *)((char *)this - 464);
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 4) = 2;
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, a2, (__int64)this - 464, 9, a2, *((_DWORD *)this - 92), 0);
  v8 = *((_QWORD *)this - 49);
  v9 = *(_DWORD *)(v8 + 164) & 1;
  if ( (*(_BYTE *)(v8 + 164) & 1) == 0 )
    goto LABEL_24;
  if ( !v4 )
    goto LABEL_24;
  v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), 0LL, 0LL);
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 24LL), 0LL, 0LL);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v5, v10, (__int64)a3, a4)
    || !CCrossProcessBaseEndpoint::IsValidOffset(v5, v11, v12, v13)
    || v10 < v11 )
  {
    goto LABEL_24;
  }
  (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v5 + 80LL))(
    v5,
    a3,
    v10);
  v15 = *((_QWORD *)this - 49);
  v16 = *((_DWORD *)this - 94);
  *((_OWORD *)this + 6) = *(_OWORD *)&a3->u64DevicePosition;
  v17 = v4 * v16;
  *((_OWORD *)this + 7) = *(_OWORD *)&a3->u64PaddingFrames;
  *((_QWORD *)this + 16) = *(_QWORD *)&a3->f32FramesPerSecond;
  v18 = *(_DWORD *)(v15 + 4) + 1;
  v19 = **((_DWORD **)this - 49);
  v20 = 0;
  if ( v18 != *(_DWORD *)(*((_QWORD *)this - 48) + 132LL) )
    v20 = v18;
  if ( v20 == v19 )
  {
    v21 = (unsigned __int64)(v19 + 1 < *(_DWORD *)(*((_QWORD *)this - 48) + 132LL) ? v19 + 1 : 0) << 6;
    _InterlockedExchange(
      *((volatile __int32 **)this - 49),
      v19 + 1 < *(_DWORD *)(*((_QWORD *)this - 48) + 132LL) ? v19 + 1 : 0);
    *(_DWORD *)(v21 + *((_QWORD *)this - 43) + 52) = 1;
    if ( (byte_1400C1841 & 1) != 0 )
      McTemplateU0pxqxq_EventWriteTransfer(
        v19 << 6,
        v21,
        (_DWORD)v5,
        v10,
        *(_DWORD *)(((unsigned __int64)v19 << 6) + *((_QWORD *)this - 43) + 4),
        v11,
        v17);
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 264,
      6u,
      (__int64)"CpGlitchEvent::SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP",
      v14);
  }
  v22 = *((unsigned int *)this - 78);
  if ( (unsigned int)v22 >= (int)v10 - (int)v11 )
    v23 = v11 + v22 - v10;
  else
    v23 = v17;
  v24 = *((_QWORD *)this - 48);
  v25 = *((unsigned int *)this - 78);
  a2 = v10 % v22;
  v26 = *(_DWORD *)(v24 + 160);
  v9 = v26 + (unsigned int)(v10 % v22);
  if ( v23 < v17 )
  {
    if ( (byte_1400C1841 & 1) != 0 )
      McTemplateU0pqqq_EventWriteTransfer(v9, v26 + v11 % v25, (_DWORD)v5, v9, v26 + v11 % v25, v17);
    if ( v11 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch(
        (__int64)this - 264,
        7u,
        (__int64)"CpGlitchEvent::SERVER_OUTPUT_READ_POINTER_OVERWRITE",
        v25);
    if ( v23 )
    {
      *((_DWORD *)this + 22) = v23;
      *((_DWORD *)this + 4) = 1;
    }
LABEL_24:
    _InterlockedExchange((volatile __int32 *)this - 76, 1);
LABEL_25:
    v27 = *((_QWORD *)this - 44);
    goto LABEL_26;
  }
  if ( (unsigned int)v9 + v17 > *(_DWORD *)(v24 + 168) )
  {
    *((_DWORD *)this + 4) = 1;
    goto LABEL_25;
  }
  *((_DWORD *)this + 4) = 0;
  v27 = *((_QWORD *)this - 49) + (unsigned int)v9;
LABEL_26:
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v9, a2, (__int64)v5, 10, v4, 0, 0);
  return v27;
}
