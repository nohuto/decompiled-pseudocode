/*
 * XREFs of ?ndisAllocateOpenOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C009BE28
 * Callers:
 *     ?ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A2788 (-ndisOidPreOpenSetEncapsulation@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A3A70 (-ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_OPEN_OFFLOAD *Pool2; // rax
  unsigned int v3; // ebx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x54u,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      a1);
  Pool2 = (_NDIS_OPEN_OFFLOAD *)ExAllocatePool2(64LL, 112LL, 1718568014);
  a1->Offload = Pool2;
  v3 = Pool2 == 0LL ? 0xC000009A : 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x55u,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      Pool2);
  return v3;
}
