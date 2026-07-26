/*
 * XREFs of ?ndisOidPostMediaState@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A0890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     NdisMIndicateStatusEx @ 0x1C001A410 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

void __fastcall ndisOidPostMediaState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int *v4; // rdx
  int v5; // r8d
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v7[4]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v8; // [rsp+C0h] [rbp+17h]
  __int64 v9; // [rsp+C8h] [rbp+1Fh]
  int v10; // [rsp+D0h] [rbp+27h]
  int v11; // [rsp+D4h] [rbp+2Bh]

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x28u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v2,
      v1);
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v2 + 32) < 6u )
  {
    v4 = *(int **)(v1 + 40);
    v5 = *v4;
    if ( (*v4 == 0) != ((*(_DWORD *)(v2 + 120) >> 29) & 1) )
    {
      v7[3] = 0;
      v7[0] = 2621824;
      v7[1] = (v5 != 0) + 1;
      v9 = *(_QWORD *)(v2 + 2768);
      v8 = *(_QWORD *)(v2 + 2760);
      v7[2] = *(_DWORD *)(v2 + 348);
      v10 = *(_DWORD *)(v2 + 808);
      v11 = *(_DWORD *)(v2 + 468);
      StatusIndication.StatusBuffer = v7;
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.SourceHandle = (void *)v2;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBufferSize = -2;
      NdisMIndicateStatusEx((NDIS_HANDLE)v2, &StatusIndication);
      v4 = *(int **)(v1 + 40);
    }
    *v4 = (*(_DWORD *)(v2 + 120) & 0x20000000) == 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x29u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v2,
      v1);
}
