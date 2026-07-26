/*
 * XREFs of ?ndisMFakeOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C006B420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDd @ 0x1C000D140 (WPP_RECORDER_SF_qDd.c)
 */

__int64 __fastcall ndisMFakeOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  char v5[4]; // [rsp+38h] [rbp-10h]

  v2 = a1[2];
  v3 = -1073741823;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 540);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v5 = v3;
    WPP_RECORDER_SF_qDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      (int)a1,
      0x57u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      a2->DATA.QUERY_INFORMATION.Oid,
      *(_DWORD *)v5);
  }
  return v3;
}
