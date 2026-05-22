/*
 * XREFs of ?QueryInterface@CSharedTransform3DProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F35D0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedTransform3DProxy::QueryInterface(
        DirectComposition::CSharedTransform3DProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_71185722_246b_41f2_aad1_0443f7f4bfc2.Data4;
  if ( !v4 )
    goto LABEL_11;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8.Data4;
  if ( v5 )
  {
    result = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
LABEL_11:
    *a3 = this;
    result = 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return result;
}
