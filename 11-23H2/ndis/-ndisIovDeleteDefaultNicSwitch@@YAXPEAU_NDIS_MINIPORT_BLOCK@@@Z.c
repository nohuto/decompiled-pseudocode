/*
 * XREFs of ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00757E0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01534F0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008E00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?MINIPORT_INTERLOCKED_TEST_FLAG@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0061368 (-MINIPORT_INTERLOCKED_TEST_FLAG@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075990 (-ndisIovDeleteNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075A24 (-ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075F10 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisIovDeleteDefaultNicSwitch(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int SetMiniport; // edi
  char v3[4]; // [rsp+38h] [rbp-D0h]
  _DWORD v4[65]; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v5; // [rsp+148h] [rbp+40h] BYREF
  int v6; // [rsp+150h] [rbp+48h]

  SetMiniport = 0;
  memset(&v4[1], 0, 0xF8uLL);
  v5 = 0LL;
  v6 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x53u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      a1);
  if ( ndisIovFindSwitchBySwitchId(a1, 0) )
  {
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(a1, 0);
    if ( !MINIPORT_INTERLOCKED_TEST_FLAG(a1, 512) )
    {
      LODWORD(v5) = 786816;
      v6 = 0;
      memset(&v4[1], 0, 0xF8uLL);
      v4[23] |= 8u;
      *(_QWORD *)&v4[27] = &ndisIntReqGeneric;
      EtwActivityIdControl(3u, (LPGUID)&v4[43]);
      *(_QWORD *)&v4[11] = &v5;
      v4[1] = 15466902;
      v4[9] = 66105;
      *(_QWORD *)&v4[2] = 1LL;
      v4[13] = 12;
      SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, (struct _NDIS_OID_REQUEST *)&v4[1], 0, 0LL, 0LL);
    }
    ndisIovDeleteNicSwitch(a1, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v3 = SetMiniport;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x54u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)a1,
      *(_DWORD *)v3);
  }
}
