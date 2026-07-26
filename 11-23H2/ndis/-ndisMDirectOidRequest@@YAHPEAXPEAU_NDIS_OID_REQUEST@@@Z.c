/*
 * XREFs of ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B5650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000D200 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023980 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0024DC4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00290D4 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?IsOidRequestDirectOid@@YAEK@Z @ 0x1C00B52D8 (-IsOidRequestDirectOid@@YAEK@Z.c)
 */

__int64 __fastcall ndisMDirectOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned int v4; // edi
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  char v7[4]; // [rsp+38h] [rbp-20h]

  v4 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      a2);
  if ( IsOidRequestDirectOid(a2->DATA.QUERY_INFORMATION.Oid) )
  {
    if ( ndisReferenceOpenByHandle((__int64)a1, 6u) )
    {
      if ( !*(_QWORD *)(a1[3] + 776LL) )
        goto LABEL_10;
      v5 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
      if ( (v5->DriverVerifyFlags & 0x400) == 0 )
        a2->SupportedRevision = 1;
      memset(a2->NdisReserved, 0, 0x70uLL);
      *(_DWORD *)&a2->NdisReserved[16] |= 0x200020u;
      *(_QWORD *)&a2->NdisReserved[24] = 0LL;
      *(_QWORD *)&a2->NdisReserved[32] = a1;
      v4 = ndisDoDirectOidRequest(a2, v5, 0LL, 0LL);
      if ( v4 != 259 )
LABEL_10:
        ndisMDereferenceOpenUnlocked((__int64)a1, 6u);
    }
    else
    {
      v4 = -1073676286;
    }
  }
  else
  {
    v4 = -1073741637;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v7);
  }
  return v4;
}
