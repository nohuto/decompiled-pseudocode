/*
 * XREFs of ?QueryInterfaceHelper@CSkewTransformProxy@DirectComposition@@IEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800F3A08
 * Callers:
 *     ?QueryInterface@CSkewTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F34C0 (-QueryInterface@CSkewTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSkewTransformProxy::QueryInterfaceHelper(
        DirectComposition::CSkewTransformProxy *this,
        const struct _GUID *a2,
        void **a3,
        void *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e57aa735_dcdb_4c72_9c61_0591f58889ee.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e57aa735_dcdb_4c72_9c61_0591f58889ee.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e57aa735_dcdb_4c72_9c61_0591f58889ee.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fd55faa7_37e0_4c20_95d2_9be45bc33f55.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fd55faa7_37e0_4c20_95d2_9be45bc33f55.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fd55faa7_37e0_4c20_95d2_9be45bc33f55.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data4;
      if ( v6 )
      {
        v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data1 )
          v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data4;
        if ( v7 )
          return DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, a4);
      }
    }
  }
  *a3 = a4;
  return 0LL;
}
