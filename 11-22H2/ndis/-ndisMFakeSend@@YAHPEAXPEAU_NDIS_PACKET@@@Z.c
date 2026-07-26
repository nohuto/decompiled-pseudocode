/*
 * XREFs of ?ndisMFakeSend@@YAHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C006B590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMFakeSend(_QWORD *a1, struct _NDIS_PACKET *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx

  v2 = a1[2];
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x4Fu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      v2);
  v4 = -1073741823;
  if ( v2 )
    v4 = *(_DWORD *)(v2 + 540);
  if ( *(_BYTE *)(a1[3] + 56LL) < 6u && (v4 & 0xC0230000) == 0xC0230000 )
    v4 = (unsigned __int16)v4 | 0xC0010000;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x50u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      v2);
  return v4;
}
