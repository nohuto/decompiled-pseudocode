/*
 * XREFs of ?ndisOidPreLinkState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A1A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C002702C (WPP_RECORDER_SF_qDD_ea_1C002702C.c)
 */

unsigned __int8 __fastcall ndisOidPreLinkState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  __int64 v4; // rdi
  _DWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  char v9[4]; // [rsp+38h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-30h]
  __int128 v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x93u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      v4);
  v5 = (_DWORD *)((char *)a1 + 40);
  if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) != 0 )
  {
    *v5 = -1073741637;
  }
  else
  {
    *v5 = 0;
    if ( *(_DWORD *)(v4 + 48) >= 0x28u )
    {
      HIDWORD(v10) = 0;
      LODWORD(v10) = 2621824;
      if ( *((_QWORD *)a1 + 2) )
      {
        DWORD1(v10) = *(_DWORD *)(v3 + 380);
        v11 = *(_OWORD *)(v3 + 392);
        DWORD2(v10) = *(_DWORD *)(v3 + 384);
        LODWORD(v12) = *(_DWORD *)(v3 + 408);
        v6 = *(_DWORD *)(v3 + 412);
      }
      else
      {
        DWORD1(v10) = *(_DWORD *)(v1 + 480);
        v11 = *(_OWORD *)(v1 + 792);
        DWORD2(v10) = *(_DWORD *)(v1 + 488);
        LODWORD(v12) = *(_DWORD *)(v1 + 808);
        v6 = *(_DWORD *)(v1 + 468);
      }
      HIDWORD(v12) = v6;
      v7 = *(_QWORD *)(v4 + 40);
      *(_OWORD *)v7 = v10;
      *(_OWORD *)(v7 + 16) = v11;
      *(_QWORD *)(v7 + 32) = v12;
      *v5 = 0;
      *(_QWORD *)(v4 + 52) = 40LL;
    }
    else
    {
      *(_DWORD *)(v4 + 56) = 40;
      *v5 = -1073676268;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *v5;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x94u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      1,
      *(_DWORD *)v9);
  }
  return 1;
}
