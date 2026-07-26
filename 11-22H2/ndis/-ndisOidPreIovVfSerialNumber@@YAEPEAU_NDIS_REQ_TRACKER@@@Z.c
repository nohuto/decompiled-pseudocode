/*
 * XREFs of ?ndisOidPreIovVfSerialNumber@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0026E9C (WPP_RECORDER_SF_qDD_ea_1C0026E9C.c)
 */

char __fastcall ndisOidPreIovVfSerialNumber(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  char v4; // bl
  _DWORD *v5; // rdx
  __int64 v6; // rax
  _DWORD *v7; // rcx
  char v9[4]; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x4Fu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      v3,
      v1);
  v5 = (_DWORD *)((char *)a1 + 40);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_11;
  *v5 = 0;
  if ( *(_DWORD *)(v1 + 48) >= 8u )
  {
    if ( !v3 )
      goto LABEL_13;
    v6 = *(_QWORD *)(v3 + 4608);
    if ( v6 && (*(_BYTE *)(v6 + 8) & 5) == 5 && *(_QWORD *)(v3 + 4864) )
    {
      v7 = *(_DWORD **)(v1 + 40);
      *v7 = 524672;
      v7[1] = *(_DWORD *)(v3 + 4872);
      *(_DWORD *)(v1 + 52) = 8;
      goto LABEL_12;
    }
LABEL_11:
    *v5 = -1073741637;
    goto LABEL_12;
  }
  *(_DWORD *)(v1 + 56) = 8;
  *v5 = -1073676268;
LABEL_12:
  v4 = 1;
LABEL_13:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *v5;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x50u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      v3,
      v4,
      *(_DWORD *)v9);
  }
  return v4;
}
