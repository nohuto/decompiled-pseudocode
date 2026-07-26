/*
 * XREFs of ?ndisPMRejectAsync@@YAXPEAX@Z @ 0x1C0097A80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     NdisMIndicateStatusEx @ 0x1C001A410 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

void __fastcall ndisPMRejectAsync(PVOID P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  _QWORD *v2; // r14
  _QWORD *v4; // rbx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)P + 4);
  v2 = (_QWORD *)*((_QWORD *)P + 5);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x47u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v1);
  while ( v2 )
  {
    v4 = v2;
    v2 = (_QWORD *)*v2;
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusCode = *((_DWORD *)P + 12);
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = v4 + 5;
    StatusIndication.SourceHandle = v1;
    StatusIndication.StatusBufferSize = 4;
    NdisMIndicateStatusEx(v1, &StatusIndication);
    ExFreePoolWithTag(v4, 0);
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v1, 0xFu);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x48u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids,
      v1);
}
