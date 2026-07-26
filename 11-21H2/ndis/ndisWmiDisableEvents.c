/*
 * XREFs of ndisWmiDisableEvents @ 0x1C0088F50
 * Callers:
 *     ndisWMIDispatch @ 0x1C00102C0 (ndisWMIDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0012AEC (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 */

__int64 __fastcall ndisWmiDisableEvents(struct _NDIS_MINIPORT_BLOCK *a1, struct _GUID *a2)
{
  unsigned int v2; // ebx
  unsigned int Flags; // eax
  struct _NDIS_GUID *v7; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x46u,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      a1);
  ndisWmiGetGuid(&v7, a1, a2, 0);
  if ( v7 )
  {
    Flags = v7->Flags;
    if ( (Flags & 2) != 0 )
      v7->Flags = Flags & 0x7FFFFFFF;
    else
      v2 = -1073741808;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        (_DWORD)v7 + 18,
        (_WORD)v7 + 71,
        (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
        a1);
    v2 = -1073741811;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x48u,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      (char)a1,
      v2);
  return v2;
}
