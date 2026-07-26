/*
 * XREFs of ?ndisMFakeReset@@YAHPEAX@Z @ 0x1C006B4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMFakeReset(_QWORD *a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x55u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  v2 = a1[2];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 540);
    if ( *(_BYTE *)(a1[3] + 56LL) < 6u && (v3 & 0xC0230000) == 0xC0230000 )
      v3 = (unsigned __int16)v3 | 0xC0010000;
  }
  else
  {
    v3 = -1073741823;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0x56u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  return v3;
}
