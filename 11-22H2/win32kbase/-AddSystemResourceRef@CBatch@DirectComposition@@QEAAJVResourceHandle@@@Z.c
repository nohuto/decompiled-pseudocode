/*
 * XREFs of ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C0030FAC
 * Callers:
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00318F0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C0032A98 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 * Callees:
 *     ?Create@CSystemResourceReference@CBatch@DirectComposition@@SAJVResourceHandle@@PEAVCApplicationChannel@3@PEAPEAV123@@Z @ 0x1C0030EE4 (-Create@CSystemResourceReference@CBatch@DirectComposition@@SAJVResourceHandle@@PEAVCApplicationC.c)
 */

__int64 __fastcall DirectComposition::CBatch::AddSystemResourceRef(__int64 a1, int a2)
{
  __int64 result; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  result = DirectComposition::CBatch::CSystemResourceReference::Create(a2, *(_QWORD *)(a1 + 8), (__int64 *)&v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    *v5 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v4;
  }
  return result;
}
