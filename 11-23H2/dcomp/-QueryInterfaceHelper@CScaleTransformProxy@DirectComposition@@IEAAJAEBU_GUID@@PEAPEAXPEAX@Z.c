/*
 * XREFs of ?QueryInterfaceHelper@CScaleTransformProxy@DirectComposition@@IEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800F3984
 * Callers:
 *     ?QueryInterface@CScaleTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F33C0 (-QueryInterface@CScaleTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransformProxy::QueryInterfaceHelper(
        DirectComposition::CScaleTransformProxy *this,
        const struct _GUID *a2,
        void **a3,
        void *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_71fde914_40ef_45ef_bd51_68b037c339f9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_71fde914_40ef_45ef_bd51_68b037c339f9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_71fde914_40ef_45ef_bd51_68b037c339f9.Data4;
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
