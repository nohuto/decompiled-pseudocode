/*
 * XREFs of NdisSynchronousOidRequest @ 0x1C00B1680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0016E68 (WPP_RECORDER_SF_qqd.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B1164 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 */

__int64 __fastcall NdisSynchronousOidRequest(ULONG_PTR BugCheckParameter2, struct _NDIS_OID_REQUEST *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // [rsp+38h] [rbp-10h]
  char v9[4]; // [rsp+38h] [rbp-10h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = a2->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      *(_QWORD *)(BugCheckParameter2 + 16),
      (char)a2,
      *(_DWORD *)v9);
  }
  v4 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( *(_BYTE *)(v4 + 56) <= 6u && (*(_BYTE *)(v4 + 56) != 6 || *(_BYTE *)(v4 + 57) < 0x50u) )
    ndisBugCheckEx(0x28uLL, 1uLL, 0LL, 0LL);
  v5 = ndisSynchronousOidRequestInternal(
         BugCheckParameter2,
         *(struct _NDIS_MINIPORT_BLOCK **)(BugCheckParameter2 + 16),
         0LL,
         a2);
  v6 = v5;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v5;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      *(_QWORD *)(BugCheckParameter2 + 16),
      (char)a2,
      v8);
  }
  return v6;
}
