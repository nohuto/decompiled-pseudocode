/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x1400976E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140008C00 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14003A228 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14003A302 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x140098560 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     McTemplateU0pxxq_EventWriteTransfer @ 0x140098608 (McTemplateU0pxxq_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  int v3; // r12d
  __int64 v5; // rcx
  unsigned int v6; // esi
  signed __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  signed __int64 v10; // rax
  __int64 v11; // r14
  int v12; // edx
  int v13; // ecx
  __int64 v14; // r9
  unsigned int v15; // edi
  char *v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r10d
  unsigned int v21; // r8d
  _DWORD *v22; // rax
  __int64 v23; // rdi
  _DWORD *v25; // [rsp+70h] [rbp+8h]

  v3 = a2;
  *((_DWORD *)this + 5) = a2;
  v25 = (_DWORD *)((char *)this + 16);
  v5 = *((_QWORD *)this - 48);
  v6 = 0;
  *v25 = 2;
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), 0LL, 0LL);
  v8 = *((_QWORD *)this - 48);
  v9 = v7;
  v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), 0LL, 0LL);
  v11 = v10;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v8, a2, (__int64)this - 456, 17, a2, v9, v10);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessClientOutputEndpoint *)((char *)this - 456), v9)
    || !CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessClientOutputEndpoint *)((char *)this - 456), v11)
    || !v3 )
  {
    goto LABEL_15;
  }
  v15 = *((_DWORD *)this - 92) * v3;
  if ( v9 >= v11 )
  {
    v17 = *((_DWORD *)this - 76);
    v16 = (char *)this - 256;
    v6 = v11 + v17 - v9;
  }
  else
  {
    if ( (byte_1400CF981 & 1) != 0 )
      McTemplateU0pxxq_EventWriteTransfer(v13, v12, (_DWORD)this - 456, v9, v11, *((_BYTE *)this - 368) * v3);
    v16 = (char *)this - 256;
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 256,
      3u,
      (const unsigned __int16 *)"CpGlitchEvent::CLIENT_OUTPUT_SERVER_OVERREAD",
      v14);
    v6 = *((_DWORD *)this - 76);
    v17 = v6;
  }
  v18 = *((_QWORD *)this - 47);
  v19 = v17;
  v20 = *(_DWORD *)(v18 + 160);
  v21 = v20 + v9 % v17;
  if ( v6 < v15 )
  {
    if ( (byte_1400CF981 & 1) != 0 )
      McTemplateU0pqqqq_EventWriteTransfer(
        v18,
        (unsigned int)&EVT_GLITCH_CP_CLIENT_OUTPUT_READ_POINTER_OVERWRITE,
        (_DWORD)this - 456,
        v21,
        v20 + v11 % v17,
        v15,
        *(_DWORD *)(v18 + 164));
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)v16,
      4u,
      (const unsigned __int16 *)"CpGlitchEvent::CLIENT_OUTPUT_READ_POINTER_OVERWRITE",
      v19);
LABEL_15:
    v22 = v25;
LABEL_16:
    v23 = *((_QWORD *)this - 43);
    goto LABEL_17;
  }
  v22 = v25;
  if ( v21 + v15 > *(_DWORD *)(v18 + 164) )
  {
    *v25 = 1;
    goto LABEL_16;
  }
  *v25 = 0;
  v23 = *((_QWORD *)this - 48) + v21;
LABEL_17:
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      v6 / *((_DWORD *)this - 92),
      v6 % *((_DWORD *)this - 92),
      (__int64)this - 456,
      18,
      v3,
      v6 / *((_DWORD *)this - 92),
      *v22);
  return v23;
}
