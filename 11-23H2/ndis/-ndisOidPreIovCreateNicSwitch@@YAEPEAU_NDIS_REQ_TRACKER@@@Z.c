/*
 * XREFs of ?ndisOidPreIovCreateNicSwitch@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077A40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqDD @ 0x1C0007244 (WPP_RECORDER_SF_qqqDD.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0007D8C (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C154 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DD8A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012EFDC (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovCreateNicSwitch(struct _NDIS_REQ_TRACKER *a1, int a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbp
  __int64 v4; // rsi
  char v5; // di
  char v6; // r10
  int v7; // r10d
  bool v8; // zf
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // r9
  char v14[4]; // [rsp+48h] [rbp-20h]

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 4);
  v5 = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Au,
      0xCu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)v2,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 1),
      v4);
  v6 = 0;
  if ( !*(_QWORD *)a1 )
    goto LABEL_4;
  if ( !ndisIovNicSwitchWithoutIovSupported(v2) )
  {
    v8 = ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4)) == &ndisIntReqGeneric;
    goto LABEL_7;
  }
  NicSwitchCurrentCapabilities = v2->NicSwitchCurrentCapabilities;
  if ( !NicSwitchCurrentCapabilities
    || NicSwitchCurrentCapabilities->Header.Revision < 2u
    || NicSwitchCurrentCapabilities->Header.Size < 0x74u
    || !NicSwitchCurrentCapabilities->MaxNumSwitches
    || *(_DWORD *)(v4 + 4) != 12 )
  {
    goto LABEL_8;
  }
  *((_DWORD *)a1 + 10) = v7;
  if ( *(_DWORD *)(v4 + 48) >= 0x224u )
  {
    if ( *(_DWORD *)(v4 + 52) >= 0x224u )
    {
      v11 = *(_QWORD *)(v4 + 40);
      LOBYTE(a2) = *(_BYTE *)(v11 + 1);
      if ( (_BYTE)a2
        && *(_DWORD *)(v11 + 12) == v7
        && *(_DWORD *)(v11 + 8) == 1
        && *(_DWORD *)(v11 + 532) <= v2->NicSwitchCurrentCapabilities->MaxNumVFs )
      {
        if ( (unsigned __int8)a2 < 2u )
        {
          v8 = ndisIovHWvRSSSupported(v2) == 0;
LABEL_7:
          if ( !v8 )
          {
LABEL_8:
            *((_DWORD *)a1 + 10) = -1073741637;
            goto LABEL_9;
          }
LABEL_4:
          v5 = v6;
          goto LABEL_9;
        }
        if ( !ndisIovHWvRSSSupported(v2) )
        {
          if ( v12 != 1 )
            goto LABEL_8;
          goto LABEL_4;
        }
        if ( v12 && v12 <= *(_DWORD *)(v13 + 128) )
          goto LABEL_4;
      }
      *((_DWORD *)a1 + 10) = -1073741811;
    }
    else
    {
      *(_DWORD *)(v4 + 68) = 548;
      *((_DWORD *)a1 + 10) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v4 + 68) = 548;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
LABEL_9:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Au,
      0xDu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 1),
      v5,
      *(_DWORD *)v14);
  }
  return v5;
}
