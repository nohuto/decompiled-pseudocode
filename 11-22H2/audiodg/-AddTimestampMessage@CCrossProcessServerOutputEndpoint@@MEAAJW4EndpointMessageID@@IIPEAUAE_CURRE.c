/*
 * XREFs of ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x14003A410
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140039ECA (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAIIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x14003A828 (-CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAIIW4EndpointMessageID@@IPEA.c)
 *     McTemplateU0pqqqx_EventWriteTransfer @ 0x14003AFA4 (McTemplateU0pqqqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxx_EventWriteTransfer @ 0x14003B050 (McTemplateU0pqxxxxx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096990 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_DROP@@YAXKPEAXE_K1@Z @ 0x1400A10A8 (-AEWMILOG_DROP@@YAXKPEAXE_K1@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::AddTimestampMessage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        float *a5,
        int a6,
        int a7)
{
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  unsigned int v10; // r15d
  unsigned __int64 v11; // rbp
  unsigned int v12; // r14d
  CCrossProcessBaseEndpoint *v13; // rcx
  unsigned __int8 v14; // r8
  __int32 v15; // r14d
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // esi
  int CanCoalesceTimestampMessages; // eax
  BOOL v20; // r9d
  int v21; // ebp
  __int64 v22; // rcx
  signed __int64 v23; // rdx
  __int64 v24; // r8
  double v25; // xmm1_8
  __int64 v26; // rcx
  double v27; // xmm0_8
  __int64 v28; // r8
  double v29; // xmm0_8
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  unsigned int v34; // r13d
  CCrossProcessBaseEndpoint *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  bool v38; // zf
  __int32 v39; // eax
  __int32 v40; // edx
  char v42; // [rsp+50h] [rbp-58h]
  unsigned int v43; // [rsp+54h] [rbp-54h]
  char v44; // [rsp+58h] [rbp-50h]
  unsigned int v45; // [rsp+B0h] [rbp+8h]

  v7 = a3;
  v8 = 0;
  v42 = 0;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4LL);
  v11 = **(unsigned int **)(a1 + 72);
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL);
  v45 = v12;
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)a1, v10, v12)
    || !CCrossProcessBaseEndpoint::IsValidQueueIndex(v13, v11, v12) )
  {
    goto LABEL_40;
  }
  v15 = 0;
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL);
  if ( v10 + 1 != v16 )
    v15 = v10 + 1;
  if ( v15 == (_DWORD)v11 )
  {
    AEWMILOG_DROP(v10 + 1, (void *)a1, v14, v10, v11);
    v8 = -2005139385;
LABEL_41:
    AudCPTraceLoggingErrorHelper("CCrossProcessServerOutputEndpoint::AddTimestampMessage", 0x27Du, v8);
    return v8;
  }
  if ( a7 != 1 )
  {
    v21 = a7 != 1 ? 4 : 0;
    if ( v16 > 5 )
      goto LABEL_22;
LABEL_21:
    v21 |= 8u;
    goto LABEL_22;
  }
  if ( v16 <= 5 )
  {
    v21 = 0;
    goto LABEL_21;
  }
  if ( (unsigned int)v11 > v10 )
    v17 = v10 + v16 - v11;
  else
    v17 = v10 - v11;
  if ( v17 < 5 )
  {
    v21 = 2;
LABEL_22:
    v20 = 0;
    goto LABEL_23;
  }
  v18 = v10 - 1;
  if ( !v10 )
    v18 = v16 - 1;
  CanCoalesceTimestampMessages = CCrossProcessServerOutputEndpoint::CanCoalesceTimestampMessages(
                                   a1,
                                   v18,
                                   a2,
                                   v7,
                                   a5,
                                   a6);
  v42 = CanCoalesceTimestampMessages;
  if ( !CanCoalesceTimestampMessages )
  {
    v15 = v10;
    v10 = v18;
  }
  v7 = a3;
  v20 = CanCoalesceTimestampMessages == 0;
  v21 = CanCoalesceTimestampMessages != 0;
LABEL_23:
  v22 = *(_QWORD *)a5;
  v23 = *((_QWORD *)a5 + 1);
  v24 = *((_QWORD *)a5 + 3);
  v25 = a5[8];
  if ( *(_QWORD *)a5 < (unsigned __int64)v23 )
  {
    v23 -= v22;
    if ( v23 < 0 )
    {
      v30 = v23;
      LODWORD(v23) = v23 & 1;
      v29 = (double)(int)(v23 | (v30 >> 1)) + (double)(int)(v23 | (v30 >> 1));
    }
    else
    {
      v29 = (double)(int)v23;
    }
    v28 = (unsigned int)(int)(v29 * 10000000.0 / v25 + 0.5) + v24;
  }
  else
  {
    v26 = v22 - v23;
    if ( v26 < 0 )
      v27 = (double)(int)(v26 & 1 | ((unsigned __int64)v26 >> 1))
          + (double)(int)(v26 & 1 | ((unsigned __int64)v26 >> 1));
    else
      v27 = (double)(int)v26;
    v28 = v24 - (unsigned int)(int)(v27 * 10000000.0 / v25 + 0.5);
  }
  v31 = *(_QWORD *)(a1 + 120);
  v32 = (unsigned __int64)v10 << 6;
  v44 = v28;
  if ( v20 )
  {
    *(_DWORD *)(v32 + v31 + 56) += a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 120) + v32 + 32) += *((_QWORD *)a5 + 2);
  }
  else
  {
    *(_DWORD *)(v32 + v31) = a2;
    *(_DWORD *)(*(_QWORD *)(a1 + 120) + v32 + 4) = v7;
    *(_DWORD *)(v32 + *(_QWORD *)(a1 + 120) + 56) = a4;
    *(_DWORD *)(v32 + *(_QWORD *)(a1 + 120) + 8) = a6;
    v33 = *(_QWORD *)(a1 + 120);
    *(_OWORD *)(v32 + v33 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(v32 + v33 + 32) = *((_OWORD *)a5 + 1);
    *(_QWORD *)(v32 + v33 + 48) = *((_QWORD *)a5 + 4);
    *(_QWORD *)(v32 + *(_QWORD *)(a1 + 120) + 40) = v28;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 160), 0) == 1 )
    *(_DWORD *)(v32 + *(_QWORD *)(a1 + 120) + 52) = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 80) + 152LL) != -1 )
  {
    v43 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
    v34 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 8LL);
    if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)v43, v43, v45)
      || !CCrossProcessBaseEndpoint::IsValidQueueIndex(v35, v34, v45) )
    {
LABEL_40:
      v8 = -2005139387;
      goto LABEL_41;
    }
    LODWORD(v28) = 0;
    v36 = *(_QWORD *)(a1 + 136);
    if ( v43 + 1 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL) )
      LODWORD(v28) = v43 + 1;
    v37 = *(_QWORD *)(a1 + 120);
    v23 = (unsigned __int64)v43 << 6;
    v38 = (_DWORD)v28 == v34;
    *(_OWORD *)(v23 + v36) = *(_OWORD *)(v32 + v37);
    *(_OWORD *)(v23 + v36 + 16) = *(_OWORD *)(v32 + v37 + 16);
    *(_OWORD *)(v23 + v36 + 32) = *(_OWORD *)(v32 + v37 + 32);
    *(_OWORD *)(v23 + v36 + 48) = *(_OWORD *)(v32 + v37 + 48);
    v39 = v28;
    LOBYTE(v28) = v44;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 72) + 12LL), v39);
    if ( v38 )
    {
      v40 = 0;
      if ( v34 + 1 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL) )
        v40 = v34 + 1;
      LODWORD(v23) = _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 72) + 8LL), v40);
    }
  }
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 72) + 4LL), v15);
  if ( (byte_1400CF981 & 4) != 0 )
  {
    McTemplateU0pqxxxxx_EventWriteTransfer(
      *(_DWORD *)(v32 + *(_QWORD *)(a1 + 120) + 52),
      v23,
      a1,
      v20,
      *(_DWORD *)(v32 + *(_QWORD *)(a1 + 120) + 52),
      *((_QWORD *)a5 + 2),
      v28,
      *(_QWORD *)a5,
      *((_QWORD *)a5 + 1));
    if ( (byte_1400CF981 & 4) != 0 )
      McTemplateU0pqqqx_EventWriteTransfer(
        *(_QWORD *)(a1 + 120),
        *(_QWORD *)(v32 + *(_QWORD *)(a1 + 120) + 40),
        a1,
        v21,
        v10,
        v42,
        *(_QWORD *)(v32 + *(_QWORD *)(a1 + 120) + 40));
  }
  return v8;
}
