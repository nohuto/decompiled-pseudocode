/*
 * XREFs of ?ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007C88 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0074D1C (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rsi
  int *v3; // r14
  char VF; // bl
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  char v9[4]; // [rsp+40h] [rbp-28h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Du,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      v1);
  v3 = (int *)((char *)a1 + 40);
  if ( v1[1] != 12 )
    goto LABEL_14;
  VF = 0;
  *v3 = 0;
  if ( v1[12] >= 0x660u )
  {
    if ( v1[13] < 0x660u )
    {
      v5 = -1073676266;
      goto LABEL_8;
    }
    v6 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_16;
    v7 = *(_QWORD *)(v6 + 4608);
    if ( v7 && *(_QWORD *)(v6 + 3568) && (*(_BYTE *)(v7 + 8) & 3) == 3 )
    {
      VF = ndisIovAllocateVF(a1);
      goto LABEL_16;
    }
LABEL_14:
    *v3 = -1073741637;
    goto LABEL_15;
  }
  v5 = -1073676268;
LABEL_8:
  v1[17] = 1632;
  *v3 = v5;
LABEL_15:
  VF = 1;
LABEL_16:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *v3;
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x1Eu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      VF,
      *(_DWORD *)v9);
  }
  return VF;
}
