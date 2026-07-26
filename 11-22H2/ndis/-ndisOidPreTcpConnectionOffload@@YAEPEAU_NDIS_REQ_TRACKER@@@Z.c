/*
 * XREFs of ?ndisOidPreTcpConnectionOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  _DWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  char v10[4]; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC3u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_11;
  v4 = 0;
  if ( !*(_QWORD *)a1 )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
    goto LABEL_13;
  }
  v6 = *(_QWORD *)(v1 + 4096);
  if ( v6 && *(_BYTE *)(v6 + 1005) )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x14u )
    {
      v7 = *(_QWORD *)(v1 + 4096);
      v8 = *(_QWORD *)(v3 + 40);
      *(_OWORD *)v8 = *(_OWORD *)(v7 + 1004);
      *(_DWORD *)(v8 + 16) = *(_DWORD *)(v7 + 1020);
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(v3 + 52) = 20;
      *v5 = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 20;
      *v5 = -1073676268;
    }
  }
  else
  {
LABEL_11:
    v5 = (_DWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  v4 = 1;
LABEL_13:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC4u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      *v5,
      *(_DWORD *)v10);
  }
  return v4;
}
