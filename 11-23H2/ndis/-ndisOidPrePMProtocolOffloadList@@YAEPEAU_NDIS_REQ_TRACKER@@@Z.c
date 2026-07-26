/*
 * XREFs of ?ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CF50 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x1C00939C0 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
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
  _DWORD *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // ecx
  __int64 *v13; // r15
  __int64 *i; // r8
  int PMProtocolOffloadSize; // eax
  __int64 **v16; // r8
  _DWORD *v17; // r13
  size_t v18; // rbx
  const void *v19; // rcx
  int v21; // [rsp+90h] [rbp+8h]
  __int64 v22; // [rsp+98h] [rbp+10h]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 3);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 4);
  v22 = *(_QWORD *)a1;
  v21 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x69u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v1,
      v3,
      v5);
  v7 = *((_QWORD *)a1 + 3);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    if ( *(_BYTE *)(v8 + 56) <= 6u && (*(_BYTE *)(v8 + 56) != 6 || *(_BYTE *)(v8 + 57) < 0x14u) )
    {
      v9 = (_DWORD *)((char *)a1 + 40);
      v2 = 1;
      *v9 = -1073741637;
      goto LABEL_36;
    }
  }
  v10 = *((_QWORD *)a1 + 1);
  if ( v10
    && !_bittest((const signed __int32 *)(v5 + 88), 0xEu)
    && (v11 = *(_QWORD *)(v10 + 16), *(_BYTE *)(v11 + 100) <= 6u)
    && (*(_BYTE *)(v11 + 100) != 6 || *(_BYTE *)(v11 + 101) < 0x14u)
    || (v12 = *(_DWORD *)(v5 + 4), (v12 & 0xFFFFFFFD) != 0) )
  {
    v9 = (_DWORD *)((char *)a1 + 40);
    *v9 = -1073741637;
LABEL_14:
    v2 = 1;
    goto LABEL_36;
  }
  if ( v7 && !v12 )
  {
    v13 = *(__int64 **)(v3 + 512);
LABEL_26:
    for ( i = v13; i; v4 += (PMProtocolOffloadSize + 7) & 0xFFFFFFF8 )
    {
      PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize((struct _NDIS_PM_PROTOCOL_OFFLOAD *)(i + 6));
      i = *v16;
    }
    v9 = (_DWORD *)((char *)a1 + 40);
    *v9 = 0;
    if ( *(_DWORD *)(v5 + 48) >= v4 )
    {
      v17 = *(_DWORD **)(v5 + 40);
      if ( v13 )
      {
        LODWORD(v1) = 0;
        do
        {
          v18 = (unsigned int)ndisGetPMProtocolOffloadSize((struct _NDIS_PM_PROTOCOL_OFFLOAD *)(v13 + 6));
          memmove(v17, v19, v18);
          LODWORD(v1) = ((v18 + 7) & 0xFFFFFFF8) + v1;
          v17[38] = *v13 != 0 ? v1 : 0;
          v17 = (_DWORD *)((char *)v17 + ((v18 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
          v13 = (__int64 *)*v13;
        }
        while ( v13 );
        v21 = v1;
        LOBYTE(v1) = v22;
      }
      *(_DWORD *)(v5 + 52) = v21;
    }
    else
    {
      *(_DWORD *)(v5 + 56) = v4;
      *v9 = -1073676268;
    }
    goto LABEL_14;
  }
  if ( v10 && !_bittest((const signed __int32 *)(v5 + 88), 0xEu) && !v12 )
  {
    v13 = *(__int64 **)(v10 + 712);
    goto LABEL_26;
  }
  if ( *(_QWORD *)a1 && v12 == 2 )
  {
    v13 = *(__int64 **)(v1 + 976);
    goto LABEL_26;
  }
  v9 = (_DWORD *)((char *)a1 + 40);
LABEL_36:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      0xBu,
      0x6Au,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v1,
      v3,
      v5,
      *v9);
  return v2;
}
