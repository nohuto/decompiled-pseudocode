/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14008A790
 * Callers:
 *     <none>
 * Callees:
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140002FF4 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x14002BD28 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14008A380 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x14008B5DC (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     McTemplateU0pxxq_EventWriteTransfer @ 0x14008B684 (McTemplateU0pxxq_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v5; // r12d
  unsigned int v6; // esi
  signed __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  signed __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  int v16; // ecx
  int v17; // r9d
  unsigned int v18; // edi
  char *v19; // r13
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // r9d
  int v23; // r10d
  unsigned int v24; // r8d
  __int64 v25; // rdi

  v4 = *((_QWORD *)this - 48);
  v5 = a2;
  v6 = 0;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = 2;
  v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), 0LL, 0LL);
  v9 = *((_QWORD *)this - 48);
  v10 = v8;
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), 0LL, 0LL);
  v12 = v11;
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v9, a2, (__int64)this - 456, 17, a2, v10, v11);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessClientOutputEndpoint *)((char *)this - 456), v10, v4, a4)
    || !CCrossProcessBaseEndpoint::IsValidOffset(
          (CCrossProcessClientOutputEndpoint *)((char *)this - 456),
          v12,
          v13,
          v14)
    || !v5 )
  {
    goto LABEL_15;
  }
  v18 = v5 * *((_DWORD *)this - 92);
  if ( v10 >= v12 )
  {
    v20 = *((_DWORD *)this - 76);
    v19 = (char *)this - 256;
    v6 = v12 + v20 - v10;
  }
  else
  {
    if ( (byte_1400C1841 & 1) != 0 )
      McTemplateU0pxxq_EventWriteTransfer(v16, v15, (_DWORD)this - 456, v10, v12, v5 * *((_BYTE *)this - 368));
    v19 = (char *)this - 256;
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 256,
      3u,
      (__int64)"CpGlitchEvent::CLIENT_OUTPUT_SERVER_OVERREAD",
      v17);
    v6 = *((_DWORD *)this - 76);
    v20 = v6;
  }
  v21 = *((_QWORD *)this - 47);
  v22 = v20;
  v23 = *(_DWORD *)(v21 + 160);
  v24 = v23 + v10 % v20;
  if ( v6 < v18 )
  {
    if ( (byte_1400C1841 & 1) != 0 )
      McTemplateU0pqqqq_EventWriteTransfer(
        v21,
        (unsigned int)&EVT_GLITCH_CP_CLIENT_OUTPUT_READ_POINTER_OVERWRITE,
        (_DWORD)this - 456,
        v24,
        v23 + v12 % v20,
        v18,
        *(_DWORD *)(v21 + 164));
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)v19,
      4u,
      (__int64)"CpGlitchEvent::CLIENT_OUTPUT_READ_POINTER_OVERWRITE",
      v22);
    goto LABEL_15;
  }
  if ( v24 + v18 > *(_DWORD *)(v21 + 164) )
  {
    *((_DWORD *)this + 4) = 1;
LABEL_15:
    v25 = *((_QWORD *)this - 43);
    goto LABEL_16;
  }
  *((_DWORD *)this + 4) = 0;
  v25 = *((_QWORD *)this - 48) + v24;
LABEL_16:
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      v6 / *((_DWORD *)this - 92),
      v6 % *((_DWORD *)this - 92),
      (__int64)this - 456,
      18,
      v5,
      v6 / *((_DWORD *)this - 92),
      *((_DWORD *)this + 4));
  return v25;
}
