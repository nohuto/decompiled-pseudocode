/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x180073AFC
 * Callers:
 *     _CSpatialAudioTechnologies::CreateTopologyList_::_1_::dtor$9 @ 0x180079EC7 (_CSpatialAudioTechnologies--CreateTopologyList_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
