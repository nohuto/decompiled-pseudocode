/*
 * XREFs of ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0092A68
 * Callers:
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C01375C0 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008E00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_L @ 0x1C0030D84 (WPP_RECORDER_SF_L_ea_1C0030D84.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memcpy_s @ 0x1C00360E0 (memcpy_s.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisAddWoLMagicPacket(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _SINGLE_LIST_ENTRY *v2; // rsi
  unsigned int v3; // edi
  _SINGLE_LIST_ENTRY *Next; // rax
  KIRQL v5; // dl
  unsigned int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-D8h]
  KIRQL NewIrql[16]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v10; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v11[52]; // [rsp+158h] [rbp+50h] BYREF

  v2 = 0LL;
  NewIrql[0] = 0;
  v3 = 0;
  memset(&v10, 0, 0xF8uLL);
  memset(v11, 0, 0xC4uLL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x53u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  Next = a1->WOLPatternList.Next;
  while ( Next )
  {
    v2 = Next;
    if ( HIDWORD(Next[7].Next) == 2 )
      break;
    Next = Next->Next;
    v2 = 0LL;
  }
  v5 = NewIrql[0];
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v5);
  if ( !v2 )
  {
    v11[0] = 12845440;
    v11[3] = 2;
    LOWORD(v11[4]) = MagicPacketStr.Length;
    memcpy_s((char *)&v11[4] + 2, 0x80uLL, off_1C00F47D8, MagicPacketStr.Length);
    memset(&v10, 0, 0xF8uLL);
    *(_DWORD *)&v10.NdisReserved[16] |= 8u;
    *(_QWORD *)&v10.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v10.NdisReserved[96]);
    v10.PortNumber = 0;
    *(_DWORD *)&v10.NdisReserved[16] |= 0x100000u;
    v10.DATA.QUERY_INFORMATION.InformationBuffer = v11;
    v10.Header = (NDIS_OBJECT_HEADER)15466902;
    v10.DATA.QUERY_INFORMATION.Oid = -50265846;
    v10.RequestType = NdisRequestSetInformation;
    v10.DATA.QUERY_INFORMATION.InformationBufferLength = 196;
    v6 = ndisQuerySetMiniportEx(a1, 0LL, &v10, 0, 0LL, 0LL);
    v3 = v6;
    if ( v6 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v3;
      LODWORD(v8) = v6;
      WPP_RECORDER_SF_L(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x54u,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
        v8);
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x55u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      (char)a1,
      v3);
  return v3;
}
