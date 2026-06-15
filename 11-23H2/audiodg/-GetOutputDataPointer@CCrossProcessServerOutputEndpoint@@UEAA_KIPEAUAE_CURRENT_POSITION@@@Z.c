/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140008C00 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14003A228 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14003A302 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x140098950 (McTemplateU0pqqq_EventWriteTransfer.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x140098A88 (McTemplateU0pxqxq_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::GetOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  int v3; // r13d
  CCrossProcessBaseEndpoint *v4; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // r12d
  int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r10d
  __int64 v23; // rdi

  v3 = a2;
  *((_DWORD *)this + 5) = a2;
  v4 = (CCrossProcessServerOutputEndpoint *)((char *)this - 464);
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 4) = 2;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, a2, (__int64)this - 464, 9, a2, *((_DWORD *)this - 92), 0);
  v7 = *((_QWORD *)this - 49);
  v8 = *(_DWORD *)(v7 + 164) & 1;
  if ( (*(_BYTE *)(v7 + 164) & 1) == 0 )
    goto LABEL_24;
  if ( !v3 )
    goto LABEL_24;
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 16LL), 0LL, 0LL);
  v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 49) + 24LL), 0LL, 0LL);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v4, v9)
    || !CCrossProcessBaseEndpoint::IsValidOffset(v4, v10)
    || v9 < v10 )
  {
    goto LABEL_24;
  }
  (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v4 + 80LL))(
    v4,
    a3,
    v9);
  v12 = *((_QWORD *)this - 49);
  v13 = *((_DWORD *)this - 94) * v3;
  *((_OWORD *)this + 6) = *(_OWORD *)&a3->u64DevicePosition;
  *((_OWORD *)this + 7) = *(_OWORD *)&a3->u64PaddingFrames;
  *((_QWORD *)this + 16) = *(_QWORD *)&a3->f32FramesPerSecond;
  v14 = *(_DWORD *)(v12 + 4) + 1;
  v15 = **((_DWORD **)this - 49);
  v16 = 0;
  if ( v14 != *(_DWORD *)(*((_QWORD *)this - 48) + 132LL) )
    v16 = v14;
  if ( v16 == v15 )
  {
    v17 = (unsigned __int64)(v15 + 1 < *(_DWORD *)(*((_QWORD *)this - 48) + 132LL) ? v15 + 1 : 0) << 6;
    _InterlockedExchange(
      *((volatile __int32 **)this - 49),
      v15 + 1 < *(_DWORD *)(*((_QWORD *)this - 48) + 132LL) ? v15 + 1 : 0);
    *(_DWORD *)(v17 + *((_QWORD *)this - 43) + 52) = 1;
    if ( (byte_1400CF981 & 1) != 0 )
      McTemplateU0pxqxq_EventWriteTransfer(
        v15 << 6,
        v17,
        (_DWORD)v4,
        v9,
        *(_DWORD *)(((unsigned __int64)v15 << 6) + *((_QWORD *)this - 43) + 4),
        v10,
        v13);
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 264,
      6u,
      (const unsigned __int16 *)"CpGlitchEvent::SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP",
      v11);
  }
  v18 = *((unsigned int *)this - 78);
  if ( (unsigned int)v18 >= (int)v9 - (int)v10 )
    v19 = v10 + v18 - v9;
  else
    v19 = v13;
  v20 = *((_QWORD *)this - 48);
  v21 = *((unsigned int *)this - 78);
  a2 = v9 % v18;
  v22 = *(_DWORD *)(v20 + 160);
  v8 = v22 + (unsigned int)(v9 % v18);
  if ( v19 < v13 )
  {
    if ( (byte_1400CF981 & 1) != 0 )
      McTemplateU0pqqq_EventWriteTransfer(v8, v22 + v10 % v21, (_DWORD)v4, v8, v22 + v10 % v21, v13);
    if ( v10 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch(
        (__int64)this - 264,
        7u,
        (const unsigned __int16 *)"CpGlitchEvent::SERVER_OUTPUT_READ_POINTER_OVERWRITE",
        v21);
    if ( v19 )
    {
      *((_DWORD *)this + 22) = v19;
      *((_DWORD *)this + 4) = 1;
    }
LABEL_24:
    _InterlockedExchange((volatile __int32 *)this - 76, 1);
LABEL_25:
    v23 = *((_QWORD *)this - 44);
    goto LABEL_26;
  }
  if ( (unsigned int)v8 + v13 > *(_DWORD *)(v20 + 168) )
  {
    *((_DWORD *)this + 4) = 1;
    goto LABEL_25;
  }
  *((_DWORD *)this + 4) = 0;
  v23 = *((_QWORD *)this - 49) + (unsigned int)v8;
LABEL_26:
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v8, a2, (__int64)v4, 10, v3, 0, 0);
  return v23;
}
