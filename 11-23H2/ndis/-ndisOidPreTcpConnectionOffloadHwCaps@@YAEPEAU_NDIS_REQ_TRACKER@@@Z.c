/*
 * XREFs of ?ndisOidPreTcpConnectionOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3D10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C002702C (WPP_RECORDER_SF_qDD_ea_1C002702C.c)
 */

unsigned __int8 __fastcall ndisOidPreTcpConnectionOffloadHwCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  _DWORD *v4; // rdx
  unsigned __int8 v5; // bl
  __int64 v6; // rax
  __int64 v7; // rcx
  char v9[4]; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC5u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      v3);
  v4 = (_DWORD *)((char *)a1 + 40);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  v5 = 0;
  if ( !*(_QWORD *)a1 )
    goto LABEL_11;
  if ( !*(_QWORD *)(v1 + 4096) )
  {
LABEL_4:
    *v4 = -1073741637;
  }
  else
  {
    *v4 = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x14u )
    {
      v6 = *(_QWORD *)(v1 + 4096);
      v7 = *(_QWORD *)(v3 + 40);
      *(_OWORD *)v7 = *(_OWORD *)(v6 + 1024);
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 1040);
      *(_DWORD *)(v3 + 56) = 20;
      *(_DWORD *)(v3 + 52) = 20;
      *v4 = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 20;
      *v4 = -1073676268;
    }
  }
  v5 = 1;
LABEL_11:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v5;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC6u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      *v4,
      *(_DWORD *)v9);
  }
  return v5;
}
