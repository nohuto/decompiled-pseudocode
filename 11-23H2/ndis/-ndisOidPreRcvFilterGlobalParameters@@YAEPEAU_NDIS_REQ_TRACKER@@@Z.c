/*
 * XREFs of ?ndisOidPreRcvFilterGlobalParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0085130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007C88 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 */

char __fastcall ndisOidPreRcvFilterGlobalParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // r14
  __int64 v5; // r12
  char v6; // di
  __int64 v7; // r15
  int v8; // eax
  char v10[4]; // [rsp+40h] [rbp-38h]

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *(_QWORD *)a1;
  v5 = *((_QWORD *)a1 + 3);
  v6 = 0;
  v7 = *(_QWORD *)(v1 + 40);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      v3,
      v5,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    v2 = -1073676268;
    goto LABEL_12;
  }
  if ( !v3 )
    goto LABEL_13;
  if ( !*(_QWORD *)(v3 + 3536) )
  {
LABEL_4:
    v2 = -1073741637;
LABEL_12:
    *((_DWORD *)a1 + 10) = v2;
    v6 = 1;
    goto LABEL_13;
  }
  v8 = *(_DWORD *)(v1 + 4);
  if ( v8 == 2 || !v8 )
  {
    *(_QWORD *)v7 = 1048960LL;
    *(_DWORD *)(v7 + 12) = *(_DWORD *)(v3 + 3532);
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(v3 + 3528);
    *(_DWORD *)(v1 + 52) = 16;
    goto LABEL_12;
  }
LABEL_13:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v2;
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_978108687cf53f4f40ba23c4c4a475db_Traceguids,
      v3,
      v5,
      v6,
      *(_DWORD *)v10);
  }
  return v6;
}
