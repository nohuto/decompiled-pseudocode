/*
 * XREFs of ?ndisOidPreIovCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C002702C (WPP_RECORDER_SF_qDD_ea_1C002702C.c)
 */

char __fastcall ndisOidPreIovCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  int v2; // ebx
  __int64 v3; // rbp
  char v4; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  char v9[4]; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x17u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      v1,
      v3);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) >= 0xCu )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !v1 )
      goto LABEL_13;
    v6 = *(_DWORD *)(v3 + 32) == 66121 ? *(_QWORD *)(v1 + 4600) : *(_QWORD *)(v1 + 4608);
    if ( !v6 )
    {
LABEL_6:
      v2 = -1073741637;
    }
    else
    {
      v7 = *(_QWORD *)(v3 + 40);
      *(_QWORD *)v7 = *(_QWORD *)v6;
      *(_DWORD *)(v7 + 8) = *(_DWORD *)(v6 + 8);
      *(_DWORD *)(v3 + 52) = 12;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 56) = 12;
    v2 = -1073676268;
  }
  *((_DWORD *)a1 + 10) = v2;
  v4 = 1;
LABEL_13:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v2;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x18u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      v1,
      v4,
      *(_DWORD *)v9);
  }
  return v4;
}
