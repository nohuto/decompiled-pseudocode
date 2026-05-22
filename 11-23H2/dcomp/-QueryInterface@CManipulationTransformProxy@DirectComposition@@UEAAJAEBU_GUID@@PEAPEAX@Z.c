/*
 * XREFs of ?QueryInterface@CManipulationTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800888A0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CManipulationTransformProxy::QueryInterface(
        DirectComposition::CManipulationTransformProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( !a3 )
    return 2147942487LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fc882465_a93e_489d_8dec_e3d953eb8a69.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fc882465_a93e_489d_8dec_e3d953eb8a69.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fc882465_a93e_489d_8dec_e3d953eb8a69.Data4;
  if ( !v3 )
    goto LABEL_5;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fd55faa7_37e0_4c20_95d2_9be45bc33f55.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fd55faa7_37e0_4c20_95d2_9be45bc33f55.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fd55faa7_37e0_4c20_95d2_9be45bc33f55.Data4;
  if ( !v5 )
    goto LABEL_5;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data4;
  if ( !v6 )
    goto LABEL_5;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data4;
  if ( v7 )
  {
    result = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
LABEL_5:
    *a3 = this;
    result = 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return result;
}
