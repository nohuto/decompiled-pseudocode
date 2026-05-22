/*
 * XREFs of ?QueryInterface@CEffectGroupProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CEffectGroupProxy::QueryInterface(
        DirectComposition::CEffectGroupProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  if ( !a3 )
    return 2147942487LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a7929a74_e6b2_4bd6_8b95_4040119ca34d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a7929a74_e6b2_4bd6_8b95_4040119ca34d.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a7929a74_e6b2_4bd6_8b95_4040119ca34d.Data4;
  if ( !v3 )
    goto LABEL_11;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data4;
  if ( !v4 )
  {
LABEL_11:
    *a3 = this;
    result = 0LL;
    goto LABEL_12;
  }
  result = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
  if ( (int)result >= 0 )
LABEL_12:
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return result;
}
