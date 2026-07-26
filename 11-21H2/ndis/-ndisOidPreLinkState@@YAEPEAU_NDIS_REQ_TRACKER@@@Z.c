/*
 * XREFs of ?ndisOidPreLinkState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009BB70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 */

unsigned __int8 __fastcall ndisOidPreLinkState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rax
  char v8[4]; // [rsp+38h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-30h]
  __int128 v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x93u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      v1,
      v4);
  if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v4 + 48) >= 0x28u )
    {
      HIDWORD(v9) = 0;
      LODWORD(v9) = 2621824;
      if ( *((_QWORD *)a1 + 2) )
      {
        DWORD1(v9) = *(_DWORD *)(v3 + 380);
        v10 = *(_OWORD *)(v3 + 392);
        DWORD2(v9) = *(_DWORD *)(v3 + 384);
        LODWORD(v11) = *(_DWORD *)(v3 + 408);
        v5 = *(_DWORD *)(v3 + 412);
      }
      else
      {
        DWORD1(v9) = *(_DWORD *)(v1 + 480);
        v10 = *(_OWORD *)(v1 + 792);
        DWORD2(v9) = *(_DWORD *)(v1 + 488);
        LODWORD(v11) = *(_DWORD *)(v1 + 808);
        v5 = *(_DWORD *)(v1 + 468);
      }
      HIDWORD(v11) = v5;
      v6 = *(_QWORD *)(v4 + 40);
      *(_OWORD *)v6 = v9;
      *(_OWORD *)(v6 + 16) = v10;
      *(_QWORD *)(v6 + 32) = v11;
      *((_DWORD *)a1 + 10) = 0;
      *(_QWORD *)(v4 + 52) = 40LL;
    }
    else
    {
      *(_DWORD *)(v4 + 56) = 40;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x94u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      v1,
      1,
      *(_DWORD *)v8);
  }
  return 1;
}
