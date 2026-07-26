/*
 * XREFs of ?ndisOidPreIovInvalidateConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0078D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqDD @ 0x1C00070B4 (WPP_RECORDER_SF_qqqDD.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0007BFC (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall ndisOidPreIovInvalidateConfigBlock(struct _NDIS_REQ_TRACKER *a1, int a2)
{
  char v3; // si
  int v4; // edx
  char v6[4]; // [rsp+48h] [rbp-20h]

  v3 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Au,
      0x15u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 1),
      *((_QWORD *)a1 + 4));
  if ( ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4)) == &ndisIntReqGeneric )
    v3 = 0;
  else
    *((_DWORD *)a1 + 10) = -1073741637;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      0x1Au,
      0x16u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 1),
      v3,
      *(_DWORD *)v6);
  }
  return v3;
}
