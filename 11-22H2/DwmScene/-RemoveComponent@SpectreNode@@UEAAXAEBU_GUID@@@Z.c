/*
 * XREFs of ?RemoveComponent@SpectreNode@@UEAAXAEBU_GUID@@@Z @ 0x180014FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize@SpectreMeshComponent@@IEAAXXZ @ 0x180014790 (-Uninitialize@SpectreMeshComponent@@IEAAXXZ.c)
 */

void __fastcall SpectreNode::RemoveComponent(SpectreNode *this, const struct _GUID *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7052b94f_cd63_4bd1_b7b2_84716b126ddb.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7052b94f_cd63_4bd1_b7b2_84716b126ddb.Data1 )
    v2 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7052b94f_cd63_4bd1_b7b2_84716b126ddb.Data4;
  if ( !v2 )
    SpectreMeshComponent::Uninitialize((SpectreNode *)((char *)this + 16));
}
