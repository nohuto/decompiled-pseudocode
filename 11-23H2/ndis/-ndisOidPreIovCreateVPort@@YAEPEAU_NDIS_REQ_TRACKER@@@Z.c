/*
 * XREFs of ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDD @ 0x1C0007C88 (WPP_RECORDER_SF_qqDD.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C154 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00753D4 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rsi
  int *v3; // r14
  char VPort; // bl
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rax
  char v9[4]; // [rsp+40h] [rbp-28h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Bu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      v1);
  v3 = (int *)((char *)a1 + 40);
  if ( v1[1] != 12 )
    goto LABEL_4;
  VPort = 0;
  *v3 = 0;
  if ( v1[12] < 0x23Cu )
  {
    v5 = -1073676268;
LABEL_9:
    v1[17] = 572;
    VPort = 1;
    *v3 = v5;
    goto LABEL_16;
  }
  if ( v1[13] < 0x23Cu )
  {
    v5 = -1073676266;
    goto LABEL_9;
  }
  if ( *(_QWORD *)a1 )
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(*(struct _NDIS_MINIPORT_BLOCK **)a1) )
    {
      v7 = *(_QWORD *)(v6 + 4608);
      if ( !v7 || !*(_QWORD *)(v6 + 3568) || (*(_BYTE *)(v7 + 8) & 3) != 3 )
      {
LABEL_4:
        VPort = 1;
        *v3 = -1073741637;
        goto LABEL_16;
      }
    }
    VPort = ndisIovCreateVPort(a1);
  }
LABEL_16:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *v3;
    WPP_RECORDER_SF_qqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Cu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      VPort,
      *(_DWORD *)v9);
  }
  return VPort;
}
