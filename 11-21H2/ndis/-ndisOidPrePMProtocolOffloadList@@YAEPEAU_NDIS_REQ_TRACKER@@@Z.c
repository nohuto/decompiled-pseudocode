/*
 * XREFs of ?ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0090440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000D5C0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x1C008D9B8 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 */

char __fastcall ndisOidPrePMProtocolOffloadList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r12
  char v2; // si
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rcx
  int v11; // ecx
  __int64 *v12; // r15
  __int64 *i; // r8
  int PMProtocolOffloadSize; // eax
  __int64 **v15; // r8
  _DWORD *v16; // r13
  size_t v17; // rbx
  const void *v18; // rcx
  int v20; // [rsp+90h] [rbp+8h]
  char v21; // [rsp+98h] [rbp+10h]

  v1 = *((_QWORD *)a1 + 3);
  v2 = 0;
  v3 = *(_QWORD *)a1;
  v4 = 0;
  v5 = *((_QWORD *)a1 + 4);
  v21 = v1;
  v20 = 0;
  v7 = v1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x69u,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      v3,
      v1,
      v5);
    v7 = *((_QWORD *)a1 + 3);
  }
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    if ( *(_BYTE *)(v8 + 56) <= 6u && (*(_BYTE *)(v8 + 56) != 6 || *(_BYTE *)(v8 + 57) < 0x14u) )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      v2 = 1;
      goto LABEL_35;
    }
  }
  v9 = *((_QWORD *)a1 + 1);
  if ( v9
    && !_bittest((const signed __int32 *)(v5 + 88), 0xEu)
    && (v10 = *(_QWORD *)(v9 + 16), *(_BYTE *)(v10 + 100) <= 6u)
    && (*(_BYTE *)(v10 + 100) != 6 || *(_BYTE *)(v10 + 101) < 0x14u)
    || (v11 = *(_DWORD *)(v5 + 4), (v11 & 0xFFFFFFFD) != 0) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_34:
    v2 = 1;
    goto LABEL_35;
  }
  if ( v7 && !v11 )
  {
    v12 = *(__int64 **)(v1 + 512);
LABEL_25:
    for ( i = v12; i; v4 += (PMProtocolOffloadSize + 7) & 0xFFFFFFF8 )
    {
      PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize((struct _NDIS_PM_PROTOCOL_OFFLOAD *)(i + 6));
      i = *v15;
    }
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v5 + 48) >= v4 )
    {
      v16 = *(_DWORD **)(v5 + 40);
      if ( v12 )
      {
        LODWORD(v1) = 0;
        do
        {
          v17 = (unsigned int)ndisGetPMProtocolOffloadSize((struct _NDIS_PM_PROTOCOL_OFFLOAD *)(v12 + 6));
          memmove(v16, v18, v17);
          LODWORD(v1) = ((v17 + 7) & 0xFFFFFFF8) + v1;
          v16[38] = *v12 != 0 ? v1 : 0;
          v16 = (_DWORD *)((char *)v16 + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
          v12 = (__int64 *)*v12;
        }
        while ( v12 );
        v20 = v1;
        LOBYTE(v1) = v21;
      }
      *(_DWORD *)(v5 + 52) = v20;
    }
    else
    {
      *(_DWORD *)(v5 + 56) = v4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    goto LABEL_34;
  }
  if ( v9 && !_bittest((const signed __int32 *)(v5 + 88), 0xEu) && !v11 )
  {
    v12 = *(__int64 **)(v9 + 712);
    goto LABEL_25;
  }
  if ( *(_QWORD *)a1 && v11 == 2 )
  {
    v12 = *(__int64 **)(v3 + 976);
    goto LABEL_25;
  }
LABEL_35:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      0xBu,
      0x6Au,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      v3,
      v1,
      v5,
      *((_DWORD *)a1 + 10));
  return v2;
}
