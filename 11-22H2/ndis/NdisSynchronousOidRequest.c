/*
 * XREFs of NdisSynchronousOidRequest @ 0x1C00B6860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C000D070 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00170C4 (WPP_RECORDER_SF_qqd_ea_1C00170C4.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B633C (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 */

__int64 __fastcall NdisSynchronousOidRequest(ULONG_PTR BugCheckParameter2, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_MINIPORT_BLOCK **v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // [rsp+38h] [rbp-10h]
  char v10[4]; // [rsp+38h] [rbp-10h]

  v4 = (struct _NDIS_MINIPORT_BLOCK **)(BugCheckParameter2 + 16);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = a2->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      (char)*v4,
      (char)a2,
      *(_DWORD *)v10);
  }
  v5 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( *(_BYTE *)(v5 + 56) <= 6u && (*(_BYTE *)(v5 + 56) != 6 || *(_BYTE *)(v5 + 57) < 0x50u) )
    ndisBugCheckEx(0x28uLL, 1uLL, 0LL, 0LL);
  v6 = ndisSynchronousOidRequestInternal(BugCheckParameter2, *v4, 0LL, a2);
  v7 = v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      (char)*v4,
      (char)a2,
      v9);
  }
  return v7;
}
